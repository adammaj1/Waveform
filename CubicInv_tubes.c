/*

gcc CubicInv_tubes.c -Wall -Wextra -lm -pedantic -std=c99
./a.out > CubicInv_tubes.ppm
convert CubicInv_tubes.ppm CubicInv_tubes.png
rm CubicInv_tubes.ppm

*/


#include <math.h>
#include <stdio.h>
#include <stdlib.h>


typedef enum  {no, steps, tubes } GradientJoiningType; 
int NoOfSegments = 4; // the number should be even, 2 segments create one "wave" : bottom, top, bottom}




// fractional part of real (double) number
double frac(double d){

	double fraction = d - ((long)d);
	return fraction;
}
        
// create wave = periodic signal
double ModifyPosition(const double position, const GradientJoiningType GradientJoining){
	
	// input position  should be in  [0,1] range 
	double p = position; // p = local copy of position
	// if position > 1 then we have repetition of colors = periodic function = wave   
	
	
	switch(GradientJoining){
	
		case no : {break;} // return input position without modifications
		
		// periodic waves with different joinings
		case steps : {	p = p * NoOfSegments; // periodic  = change range
				p = frac(p); 
    				break;}
    				
		case tubes : {	p = p * NoOfSegments; // periodic = change range
				int ip = (int)p;
      				p = p-ip; // fractional part 
      				if (ip % 2) {p = 1.0-p;} // reverse gradient
				break;}
		default:{}
	}
	
	return p; // output in [0,1] range

}


/*
shaping functions:  shaping signals in the normalized range [0, 1]
function monotonic in range [0,1]
*/
double shape(const double x){
	double p = 1.0 - x; // inverse input -> ascending wave	
	p = 1.0 - p*p*p; // inverse function of p^3
  	return p;	
}



// **********************************************************************************************************


int main(void) {
  double aspect_ratio = 3.0 / 1.0;
  int h = 200;
  int w = h * aspect_ratio;
  int color_channels = 3; // rgb
  GradientJoiningType GradientJoining = tubes; // 
  
  
  unsigned char *img = malloc(color_channels * w * h); // image
  for (int j = 0; j < h; ++j) {
    for (int i = 0; i < w; ++i) {
      double position = i / (double)w;   //  linear scale of shade of gray in [0.0, 1.0] range 
      
      
      position = ModifyPosition(position,  GradientJoining); // wave with NoOfSegments segments
      position = shape(position); // shaping of single wave segment
      
      unsigned char g = (int)(255 * position); // convert to integer in [0,255] range

      //  and save rgb color to array
      img[color_channels * (j * w + i) + 0] = g;
      img[color_channels * (j * w + i) + 1] = g;
      img[color_channels * (j * w + i) + 2] = g;
    }
  }

  printf("P6\n%d %d\n255\n", w, h); // binary ppm
  fwrite(img, color_channels * w * h, 1, stdout);
  free(img);

  return 0;
}

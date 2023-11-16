/*

gcc Linear_no.c -Wall -Wextra -lm -pedantic -std=c99
./a.out >Linear_no.ppm
convert Linear_no.ppm Linear_no.png
rm Linear_no.ppm

*/


#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  double aspect_ratio = 3.0 / 1.0;
  int h = 200;
  int w = h * aspect_ratio;
  int color_channels = 3;
  unsigned char *img = malloc(color_channels * w * h); // image
  
  
  for (int j = 0; j < h; ++j) {
    for (int i = 0; i < w; ++i) {
      double g = i / (double)w; //  linear scale of shade of gray in [0.0, 1.0] range 
	double ig = (int)(255 * g); // convert to integer in [0,255] range
	
      // save rgb color to image array
      img[color_channels * (j * w + i) + 0] = ig;
      img[color_channels * (j * w + i) + 1] = ig;
      img[color_channels * (j * w + i) + 2] = ig;
    }
  }

  printf("P6\n%d %d\n255\n", w, h); // binary ppm
  fwrite(img, color_channels * w * h, 1, stdout);
  free(img);

  return 0;
}

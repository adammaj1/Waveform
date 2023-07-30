/*


how to:
*  create data ( continous, discrete, periodic, ...)
* draw waves

In electronics, acoustics, and related fields, the waveform of a signal 
https://en.wikipedia.org/wiki/Waveform




gcc d.c -Wall -Wextra -lm

a.out > c.txt
gnuplot
plot "c.txt" with lines 





*/

#include <stdio.h>
#include <math.h> // sine


int iMax = 100;
	double tMin = 0.0;
	double tMax = 1.0;
	double dt ;
	double t ;

double p_step = 0.1; // for discrete gradient
int segments = 4;





// ------------------------------------------------------------------------------------
// ------------------------- functions -----------------------------------------------
// -----------------------------------------------------------------------------------


// fractional part of real (double) number
double frac(double d){

	double fraction = d - ((long)d);
	return fraction;
}


// for discrete gradient, smth like round(double>1.0) but for double in range [0,1]
double double2steps(double p){

	double s = p / p_step;
	s = s - frac(s);
	s *= p_step;
	return s;


}


// ----------------------------------------------------------------
// ------------------------ drawing funcions---------------------------------
// -----------------------------------------------------------------




// continous without waves = monotonous
int continous_data(){

	// continpus plot 
	fprintf(stdout, "# x \t y\n"); // header for gnuplot
	
	for (int i = 0; i < iMax; ++i){
		fprintf(stdout, "%d \t %.16f\n", i, t);
		t = tMin  + i*dt;
	
	
	}

	return 0;

}







// discrete data , waves, steps = LSM
int discrete_data(){

	// continous plot 
	fprintf(stdout, "# x \t y\n"); // header for gnuplot
	
	for (int i = 0; i < iMax; ++i){
		fprintf(stdout, "%d \t %.16f\n", i, t);
		t = tMin  + i*dt;
		t = double2steps(t);
	
	
	}

	return 0;

}





// discrete waves, Sawtooth wave = https://en.wikipedia.org/wiki/Sawtooth_wave
/*
	gcc d.c -Wall -Wextra
	./a.out > sawtooth.txt
	gnuplot
	plot "sawtooth.txt" with lines

*/ 
int sawtooth_data(){

	// continous plot 
	fprintf(stdout, "# x \t y\n"); // header for gnuplot
	
	for (int i = 0; i < iMax; ++i){
		fprintf(stdout, "%d \t %.16f\n", i, t);
		t = tMin  + i*dt;
		t = t * segments; // periodic = change range
		int it = (int)t;
      		t = t-it; // fractional part 
      		// if (it % 2) {t = 1.0-t;} // reverse gradient
	
	
	}

	return 0;

}






// discrete waves, tubes = triangle wave = https://en.wikipedia.org/wiki/Triangle_wave

/*
	gcc d.c -Wall -Wextra
	./a.out > tubes.txt
	gnuplot
	plot "tubes.txt" with linespoints

*/ 
int tubes_data(){

	// discrete plot, wave  
	fprintf(stdout, "# x \t y\n"); // header for gnuplot
	
	for (int i = 0; i < iMax; ++i){
		fprintf(stdout, "%d \t %.16f\n", i, t);
		t = tMin  + i*dt;
		t *= segments; // periodic = change range
		int it = (int)t;
      		t = t-it; // fractional part 
      		if (it % 2) {t = 1.0-t;} // reverse gradient
	
	
	}

	return 0;

}




// sine with waves 
/*
	gcc d.c -Wall -Wextra
	./a.out > sin.txt
	gnuplot
	plot "sin.txt" with lines

*/ 
int sine_data(){

	// continpus plot 
	fprintf(stdout, "# x \t y\n"); // header for gnuplot
	
	for (int i = 0; i < iMax; ++i){
		fprintf(stdout, "%d \t %.16f\n", i, t);
		t = tMin  + i*dt;
		t *= 2.0*M_PI*segments;
		t = sin(t);
	
	}

	return 0;

}



/* square wave = because of shape
 Pulse wave https://en.wikipedia.org/wiki/Pulse_wave
	
	gcc d.c -Wall -Wextra
	./a.out > sin.txt
	gnuplot
	set yrange [-2,2]
	plot "square.txt" with lines

*/
int square_wave(){

	// continpus plot 
	fprintf(stdout, "# x \t y\n"); // header for gnuplot
	
	for (int i = 0; i < iMax; ++i){
		fprintf(stdout, "%d \t %.16f\n", i, t);
		t = tMin  + i*dt;
		t *= segments; // periodic = change range
		int it = (int)t;
      		t = t-it; // fractional part 
      		if (it % 2) 
      			{t = 1.0;} 	
      			else { t = -1.0;}
	
	}

	return 0;

}




int main(void){


	dt = (tMax - tMin)/iMax;
	t = tMin;
	
	// continous_data();
	// discrete_data();
	// tubes_data();
	// sawtooth_data();
	// sine_data();
	square_wave();

	return 0;

}


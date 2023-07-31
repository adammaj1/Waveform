/*
https://gitlab.com/adammajewski/color_gradient
https://github.com/adammaj1/1D-RGB-color-gradient

  =============================
  gcc g.c -Wall -Wextra -lm

  ./a.out 

  gnuplot plot.gp

or 

make

  ===================
c program creates (fMax * jMax) images and txt files


// ----------------- text output --------------------------
make
chmod +x g.sh # run thru bash file 
./g.sh
g.c: In function ‘main’:
g.c:953:17: warning: comparison of integer expressions of different signedness: ‘ColorTransferFunctionType’ and ‘int’ [-Wsign-compare]
  953 |   for ( f = 0; f< fMax; ++f)
      |                 ^
g.c:954:24: warning: comparison of integer expressions of different signedness: ‘GradientJoiningType’ and ‘int’ [-Wsign-compare]
  954 |         for ( j = 0; j < jMax; ++j)
      |                        ^
File Linear_no.ppm saved. 
File Linear_steps.ppm saved. 
File Linear_tubes.ppm saved. 
File Quadratic_no.ppm saved. 
File Quadratic_steps.ppm saved. 
File Quadratic_tubes.ppm saved. 
File Cubic_no.ppm saved. 
File Cubic_steps.ppm saved. 
File Cubic_tubes.ppm saved. 
File CubicInv_no.ppm saved. 
File CubicInv_steps.ppm saved. 
File CubicInv_tubes.ppm saved. 
File Sqrt_no.ppm saved. 
File Sqrt_steps.ppm saved. 
File Sqrt_tubes.ppm saved. 
File Root_no.ppm saved. 
File Root_steps.ppm saved. 
File Root_tubes.ppm saved. 
File Gamma_no.ppm saved. 
File Gamma_steps.ppm saved. 
File Gamma_tubes.ppm saved. 
File LSin_no.ppm saved. 
File LSin_steps.ppm saved. 
File LSin_tubes.ppm saved. 
File SinExp_no.ppm saved. 
File SinExp_steps.ppm saved. 
File SinExp_tubes.ppm saved. 
File Sin_no.ppm saved. 
File Sin_steps.ppm saved. 
File Sin_tubes.ppm saved. 
File Smooth_no.ppm saved. 
File Smooth_steps.ppm saved. 
File Smooth_tubes.ppm saved. 
File Tanh_no.ppm saved. 
File Tanh_steps.ppm saved. 
File Tanh_tubes.ppm saved. 
File smoothstep_Cubic_Polynomial_no.ppm saved. 
File smoothstep_Cubic_Polynomial_steps.ppm saved. 
File smoothstep_Cubic_Polynomial_tubes.ppm saved. 
File inv_smoothstep_Cubic_Polynomial_no.ppm saved. 
File inv_smoothstep_Cubic_Polynomial_steps.ppm saved. 
File inv_smoothstep_Cubic_Polynomial_tubes.ppm saved. 
File smoothstep_Quartic_Polynomial_no.ppm saved. 
File smoothstep_Quartic_Polynomial_steps.ppm saved. 
File smoothstep_Quartic_Polynomial_tubes.ppm saved. 
File inv_smoothstep_Quartic_Polynomial_no.ppm saved. 
File inv_smoothstep_Quartic_Polynomial_steps.ppm saved. 
File inv_smoothstep_Quartic_Polynomial_tubes.ppm saved. 
File smoothstep_Quintic_Polynomial_no.ppm saved. 
File smoothstep_Quintic_Polynomial_steps.ppm saved. 
File smoothstep_Quintic_Polynomial_tubes.ppm saved. 
File smoothstep_Quadratic_Rational_no.ppm saved. 
File smoothstep_Quadratic_Rational_steps.ppm saved. 
File smoothstep_Quadratic_Rational_tubes.ppm saved. 
File inv_smoothstep_Quadratic_Rational_no.ppm saved. 
File inv_smoothstep_Quadratic_Rational_steps.ppm saved. 
File inv_smoothstep_Quadratic_Rational_tubes.ppm saved. 
File smoothstep_Cubic_Rational_no.ppm saved. 
File smoothstep_Cubic_Rational_steps.ppm saved. 
File smoothstep_Cubic_Rational_tubes.ppm saved. 
File inv_smoothstep_Cubic_Rational_no.ppm saved. 
File inv_smoothstep_Cubic_Rational_steps.ppm saved. 
File inv_smoothstep_Cubic_Rational_tubes.ppm saved. 
File smoothstep_Rational_no.ppm saved. 
File smoothstep_Rational_steps.ppm saved. 
File smoothstep_Rational_tubes.ppm saved. 
File inv_smoothstep_Rational_no.ppm saved. 
File inv_smoothstep_Rational_steps.ppm saved. 
File inv_smoothstep_Rational_tubes.ppm saved. 
File smoothstep_Piecewise_Quadratic_no.ppm saved. 
File smoothstep_Piecewise_Quadratic_steps.ppm saved. 
File smoothstep_Piecewise_Quadratic_tubes.ppm saved. 
File inv_smoothstep_Piecewise_Quadratic_no.ppm saved. 
File inv_smoothstep_Piecewise_Quadratic_steps.ppm saved. 
File inv_smoothstep_Piecewise_Quadratic_tubes.ppm saved. 
File smoothstep_Piecewise_Polynomial_no.ppm saved. 
File smoothstep_Piecewise_Polynomial_steps.ppm saved. 
File smoothstep_Piecewise_Polynomial_tubes.ppm saved. 
File inv_smoothstep_Piecewise_Polynomial_no.ppm saved. 
File inv_smoothstep_Piecewise_Polynomial_steps.ppm saved. 
File inv_smoothstep_Piecewise_Polynomial_tubes.ppm saved. 
File smoothstep_Trigonometric_no.ppm saved. 
File smoothstep_Trigonometric_steps.ppm saved. 
File smoothstep_Trigonometric_tubes.ppm saved. 
File inv_smoothstep_Trigonometric_no.ppm saved. 
File inv_smoothstep_Trigonometric_steps.ppm saved. 
File inv_smoothstep_Trigonometric_tubes.ppm saved. 
 allways free memory (deallocate )  to avoid memory leaks 
ppm (P6) header size = 16 bytes
Array Size  = 360000 bytes
PPM file size  = 360016 bytes
CubicInv_no.ppm
CubicInv_steps.ppm
CubicInv_tubes.ppm
Cubic_no.ppm
Cubic_steps.ppm
Cubic_tubes.ppm
Gamma_no.ppm
Gamma_steps.ppm
Gamma_tubes.ppm
inv_smoothstep_Cubic_Polynomial_no.ppm
inv_smoothstep_Cubic_Polynomial_steps.ppm
inv_smoothstep_Cubic_Polynomial_tubes.ppm
inv_smoothstep_Cubic_Rational_no.ppm
inv_smoothstep_Cubic_Rational_steps.ppm
inv_smoothstep_Cubic_Rational_tubes.ppm
inv_smoothstep_Piecewise_Polynomial_no.ppm
inv_smoothstep_Piecewise_Polynomial_steps.ppm
inv_smoothstep_Piecewise_Polynomial_tubes.ppm
inv_smoothstep_Piecewise_Quadratic_no.ppm
inv_smoothstep_Piecewise_Quadratic_steps.ppm
inv_smoothstep_Piecewise_Quadratic_tubes.ppm
inv_smoothstep_Quadratic_Rational_no.ppm
inv_smoothstep_Quadratic_Rational_steps.ppm
inv_smoothstep_Quadratic_Rational_tubes.ppm
inv_smoothstep_Quartic_Polynomial_no.ppm
inv_smoothstep_Quartic_Polynomial_steps.ppm
inv_smoothstep_Quartic_Polynomial_tubes.ppm
inv_smoothstep_Rational_no.ppm
inv_smoothstep_Rational_steps.ppm
inv_smoothstep_Rational_tubes.ppm
inv_smoothstep_Trigonometric_no.ppm
inv_smoothstep_Trigonometric_steps.ppm
inv_smoothstep_Trigonometric_tubes.ppm
Linear_no.ppm
Linear_steps.ppm
Linear_tubes.ppm
LSin_no.ppm
LSin_steps.ppm
LSin_tubes.ppm
Quadratic_no.ppm
Quadratic_steps.ppm
Quadratic_tubes.ppm
Root_no.ppm
Root_steps.ppm
Root_tubes.ppm
SinExp_no.ppm
SinExp_steps.ppm
SinExp_tubes.ppm
Sin_no.ppm
Sin_steps.ppm
Sin_tubes.ppm
Smooth_no.ppm
smoothstep_Cubic_Polynomial_no.ppm
smoothstep_Cubic_Polynomial_steps.ppm
smoothstep_Cubic_Polynomial_tubes.ppm
smoothstep_Cubic_Rational_no.ppm
smoothstep_Cubic_Rational_steps.ppm
smoothstep_Cubic_Rational_tubes.ppm
smoothstep_Piecewise_Polynomial_no.ppm
smoothstep_Piecewise_Polynomial_steps.ppm
smoothstep_Piecewise_Polynomial_tubes.ppm
smoothstep_Piecewise_Quadratic_no.ppm
smoothstep_Piecewise_Quadratic_steps.ppm
smoothstep_Piecewise_Quadratic_tubes.ppm
smoothstep_Quadratic_Rational_no.ppm
smoothstep_Quadratic_Rational_steps.ppm
smoothstep_Quadratic_Rational_tubes.ppm
smoothstep_Quartic_Polynomial_no.ppm
smoothstep_Quartic_Polynomial_steps.ppm
smoothstep_Quartic_Polynomial_tubes.ppm
smoothstep_Quintic_Polynomial_no.ppm
smoothstep_Quintic_Polynomial_steps.ppm
smoothstep_Quintic_Polynomial_tubes.ppm
smoothstep_Rational_no.ppm
smoothstep_Rational_steps.ppm
smoothstep_Rational_tubes.ppm
Smooth_steps.ppm
smoothstep_Trigonometric_no.ppm
smoothstep_Trigonometric_steps.ppm
smoothstep_Trigonometric_tubes.ppm
Smooth_tubes.ppm
Sqrt_no.ppm
Sqrt_steps.ppm
Sqrt_tubes.ppm
Tanh_no.ppm
Tanh_steps.ppm
Tanh_tubes.ppm
delete all ppm files 
OK
OK
info about software 
GNU bash, version 5.1.16(1)-release (x86_64-pc-linux-gnu)
Copyright (C) 2020 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>

This is free software; you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
GNU Make 4.3
Built for x86_64-pc-linux-gnu
Copyright (C) 1988-2020 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
gcc (Ubuntu 11.3.0-1ubuntu1~22.04.1) 11.3.0
Copyright (C) 2021 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

gnuplot 5.4 patchlevel 2
Version: ImageMagick 6.9.11-60 Q16 x86_64 2021-01-25 https://imagemagick.org
Copyright: (C) 1999-2021 ImageMagick Studio LLC
License: https://imagemagick.org/script/license.php
Features: Cipher DPC Modules OpenMP(4.5) 
Delegates (built-in): bzlib djvu fftw fontconfig freetype heic jbig jng jp2 jpeg lcms lqr ltdl lzma openexr pangocairo png tiff webp wmf x xml zlib
Resource limits:
  Width: 1MP
  Height: 1MP
  List length: unlimited
  Area: 128MP
  Memory: 256MiB
  Map: 512MiB
  Disk: 10GiB
  File: 768
  Thread: 8
  Throttle: 0
  Time: unlimited

//------------------------------------------------------------


change single wave ascending 
----------------
https://docs.paraview.org/en/latest/ReferenceManual/colorMapping.html





---------------------------------------------------
https://blog.kitware.com/using-the-color-map-editor-in-paraview-the-basics/

Color mapping is a common visualization technique that maps data to colors, and displays the colors in the rendered image. 
Of course, to map the data array to colors, we use a transfer function. 
A transfer function can also be used to map the data array to opacity for rendering translucent surfaces or for volume rendering. 

There are separate transfer functions for color and opacity. 
----------------------------------------------------------------

https://www.researchgate.net/publication/220868898_Empowering_ISO-surfaces_with_volume_data
The color and opacity transfer functions are responsible for computing the color and opacity associated
with a ray sample. VoS uses a simple user defined
intensity-based color transfer function, and two alternative types of opacity transfer functions, based on
sample intensity information and on sample spatial
information.





*/

#include <stdio.h>
#include <string.h> // strncat
#include <stdlib.h> // malloc
#include <math.h> // log10





// color = RGB =  in the order red, green, blue
// color component ( channel) = double number from 0.0 to 1.0 



// size of virtual 2D array of pixels
// each piexel has a RGB color
int iWidth = 600;
int iHeight ; // 


// size of the dynamic 1D array 
unsigned char * data;
size_t ColorSize = 3; // RGB = number of color components = channels
size_t ArrayLength; // number of 1D array's elements = ENumber = iWidth*iHeight*ColorSize
size_t ElementSize; // size of array's element in bytes
size_t ArraySize; // size of array in bytes = ElementSize*ArrayLength 

// ppm P6 file
size_t HeaderSize ; // size of the P6 file  header in bytes
size_t FileSize; // = HeaderSize +ArraySize [bytes]



int fMax; // =  sizeof(titles)/sizeof(titles[0]); // 18; // see GiveColor function, it should be one more then max n in GiveColor
  

// add new title here and new function to GiveColor

const char *titles[] = { 
/* no multihue, no single hue, only gray */ "Linear", "Quadratic", "Cubic", "CubicInv", "Sqrt", "Root", "Gamma", "LSin", "SinExp", "Sin", "Smooth", "Tanh", 
//
"smoothstep_Cubic_Polynomial", "inv_smoothstep_Cubic_Polynomial", "smoothstep_Quartic_Polynomial", "inv_smoothstep_Quartic_Polynomial", "smoothstep_Quintic_Polynomial", 
"smoothstep_Quadratic_Rational", "inv_smoothstep_Quadratic_Rational", "smoothstep_Cubic_Rational", "inv_smoothstep_Cubic_Rational", "smoothstep_Rational", "inv_smoothstep_Rational",
"smoothstep_Piecewise_Quadratic","inv_smoothstep_Piecewise_Quadratic", "smoothstep_Piecewise_Polynomial", "inv_smoothstep_Piecewise_Polynomial", 
"smoothstep_Trigonometric", "inv_smoothstep_Trigonometric",
// useful little functions
"almostIdentity", "almostIdentity2", "almostUnitIdentity", "integralSmoothstep", "expImpulse", "quaImpulse", "polyImpulse", "expSustainedImpulse", "cubicPulse", "expStep", "gain", "parabola", "pcurve", "sinc", "trunc_fallof"
};


	


// use s.c program to update enum from arrray	
typedef enum  { 
 Linear, Quadratic , Cubic, CubicInv, Sqrt, Root,  Gamma, LSin, SinExp, Sin, Smooth, Tanh,
 // smoothstep 
 smoothstep_Cubic_Polynomial,  inv_smoothstep_Cubic_Polynomial, smoothstep_Quartic_Polynomial, inv_smoothstep_Quartic_Polynomial, smoothstep_Quintic_Polynomial, 
 smoothstep_Quadratic_Rational, inv_smoothstep_Quadratic_Rational, smoothstep_Cubic_Rational, inv_smoothstep_Cubic_Rational, smoothstep_Rational, inv_smoothstep_Rational,
 smoothstep_Piecewise_Quadratic,inv_smoothstep_Piecewise_Quadratic, smoothstep_Piecewise_Polynomial, inv_smoothstep_Piecewise_Polynomial, 
 smoothstep_Trigonometric, inv_smoothstep_Trigonometric,
 // useful little functions
 almostIdentity, almostIdentity2, almostUnitIdentity, integralSmoothstep, expImpulse, quaImpulse, polyImpulse, expSustainedImpulse, cubicPulse, expStep, gain, parabola, pcurve, sinc, trunc_fallof
 
  } ColorTransferFunctionType; 



int segments = 4; // the number should be even, 2 segments create one "wave"}


const char * sGradientJoiningType[] = {"no" , "steps" , "tubes"};
// enum items are contiguous 
typedef enum  {no, steps, tubes } GradientJoiningType; 


int jMax; // =  sizeof(sGradientJoiningType)/sizeof(sGradientJoiningType[0]); // 18; // see GiveColor function, it should be one more then max n in GiveColor


 
// ------------------------ functions ----------------------------------------------------------------------


// fractional part of real (double) number
double frac(double d){

	double fraction = d - ((long)d);
	return fraction;
}
        
        
        
/*
https://docs.gl/sl4/clamp
genDType clamp(	genDType x, double minVal, double maxVal) =  min(max(x, minVal), maxVal)

clamp returns the value of x constrained to the range minVal to maxVal. The returned value is computed as 
 min(max(x, minVal), maxVal).
 
 clamp( x, 0.0, 1.0)
*/

double  clamp( const double x, const double lowerlimit , const double upperlimit ) {
  if (x < lowerlimit) return lowerlimit;
  if (x > upperlimit) return upperlimit;
  return x;
}


/* 
 GNUPLOT - stdfn.h 
 Copyright 1986 - 1993, 1998, 2004   Thomas Williams, Colin Kelley 
 
 clip_to_01(x) = clamp(x,0.0,1.0) 
 
*/
#ifndef clip_to_01
#define clip_to_01(val)	\
    ((val) < 0 ? 0 : (val) > 1 ? 1 : (val))
#endif


// gives position of 2D point (ix,iy) in 1D array  ; uses also global variables: iWidth , ColorSize
int Give_i ( int iX, int iY)
{
  return (iX + iY * iWidth) * ColorSize;  
}


// ***********************************************************************************************
// =================================== color =====================================================================
// *************************************************************************************************





/*

power function
https://en.wikipedia.org/wiki/Exponentiation#Power_functions



double gamma = 2.2;
double X = pow(position, 1.0/gamma) =  position ^(1/gamma)
-----------------------------
p 

3.0 = NL3 = Non Linear ( cubic) = position ^3
2.0 = NL2 = Non Linear ( quadratic) = position ^2 = sqr(position)
1.0 = L = linear 
1/2 = sqrt    = position ^ {1/2)  = sqrt(position)
1/2.2 = = gamma =  = position ^ {1 / 2.2)


p^3 = p*p*p

p^(1/3) = 



*/







// linear function = identity function
double GiveLinear(double position){
	
	
  return position;
 
}


// Non Linear 2 = NL2 = quadratic
double GiveNL2(const double position){
	
	
  double s =  position*position;
  return s;	

}

// cubic = Non Linear 3 = NL3
double GiveNL3(const double position){
	
	
  double s =  position*position*position;
  return s;
}

// from green to black = 
double GiveCubicInv(const double position){


	double p = 1.0 - position; // inverse input -> ascending wave	
	p = 1.0 - p*p*p; // inverse function of p^3
  	return p;	
	

}





// only from 0 to 1
double GiveSqrt(const double position){
	
	
  double s =  sqrt(position);
  return s;	

}

// only from 0 to 1
double GiveRoot(const double position){
	
  // input in [0,1] range	
  double s =  -1.0 + 2.0* position; // change range to [-1, 1] = s shape of function
  double e = 0.7;
  if (s<0.0) 
  	{  s = - pow(fabs(s) , e);}
  	else s = pow(s , e);
  // return to range [0,1]	
  s = (s + 1.0) / 2.0;
  return s;	

}




double GiveGamma(const double position){
  /*
    #from gnuplot
    gamma = 2.2
    color(gray) = gray**(1./gamma)
    set palette model RGB functions color(gray), color(gray), color(gray) # A gamma-corrected black and white palette
	
  */	
  double gamma = 2.2;
  double X = pow(position, 1.0/gamma);
  return X;

}





/*

https://peterkovesi.com/projects/colourmaps/colourmaptestimage.html

... a sine wave superimposed on a ramp function. 
The sine wave amplitude is set so that the range from peak to trough represents a series of features that are 10% of the total data range. 
The amplitude of the sine wave is modulated from its full value at the top of the image to 0 at the bottom. 


*/

double GiveLSin(const double position){
	
	// the commensts by P Kovesi
	// my values are slightly changed to get similar vusual effect
	double angle = position*2.0*M_PI; // input of the sin function is an angle in radians in range [0, 2*Pi]
	double f = iWidth/10.0; // frequency: The wavelength of the sine wave is set at 8 pixels 
	double s = 0.03*sin(f*angle); // wave range = amplitude of the sine wave = 10% of the total data range	
  	double X =  position +s;
  	
  	if (X>1.0 ||  X< 0.0) 
  		{X = clip_to_01(X);} // clipp to range [0,1]]
  	return X;

}

/*

only horizontal part of the 
Contrast Sensitivity and Campbell-Robson Chart 
CSF = COntrast Sensitivity Function


In this image, 
* horizontal axis
  * the luminance of pixels is modulated sinusoidally along the horizontal dimension. The frequency of modulation (spatial frequency) increases logarithmically, i.e., with exponential increase in frequency from left  to right.
  * spatial frequency from 0.5 to 50 ( or 100)


img = sin(exp(x)).*(y.^3);

*/ 


double GiveSinExp(double position){
	
	//
	//
	// range f(0) = 1 and f(1) = e  so [0,1] -> [1, e]
	double f = exp(5*position) ; // The frequency of modulation (spatial frequency) increases logarithmically, i.e., with exponential increase in frequency from left  to right  from 0.5 to 50 ( or 100)

	double angle = f; // input of the sin function is an angle in radians in range [0, 2*Pi]
	double s = (1.0+sin(angle))/2.0; // wave range from [-1,1] to [0,1]
  	return s;

}

/* 
compare 
* SmoothStep
* DarkLightWave from KFMovieMaker by Adam Sakareassen = 1/4 complete wave ie white to black 

Sin Wave Greyscale
The colours simply fade from black to white in a cycle.  This wave is generated with the sin function.  This method is useful when blending layers to create light to dark contrasts.

*/

double GiveSin(const double position){

	// input in [0,1] !!!!!
	// angle from -pi/2 to pi/2 = wave  ascending = from black to white
	// angle from -pi/2 to 3*pi/2 = wave is ascending + descending = from black thru white to black 
	
	
	// my values are slightly changed to get similar vusual effect
	//double angle = position*2.0*M_PI; // input of the sin function is an angle in radians in range [0, 2*Pi]
	//double angle = -M_PI/2.0 + 2.0*position*M_PI; // angle -pi/2 to pi/2 = half wave
	
	double angle = -M_PI/2.0 + position*M_PI; // angle -pi/2 to pi/2 = half wave ( only ascendig )
	double s = (1.0+sin(angle))/2.0; // map range from [-1,1] to [0,1]
  	return s;

}

/*

https://docs.gl/sl4/smoothstep


genDType smoothstep(	double edge0, double edge1, genDType x);

Parameters
* edge0 = Specifies the value of the lower edge of the Hermite function.
* edge1 = Specifies the value of the upper edge of the Hermite function.
* x = Specifies the source value for interpolation.


smoothstep performs smooth Hermite interpolation between 0 and 1 when edge0 < x < edge1. This is useful in cases where a threshold function with a smooth transition is desired. smoothstep is equivalent to:

    genType t;  // Or genDType t; 
    t = clamp((x - edge0) / (edge1 - edge0), 0.0, 1.0);
    return t * t * (3.0 - 2.0 * t);
Results are undefined if edge0 ≥ edge1.

 https://www.youtube.com/watch?v=60VoL-F-jIQ  
Smoothstep: The most useful function by The Art of Code  = sinusoidal wave from 0.0 to 1.0 , gives similar effect as GraySine 

*/




/*
smoothstep that is based on the cubic x2(3-2x) 
In HLSL and GLSL, smoothstep implements the cubic Hermite interpolation after clamping

*/
double GiveSmooth(const double position){

	double s = (3.0 -2.0*position)*position*position;
	return s;
}



/*
 tanh = he hyperbolic tangent of x.
 I don't consider functions like tanh() or other sigmoids as Smoothsteps if they extend to infinity
*/
double GiveTanh(const double position){

	// input in [0,1] !!!!!
	
	
	
	
	// map range from [0,1] to  [-pi,pi] = angle from -pi to pi = wave  ascending = from black to white
	double angle = 6.0*position - 3.0;
	double s = (1.0+ tanh(angle))/2.0;  // change also y range
  	return s;

}




double smoothstep( const double x ){

	return x; // to do 

}

/*

https://en.wikipedia.org/wiki/Smoothstep


Smoothstep is one of the most frequently used functions during procedural texturing and modeling, but shows up in many other areas of Computer Graphics as well, as a way to interpolate data with local support 
(I don't consider functions like tanh() or other sigmoids as Smoothsteps if they extend to infinity). 
Most shading languages provide a standard implementation of smoothstep that is based on the cubic x2(3-2x) 
which is quick to evaluate, but other alternatives exist that I sometimes find myself using in some situations.

https://iquilezles.org/articles/smoothsteps/
//         ┎──────────────────────┰─────────────────────┰────────────────┒
// Top:    ┃ Cubic Polynomial     ┃ Quartic Polynomial  ┃ Polynomial     ┃
//         ┠──────────────────────╂─────────────────────╂────────────────┨
// Middle: ┃ Quadratic Rational   ┃ Cubic Rational      ┃ Rational       ┃
//         ┠──────────────────────╂─────────────────────╂────────────────┨
// Bottom: ┃ Piecewise Polynomial ┃ Piecewise Quadratic ┃ Trigonometric  ┃
//         ┖──────────────────────┸─────────────────────┸────────────────┚

https://www.shadertoy.com/view/st2BRd


// Cubic Polynomial




*/




double Give_smoothstep_Cubic_Polynomial( const double x )
{
  return x*x*(3.0-2.0*x);
}

double Give_inv_smoothstep_Cubic_Polynomial( const double x )
{
  return 0.5-sin(asin(1.0-2.0*x)/3.0);
}


double Give_smoothstep_Quartic_Polynomial( const double x )
{
  return x*x*(2.0-x*x);
}

double Give_inv_smoothstep_Quartic_Polynomial( const double x )
{
  return sqrt(1.0-sqrt(1.0-x));
}


double Give_smoothstep_Quintic_Polynomial( const double x )
{
  return x*x*x*(x*(x*6.0-15.0)+10.0);
}


double Give_smoothstep_Quadratic_Rational( const double x )
{
  return x*x/(2.0*x*x-2.0*x+1.0);
}

double Give_inv_smoothstep_Quadratic_Rational( const double x )
{
  return (x-sqrt(x*(1.0-x)))/(2.0*x-1.0);
}


double Give_smoothstep_Cubic_Rational( const double x )
{
  return x*x*x/(3.0*x*x-3.0*x+1.0);
}

double Give_inv_smoothstep_Cubic_Rational( const double x )
{
  const double a = pow(    x,1.0/3.0);
  const double b = pow(1.0-x,1.0/3.0);
  return a/(a+b);
}



double Give_smoothstep_Rational( const double x, const double n )
{
  return pow(x,n)/(pow(x,n)+pow(1.0-x,n));
}

double Give_inv_smoothstep_Rational( const double x, const double n )
{
  return Give_smoothstep_Rational( x, 1.0/n );
}





double Give_smoothstep_Piecewise_Quadratic( const double x )
{
  return (x<0.5) ?
  2.0*x*x: 
  2.0*x*(2.0-x)-1.0;
}

double Give_inv_smoothstep_Piecewise_Quadratic( const double x )
{
  return (x<0.5) ?
  sqrt(0.5*x):
  1.0-sqrt(0.5-0.5*x);
}



double Give_smoothstep_Piecewise_Polynomial( const double x, const double n )
{
  return (x<0.5) ?
      0.5*pow(2.0*     x,  n):
  1.0-0.5*pow(2.0*(1.0-x), n);
}


double Give_inv_smoothstep_Piecewise_Polynomial( const double x, const double P )
{
	//const double P = 4.0;    // can be adjusted
	return (x<0.5) ? 
			0.5*pow(2.0*     x, 1.0/P):
			1.0-0.5*pow(2.0*(1.0-x),1.0/P);
}


double Give_smoothstep_Trigonometric( const double x )
{
  return 0.5-0.5*cos(M_PI*x);
}

double Give_inv_smoothstep_Trigonometric( const double x )
{
  return acos(1.0-2.0*x)/M_PI;
}




// https://iquilezles.org/articles/functions/ = useful little functions

/*
Almost Identity (I)
Imagine you don't want to modify a signal unless it's drops to zero or close to it, in which case you want to replace the value with a small possitive constant. Then, rather than clamping the value and introduce a discontinuity, you can smoothly blend the signal into the desired clipped value. 
So, let m be the threshold (anything above m stays unchanged), 
and n the value things will take when the signal is zero. 
Then, the following function does the soft clipping (in a cubic fashion):


https://www.shadertoy.com/view/3tfczH

float plot(vec2 st, float th) {
    return smoothstep(th - 0.01, th, st.y) - smoothstep(th, th + 0.01, st.y);
}

void mainImage( out vec4 fragColor, in vec2 fragCoord )
{
    vec2 st = fragCoord / iResolution.xy;
    
    float y1 = almostIdentity(st.x, 1.0, 0.1);
    float y2 = almostIdentity(st.x);
    vec3 color = vec3(0.0);
    
    float p1 = plot(st, y1);
    float p2 = plot(st, y2);
    
    color = (1.0 - p1) * color 
        + p1 * vec3(1.0, 0.0, 0.0)
        + p2 * vec3(0.0, 1.0, 0.0);
    
    fragColor = vec4(color, 1.0);
}

https://www.shadertoy.com/view/4tXyRN

*/


double Give_almostIdentity( double x, double m, double n )
{
    if( x>m ) return x;
    double a = 2.0*n - m;
    double b = 2.0*m - 3.0*n;
    double t = x/m;
    return (a*t + b)*t*t + n;
}

/*
Almost Identity (II)
A different way to achieve a near identity is through the square root of a biased square. I saw this technique first in a shader by user "omeometo" in Shadertoy. This approach can be a bit slower than the cubic above, depending on the hardware, but I find myself using it a lot these days. While it has zero derivative, it has a non-zero second derivative, so keep an eye in case it causes problems in your application.

An extra nice thing is that this function can be used, unaltered, as an smooth_abs() function, which comes handy for symmetric funtions such as mirrored SDFs.
*/



double Give_almostIdentity2( double x, double n )
{
    return sqrt(x*x+n);
}

/*
Almost Unit Identity
This is a near-identiy function that maps the unit interval into itself. It is the cousin of smoothstep(), in that it maps 0 to 0, 1 to 1, and has a 0 derivative at the origin, just like smoothstep. However, instead of having a 0 derivative at 1, it has a derivative of 1 at that point. It's equivalent to the Almost Identiy above with n=0 and m=1. Since it's a cubic just like smoothstep() it is very fast to evaluate:
*/



double Give_almostUnitIdentity( double x )
{
    return x*x*(2.0-x);
}
/*
Smoothstep Integral
If you use smoothstep for a velocity signal (say, you want to smoothly accelerate a stationary object into constant velocity motion), you need to integrate smoothstep() over time in order to get the actual position of value of the animation. The function below is exactly that, the position of an object that accelerates with smoothstep. Note it's derivative is never larger than 1, so no decelerations happen.

https://mathematica.stackexchange.com/questions/188274/continuous-non-piecewise-equivalent-of-smoothstep-function
*/
double Give_integralSmoothstep( double x, double t )
{
    if( x>t ) return x - t/2.0;
    return x*x*x*(1.0-x*0.5/t)/t/t;
}

/*
exponential Impulse
Impulses are great for triggering behaviours or making envelopes for music or animation. Baiscally, for anything that grows fast and then decays slowly. The following is an exponential impulse function. Use k to control the stretching of the function. Its maximum, which is 1, happens at exactly x = 1/k.
*/
double Give_expImpulse( double x, double k )
{
    double h = k*x;
    return h*exp(1.0-h);
}
/*
Polynomial Impulse
Another impulse function that doesn't use exponentials can be designed by using polynomials. Use k to control falloff of the function. For example, a quadratic can be used, which peaks at x = sqrt(1/k).
*/
double Give_quaImpulse( double k, double x )
{
    return 2.0*sqrt(k)*x/(1.0+k*x*x);
}

// You can easily generalize it to other powers to get different falloff shapes, where n is the degree of the polynomial:

double Give_polyImpulse( double k, double n, double x )
{
    return (n/(n-1.0))*pow((n-1.0)*k,1.0/n)*x/(1.0+k*pow(x,n));
}

//These generalized impulses peak at x = [k(n-1)]-1/n.
//Sustained Impulse
//Similar to the previous, but it allows for control on the width of attack (through the parameter "k") and the release (parameter "f") independently. Also, the impulse releases at a value of 1 instead of 0.

double Give_expSustainedImpulse( double x, double f, double k )
{
    double s = fmax(x-f,0.0);
    return fmin( x*x/(f*f), 1.0+(2.0/f)*s*exp(-k*s));
}
/*
Cubic Pulse
Chances are you found yourself doing smoothstep(c-w,c,x)-smoothstep(c,c+w,x) very often. I do, for example when I need to isolate some features in a signal. For those cases, this cubicPulse() below is my new friend and will be yours too soon. Bonus - you can also use it as a performant replacement for a gaussian.
*/
double Give_cubicPulse( double c, double w, double x )
{
    x = fabs(x - c);
    if( x>w ) return 0.0;
    x /= w;
    return 1.0 - x*x*(3.0-2.0*x);
}
/*
exponential Step
A natural attenuation is an exponential of a linearly decaying quantity: yellow curve, exp(-x). A gaussian, is an exponential of a quadratically decaying quantity: light green curve, exp(-x2). You can generalize and keep increasing powers, and get a sharper and sharper s-shaped curves. For really high values of n you can approximate a perfect step(). If you want such step to transition at x=a, like in the graphs to the right, you can set k = a-n⋅ln 2.
*/
double Give_expStep( double x, double k, double n )
{
    return exp( -k*pow(x,n) );
}

/*
Gain
Remapping the unit interval into the unit interval by expanding the sides and compressing the center, and keeping 1/2 mapped to 1/2, that can be done with the gain() function. This was a common function in RSL tutorials (the Renderman Shading Language). k=1 is the identity curve, k<1 produces the classic gain() shape, and k>1 produces "s" shaped curces. The curves are symmetric (and inverse) for k=a and k=1/a.
*/
double Give_gain( double x, double k ) 
{
    double a = 0.5*pow(2.0*((x<0.5)?x:1.0-x), k);
    return (x<0.5)?a:1.0-a;
}

/*
Parabola
A nice choice to remap the 0..1 interval into 0..1, such that the corners are mapped to 0 and the center to 1. You can then rise the parabolar to a power k to control its shape.
*/



double Give_parabola( double x, double k )
{
    return pow( 4.0*x*(1.0-x), k );
}

/*
power curve
This is a generalziation of the Parabola() above. It also maps the 0..1 interval into 0..1 by keeping the corners mapped to 0. But in this generalziation you can control the shape one either side of the curve, which comes handy when creating leaves, eyes, and many other interesting shapes.

Note that k is chosen such that pcurve() reaches exactly 1 at its maximum for illustration purposes, but in many applications the curve needs to be scaled anyways so the slow computation of k can be simply avoided.
*/
double Give_pcurve( double x, double a, double b )
{
    double k = pow(a+b,a+b)/(pow(a,a)*pow(b,b));
    return k*pow(x,a)*pow(1.0-x,b);
}



/*
Sinc curve
A phase shifted sinc curve can be useful if it starts at zero and ends at zero, for some bouncing behaviors (suggested by Hubert-Jan). Give k different integer values to tweak the amount of bounces. It peaks at 1.0, but that take negative values, which can make it unusable in some applications.
*/


double Give_sinc( double x, double k )
{
    double a = M_PI*(k*x-1.0);
    return sin(a)/a;
}

/*
Falloff
A quadratic falloff, like those in physically based point lights, but reaching zero at a given distance "m" rather than just asymptotically reaching it at infinity. Great for range controlled shadows, etc.
*/
double Give_trunc_fallof( double x, double m )
{
    x = 1.0/((x+1.0)*(x+1.0));
    m = 1.0/((m+1.0)*(m+1.0));
    return (x-m)/(1.0-m);
}






// ***********************************************************************************************
// *************************************************************************************************
// *************************************************************************************************





double ModifyPosition(const double position, const GradientJoiningType GradientJoining){
	
	// input position  should be in  [0,1] range 
	double p = position; // p = local copy of position
	// if position > 1 then we have repetition of colors = periodic function = wave   
	
	
	switch(GradientJoining){
	
		case no : {break;} // return input position witout modifications
		
		// periodic waves with different joinings
		case steps : {	p = p * segments; // periodic  = change range
				p = frac(p); 
    				break;}
    				
		case tubes : {	p = p * segments; // periodic = change range
				int ip = (int)p;
      				p = p-ip; // fractional part 
      				if (ip % 2) {p = 1.0-p;} // reverse gradient
				break;}
		default:{}
	}
	
	return p; // output in [0,1] range

}




/* position range is [0.0, 1.0] = normalized or segments*[0.0, 1.0] = wave range ( periodic ) */
void GiveRGB_Gray(const double position, const ColorTransferFunctionType ColorTransferFunction, double rgb[]){


	double s; // shade, color intensity
	double p = position; // p = local copy of position
	const double n = 4.0;    // can be adjusted
	
	// compute color intensity ( shade) by applying ColorTransfer Function
	switch(ColorTransferFunction){ 
		
		// basic functions 
		case Linear 					: { s = p; break;}
    		case Quadratic 					: { s = p*p; break;} // NL2
		case Cubic 					: { s = p*p*p; break; } // NL3 
		case CubicInv 					: { s = GiveCubicInv(p); break; }
		case Sqrt 					: { s = sqrt(p); break; } 
		case Root 					: { s = GiveRoot(p); break; } // range mapped from [0,1] to [-1,1] = s shaped function
		case Gamma 					: { s = GiveGamma(p); break;}
    		case Sin 					: { s = GiveSin(p); break;}
		case LSin 					: { s = GiveLSin(p); break; }
		case SinExp 					: { s = GiveSinExp(p); break; } 
		
		// https://iquilezles.org/articles/smoothsteps/   Inigo Quilez :   smoothstep functions
		case Smooth 					: { s = GiveSmooth(p); break; } // Smooth
		case Tanh 					: { s = GiveTanh(p); break; } // Smooth
		case smoothstep_Cubic_Polynomial 		: { s = Give_smoothstep_Cubic_Polynomial(p); break; }
		case inv_smoothstep_Cubic_Polynomial 		: { s = Give_inv_smoothstep_Cubic_Polynomial(p); break; }
		case smoothstep_Quartic_Polynomial 		: { s = Give_smoothstep_Quartic_Polynomial(p); break; }
		case inv_smoothstep_Quartic_Polynomial 		: { s = Give_inv_smoothstep_Quartic_Polynomial(p); break; }
		case smoothstep_Quintic_Polynomial 		: { s = Give_smoothstep_Quintic_Polynomial(p); break; }
		case smoothstep_Quadratic_Rational 		: { s = Give_smoothstep_Quadratic_Rational(p); break; }
		case inv_smoothstep_Quadratic_Rational 		: { s = Give_inv_smoothstep_Quadratic_Rational(p); break; }
		case smoothstep_Cubic_Rational 			: { s = Give_smoothstep_Cubic_Rational(p); break; }
		case inv_smoothstep_Cubic_Rational 		: { s = Give_inv_smoothstep_Cubic_Rational(p); break; }
		case smoothstep_Rational 			: { s = Give_smoothstep_Rational(p, n); break; }
		case inv_smoothstep_Rational 			: { s = Give_inv_smoothstep_Rational(p, n); break; }
		case smoothstep_Piecewise_Quadratic 		: { s = Give_smoothstep_Piecewise_Quadratic(p); break; }
		case inv_smoothstep_Piecewise_Quadratic 	: { s = Give_inv_smoothstep_Piecewise_Quadratic(p); break; }
		case smoothstep_Piecewise_Polynomial 		: { s = Give_smoothstep_Piecewise_Polynomial(p, n); break; }
		case  inv_smoothstep_Piecewise_Polynomial 	: { s = Give_inv_smoothstep_Piecewise_Polynomial(p, n); break; }
		case smoothstep_Trigonometric 			: { s = Give_smoothstep_Trigonometric(p); break; }
		case inv_smoothstep_Trigonometric 		: { s = Give_inv_smoothstep_Trigonometric(p); break; }
		
		// https://iquilezles.org/articles/functions/ Inigo Quilez   :   useful little functions
		case almostIdentity 				: { s = Give_almostIdentity(p, 1.0, 0.1); break; }
		case almostIdentity2 				: { s = Give_almostIdentity2(p, 0.1); break; }
		case almostUnitIdentity 			: { s = Give_almostUnitIdentity(p); break; }
		case integralSmoothstep 			: { s = Give_integralSmoothstep(p, 1.82); break; }  // low values 
		case expImpulse 				: { s = Give_expImpulse(p, 10); break; } // Its maximum, which is 1, happens at exactly x = 1/k.
		case quaImpulse 				: { s = Give_quaImpulse(p, n); break; }
		case polyImpulse 				: { s = Give_polyImpulse(p, n, 1.0); break; }
		case expSustainedImpulse 			: { s = Give_expSustainedImpulse(p, 0.0, 1.0); break; } // low values
		case cubicPulse 				: { s = Give_cubicPulse(p, 1.0, 1.0); break; }
		case expStep 					: { s = Give_expStep(p, 1.0, 1.0); break; }
		case gain 					: { s = Give_gain(p, 5.0); break; }
		case parabola 					: { s = Give_parabola(p, 5.0); break; }
		case pcurve 					: { s = Give_pcurve(p, 2.0, 3.0); break; }
		case sinc 					: { s = Give_sinc(p, 1); break; }
		case trunc_fallof 				: { s = Give_trunc_fallof(p, 5.0); break; }

		
		
		default:{ }
	}
	
	// compute output gray (color )
	rgb[0] = s; //R
  	rgb[1] = s; //G
  	rgb[2] = s; //B
	
	
	
}







// **********************************************************************************************************************



/* 
   remember to update : 
   *  add new title in titles array
   * titles in plot.gp
*/

int GiveColor(const double position, const ColorTransferFunctionType ColorTransferFunction, const GradientJoiningType GradientJoining, double rgb[]){

	// input position is double number in range [0,1] = normalized
			 
	double p = position; // local copy of position
	p = ModifyPosition(p, GradientJoining); // modify the position - GradientJoiningType 
	GiveRGB_Gray(p, ColorTransferFunction, rgb);	
	
	/*
  	switch(ColorTransferFunction){

		  		 
  		// no hue = gray, one function for all gray gradients
  		case Linear: 	
  		case Quadratic: 	
  		case Cubic: 
  		case CubicInv:		
  		case Sqrt: 
  		case Root:		
  		case Gamma: 		
  		case Sin: 		
  		case LSin: 		
  		case SinExp: 
  		case Smooth:	
  		case Tanh: 
  		//	
  		case smoothstep_Cubic_Polynomial:
		case inv_smoothstep_Cubic_Polynomial:
		case smoothstep_Quartic_Polynomial:
		case inv_smoothstep_Quartic_Polynomial:
		case smoothstep_Quintic_Polynomial:
		case smoothstep_Quadratic_Rational:
		case inv_smoothstep_Quadratic_Rational:
		case smoothstep_Cubic_Rational:
		case inv_smoothstep_Cubic_Rational:
		case smoothstep_Rational:
		case inv_smoothstep_Rational:
		case smoothstep_Piecewise_Quadratic:
		case inv_smoothstep_Piecewise_Quadratic:
		case smoothstep_Piecewise_Polynomial:
		case  inv_smoothstep_Piecewise_Polynomial:
		case smoothstep_Trigonometric:
		case inv_smoothstep_Trigonometric:
		//
		case almostIdentity:
		case almostIdentity2:
		case almostUnitIdentity:
		case integralSmoothstep:
		case expImpulse:
		case quaImpulse:
		case polyImpulse:
		case expSustainedImpulse:
		case cubicPulse:
		case expStep:
		case gain:
		case parabola:
		case pcurve:
		case sinc:
		case trunc_fallof:
		//
		case almostIdentity:
case almostIdentity2:
case almostUnitIdentity:
case integralSmoothstep:
case expImpulse:
case quaImpulse:
case polyImpulse:
case expSustainedImpulse:
case cubicPulse:
case expStep:
case gain:
case parabola:
case pcurve:
case sinc:
case trunc_fallof:


  		
  		
  			{GiveRGB_Gray(p, ColorTransferFunction, rgb); break;}
  
    		default:{}
  	}
	*/
	return 0;
}



void PrintRGBColor( FILE *fp,  double position, double rgb[]){


	// normalized to [0.0, 1.0] range RGB color channels
  double R = rgb[0]; 
  double G = rgb[1];
  double B = rgb[2];
  
  // normalized to [0.0, 1.0] range RGB color channels
  
  // [Relative luminance is formed as a weighted sum of linear RGB components](https://en.wikipedia.org/wiki/Luma_(video)) 
  // 
  //from function test_palette_subcommand from file gnuplot/src/command.c test_palette_subcommand
  //ntsc = 0.299 * rgb.r + 0.587 * rgb.g + 0.114 * rgb.b;
  double Y = 0.299*R + 0.587*G + 0.114*B;

   
  fprintf(fp, "%f, %f, %f, %f, %f\n", position, R, G, B, Y);

}







int PlotPoint(unsigned char A[], int i, double rgb[]){

  // conversion from [0,1] range to [0,255]
  A[i]   = (unsigned char) (255*rgb[0]); /* Red*/
  A[i+1] = (unsigned char) (255*rgb[1]); /* Green */
  A[i+2] = (unsigned char) (255*rgb[2]);  /* Blue */
  return 0;


}




// --------------------
int FillArrayAndTextDataFile (unsigned char A[] , ColorTransferFunctionType f,  GradientJoiningType j){

  int iX;
  int iXmax = iWidth;
  int iY;
  int iYmax = iHeight;
  int i; //  index of 1D array  
  double position; // number form 0.0 to 1.0 used for color gradient
  double rgb[3]; // 
	
  // text file used by the gnuplot for creating images
  char filename[50]; 
  sprintf (filename, "%s_%s.dat", titles[f], sGradientJoiningType[j]);
  
  
  
  
  
  
  FILE *fp = fopen(filename, "w");
  if (fp==NULL) {
    printf("Error opening text file!\n");
    return 1;
  }
  fprintf(fp, "# position \t\t R \t\t G \t\tB \t\tY\n"); // header of the text file
	
	
  //
  for(iX=0; iX<iXmax; ++iX){    
    position = (double) iX / iXmax;
    GiveColor(position, f, j, rgb);
    PrintRGBColor(fp, position, rgb); // 
      		
    for(iY=0; iY<iYmax; ++iY){
      i = Give_i(iX, iY);
      PlotPoint(A, i , rgb);
    }
        		
         			
  }

 printf ("File %s saved. \n", filename);
 fclose(fp);
  return 0;
}





// --------------- save dynamic "A" array of uinsigned char to the binary ppm file ( P6 ) --------------------------------
int SaveArray2PPM (unsigned char A[], size_t ASize,   ColorTransferFunctionType f,  GradientJoiningType j)
{

  FILE *fp;
  const unsigned char MaxColorComponentValue = 255;	/* color component is coded from 0 to 255 ;  it is 8 bit color file */
  
  
  
  
  
  char filename[50] ; 
  sprintf (filename, "%s_%s.ppm", titles[f], sGradientJoiningType[j]);
  
  

  /* save image to the pgm file  */
  fp = fopen (filename, "wb");	/*create new file,give it a name and open it in binary mode  */
  if (fp == NULL) 
    {	printf("File open error"); 
      return 1;}
  else {
    fprintf (fp, "P6\n%u %u\n%u\n", iWidth, iHeight, MaxColorComponentValue);	/*write header to the file */
    fwrite (A, ASize, 1, fp);	// write dynamic A array to the binary file in one step  
 
    printf ("File %s saved. \n", filename);
    fclose (fp);
    return 0;}
  
}



// n = nummber of the gradient function
int MakeGradientImage(unsigned char A[],  ColorTransferFunctionType f,  GradientJoiningType j){


  FillArrayAndTextDataFile(A, f, j);
  SaveArray2PPM(A, ArraySize, f, j);
  return 0;

}



int setup(){


	fMax =  sizeof(titles)/sizeof(titles[0]); // 18; // see GiveColor function, it should be one more then max n in GiveColor
  	jMax =  sizeof(sGradientJoiningType)/sizeof(sGradientJoiningType[0]); 

  	iHeight = iWidth/3; 
  	// 1D array
  	ArrayLength = iWidth*iHeight*ColorSize;
  	ElementSize = sizeof(unsigned char);
  	ArraySize = ElementSize*ArrayLength ; 
  	HeaderSize = 11 + (size_t) (log10(iHeight) +log10(iWidth)); 
	
  	FileSize = HeaderSize + ArraySize; 
	
  	/* create dynamic 1D array for RGB colors  */
  	data = malloc (ArraySize);
  	if (data == NULL ){
    		printf ( "Could not allocate memory for the array\n");
    		return 1;}

	
  	return 0;
}


void info(){

  printf("ppm (P6) header size = %zu bytes\n", HeaderSize);
  printf("Array Size  = %zu bytes\n", ArraySize);
  printf("PPM file size  = %zu bytes\n", FileSize);

	
}



int end(){


  printf (" allways free memory (deallocate )  to avoid memory leaks \n"); // https://en.wikipedia.org/wiki/C_dynamic_memory_allocation
  free (data);
  info();
  return 0;

}



// ================================== main ============================================

int main (){

  ColorTransferFunctionType f;
  GradientJoiningType j;
	
  setup();
  
  for ( f = 0; f< fMax; ++f)
  	for ( j = 0; j < jMax; ++j)
    		MakeGradientImage(data, f, j);
	
  end();

  return 0;
}



















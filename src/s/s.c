/*

create enum from array of strings
lazy and naive method


gcc s.c -Wall 
./a.out




typedef enum  {Linear , Quadratic , Cubic , CubicInv , Sqrt , Root , Gamma , LSin , SinExp , Sin , Smooth , Tanh , smoothstep_Cubic_Polynomial , inv_smoothstep_Cubic_Polynomial , smoothstep_Quartic_Polynomial , inv_smoothstep_Quartic_Polynomial , smoothstep_Quintic_Polynomial , smoothstep_Quadratic_Rational , inv_smoothstep_Quadratic_Rational , smoothstep_Cubic_Rational , inv_smoothstep_Cubic_Rational , smoothstep_Rational , inv_smoothstep_Rational , smoothstep_Piecewise_Quadratic , inv_smoothstep_Piecewise_Quadratic , smoothstep_Piecewise_Polynomial ,  inv_smoothstep_Piecewise_Polynomial , smoothstep_Trigonometric , inv_smoothstep_Trigonometric , almostIdentity , almostIdentity2 , almostUnitIdentity , integralSmoothstep , expImpulse , quaImpulse , polyImpulse , expSustainedImpulse , cubicPulse , expStep , gain , parabola , pcurve , sinc , trunc_fallof } ColorTransferFunctionType; 

typedef enum  {no = 0, steps = 1, tubes = 2} GradientJoiningType;



case Linear : { s = Give_Linear(p); break; }
case Quadratic : { s = Give_Quadratic(p); break; }
case Cubic : { s = Give_Cubic(p); break; }
case CubicInv : { s = Give_CubicInv(p); break; }
case Sqrt : { s = Give_Sqrt(p); break; }
case Root : { s = Give_Root(p); break; }
case Gamma : { s = Give_Gamma(p); break; }
case LSin : { s = Give_LSin(p); break; }
case SinExp : { s = Give_SinExp(p); break; }
case Sin : { s = Give_Sin(p); break; }
case Smooth : { s = Give_Smooth(p); break; }
case Tanh : { s = Give_Tanh(p); break; }


case smoothstep_Cubic_Polynomial : { s = Give_smoothstep_Cubic_Polynomial(p); break; }
case inv_smoothstep_Cubic_Polynomial : { s = Give_inv_smoothstep_Cubic_Polynomial(p); break; }
case smoothstep_Quartic_Polynomial : { s = Give_smoothstep_Quartic_Polynomial(p); break; }
case inv_smoothstep_Quartic_Polynomial : { s = Give_inv_smoothstep_Quartic_Polynomial(p); break; }
case smoothstep_Quintic_Polynomial : { s = Give_smoothstep_Quintic_Polynomial(p); break; }
case smoothstep_Quadratic_Rational : { s = Give_smoothstep_Quadratic_Rational(p); break; }
case inv_smoothstep_Quadratic_Rational : { s = Give_inv_smoothstep_Quadratic_Rational(p); break; }
case smoothstep_Cubic_Rational : { s = Give_smoothstep_Cubic_Rational(p); break; }
case inv_smoothstep_Cubic_Rational : { s = Give_inv_smoothstep_Cubic_Rational(p); break; }
case smoothstep_Rational : { s = Give_smoothstep_Rational(p); break; }
case inv_smoothstep_Rational : { s = Give_inv_smoothstep_Rational(p); break; }
case smoothstep_Piecewise_Quadratic : { s = Give_smoothstep_Piecewise_Quadratic(p); break; }
case inv_smoothstep_Piecewise_Quadratic : { s = Give_inv_smoothstep_Piecewise_Quadratic(p); break; }
case smoothstep_Piecewise_Polynomial : { s = Give_smoothstep_Piecewise_Polynomial(p); break; }
case  inv_smoothstep_Piecewise_Polynomial : { s = Give_ inv_smoothstep_Piecewise_Polynomial(p); break; }
case smoothstep_Trigonometric : { s = Give_smoothstep_Trigonometric(p); break; }
case inv_smoothstep_Trigonometric : { s = Give_inv_smoothstep_Trigonometric(p); break; }

case almostIdentity : { s = Give_almostIdentity(p); break; }
case almostIdentity2 : { s = Give_almostIdentity2(p); break; }
case almostUnitIdentity : { s = Give_almostUnitIdentity(p); break; }
case integralSmoothstep : { s = Give_integralSmoothstep(p); break; }
case expImpulse : { s = Give_expImpulse(p); break; }
case quaImpulse : { s = Give_quaImpulse(p); break; }
case polyImpulse : { s = Give_polyImpulse(p); break; }
case expSustainedImpulse : { s = Give_expSustainedImpulse(p); break; }
case cubicPulse : { s = Give_cubicPulse(p); break; }
case expStep : { s = Give_expStep(p); break; }
case gain : { s = Give_gain(p); break; }
case parabola : { s = Give_parabola(p); break; }
case pcurve : { s = Give_pcurve(p); break; }
case sinc : { s = Give_sinc(p); break; }
case trunc_fallof : { s = Give_trunc_fallof(p); break; }

case Linear:
case Quadratic:
case Cubic:
case CubicInv:
case Sqrt:
case Root:
case Gamma:
case LSin:
case SinExp:
case Sin:
case Smooth:
case Tanh:

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


titles = "Linear  Quadratic  Cubic  CubicInv  Sqrt  Root  Gamma  LSin  SinExp  Sin  Smooth  Tanh  smoothstep_Cubic_Polynomial  inv_smoothstep_Cubic_Polynomial  smoothstep_Quartic_Polynomial  inv_smoothstep_Quartic_Polynomial  smoothstep_Quintic_Polynomial  smoothstep_Quadratic_Rational  inv_smoothstep_Quadratic_Rational  smoothstep_Cubic_Rational  inv_smoothstep_Cubic_Rational  smoothstep_Rational  inv_smoothstep_Rational  smoothstep_Piecewise_Quadratic  inv_smoothstep_Piecewise_Quadratic  smoothstep_Piecewise_Polynomial   inv_smoothstep_Piecewise_Polynomial  smoothstep_Trigonometric  inv_smoothstep_Trigonometric  almostIdentity  almostIdentity2  almostUnitIdentity  integralSmoothstep  expImpulse  quaImpulse  polyImpulse  expSustainedImpulse  cubicPulse  expStep  gain  parabola  pcurve  sinc  trunc_fallof  "

sGradientJoiningType = "no  steps  tubes  "

 ![](./png/Linear_no.png )
 ![](./png/Linear_steps.png )
 ![](./png/Linear_tubes.png )
 ![](./png/Quadratic_no.png )
 ![](./png/Quadratic_steps.png )
 ![](./png/Quadratic_tubes.png )
 ![](./png/Cubic_no.png )
 ![](./png/Cubic_steps.png )
 ![](./png/Cubic_tubes.png )
 ![](./png/CubicInv_no.png )
 ![](./png/CubicInv_steps.png )
 ![](./png/CubicInv_tubes.png )
 ![](./png/Sqrt_no.png )
 ![](./png/Sqrt_steps.png )
 ![](./png/Sqrt_tubes.png )
 ![](./png/Root_no.png )
 ![](./png/Root_steps.png )
 ![](./png/Root_tubes.png )
 ![](./png/Gamma_no.png )
 ![](./png/Gamma_steps.png )
 ![](./png/Gamma_tubes.png )
 ![](./png/LSin_no.png )
 ![](./png/LSin_steps.png )
 ![](./png/LSin_tubes.png )
 ![](./png/SinExp_no.png )
 ![](./png/SinExp_steps.png )
 ![](./png/SinExp_tubes.png )
 ![](./png/Sin_no.png )
 ![](./png/Sin_steps.png )
 ![](./png/Sin_tubes.png )
 ![](./png/Smooth_no.png )
 ![](./png/Smooth_steps.png )
 ![](./png/Smooth_tubes.png )
 ![](./png/Tanh_no.png )
 ![](./png/Tanh_steps.png )
 ![](./png/Tanh_tubes.png )
 ![](./png/smoothstep_Cubic_Polynomial_no.png )
 ![](./png/smoothstep_Cubic_Polynomial_steps.png )
 ![](./png/smoothstep_Cubic_Polynomial_tubes.png )
 ![](./png/inv_smoothstep_Cubic_Polynomial_no.png )
 ![](./png/inv_smoothstep_Cubic_Polynomial_steps.png )
 ![](./png/inv_smoothstep_Cubic_Polynomial_tubes.png )
 ![](./png/smoothstep_Quartic_Polynomial_no.png )
 ![](./png/smoothstep_Quartic_Polynomial_steps.png )
 ![](./png/smoothstep_Quartic_Polynomial_tubes.png )
 ![](./png/inv_smoothstep_Quartic_Polynomial_no.png )
 ![](./png/inv_smoothstep_Quartic_Polynomial_steps.png )
 ![](./png/inv_smoothstep_Quartic_Polynomial_tubes.png )
 ![](./png/smoothstep_Quintic_Polynomial_no.png )
 ![](./png/smoothstep_Quintic_Polynomial_steps.png )
 ![](./png/smoothstep_Quintic_Polynomial_tubes.png )
 ![](./png/smoothstep_Quadratic_Rational_no.png )
 ![](./png/smoothstep_Quadratic_Rational_steps.png )
 ![](./png/smoothstep_Quadratic_Rational_tubes.png )
 ![](./png/inv_smoothstep_Quadratic_Rational_no.png )
 ![](./png/inv_smoothstep_Quadratic_Rational_steps.png )
 ![](./png/inv_smoothstep_Quadratic_Rational_tubes.png )
 ![](./png/smoothstep_Cubic_Rational_no.png )
 ![](./png/smoothstep_Cubic_Rational_steps.png )
 ![](./png/smoothstep_Cubic_Rational_tubes.png )
 ![](./png/inv_smoothstep_Cubic_Rational_no.png )
 ![](./png/inv_smoothstep_Cubic_Rational_steps.png )
 ![](./png/inv_smoothstep_Cubic_Rational_tubes.png )
 ![](./png/smoothstep_Rational_no.png )
 ![](./png/smoothstep_Rational_steps.png )
 ![](./png/smoothstep_Rational_tubes.png )
 ![](./png/inv_smoothstep_Rational_no.png )
 ![](./png/inv_smoothstep_Rational_steps.png )
 ![](./png/inv_smoothstep_Rational_tubes.png )
 ![](./png/smoothstep_Piecewise_Quadratic_no.png )
 ![](./png/smoothstep_Piecewise_Quadratic_steps.png )
 ![](./png/smoothstep_Piecewise_Quadratic_tubes.png )
 ![](./png/inv_smoothstep_Piecewise_Quadratic_no.png )
 ![](./png/inv_smoothstep_Piecewise_Quadratic_steps.png )
 ![](./png/inv_smoothstep_Piecewise_Quadratic_tubes.png )
 ![](./png/smoothstep_Piecewise_Polynomial_no.png )
 ![](./png/smoothstep_Piecewise_Polynomial_steps.png )
 ![](./png/smoothstep_Piecewise_Polynomial_tubes.png )
 ![](./png/ inv_smoothstep_Piecewise_Polynomial_no.png )
 ![](./png/ inv_smoothstep_Piecewise_Polynomial_steps.png )
 ![](./png/ inv_smoothstep_Piecewise_Polynomial_tubes.png )
 ![](./png/smoothstep_Trigonometric_no.png )
 ![](./png/smoothstep_Trigonometric_steps.png )
 ![](./png/smoothstep_Trigonometric_tubes.png )
 ![](./png/inv_smoothstep_Trigonometric_no.png )
 ![](./png/inv_smoothstep_Trigonometric_steps.png )
 ![](./png/inv_smoothstep_Trigonometric_tubes.png )
 ![](./png/almostIdentity_no.png )
 ![](./png/almostIdentity_steps.png )
 ![](./png/almostIdentity_tubes.png )
 ![](./png/almostIdentity2_no.png )
 ![](./png/almostIdentity2_steps.png )
 ![](./png/almostIdentity2_tubes.png )
 ![](./png/almostUnitIdentity_no.png )
 ![](./png/almostUnitIdentity_steps.png )
 ![](./png/almostUnitIdentity_tubes.png )
 ![](./png/integralSmoothstep_no.png )
 ![](./png/integralSmoothstep_steps.png )
 ![](./png/integralSmoothstep_tubes.png )
 ![](./png/expImpulse_no.png )
 ![](./png/expImpulse_steps.png )
 ![](./png/expImpulse_tubes.png )
 ![](./png/quaImpulse_no.png )
 ![](./png/quaImpulse_steps.png )
 ![](./png/quaImpulse_tubes.png )
 ![](./png/polyImpulse_no.png )
 ![](./png/polyImpulse_steps.png )
 ![](./png/polyImpulse_tubes.png )
 ![](./png/expSustainedImpulse_no.png )
 ![](./png/expSustainedImpulse_steps.png )
 ![](./png/expSustainedImpulse_tubes.png )
 ![](./png/cubicPulse_no.png )
 ![](./png/cubicPulse_steps.png )
 ![](./png/cubicPulse_tubes.png )
 ![](./png/expStep_no.png )
 ![](./png/expStep_steps.png )
 ![](./png/expStep_tubes.png )
 ![](./png/gain_no.png )
 ![](./png/gain_steps.png )
 ![](./png/gain_tubes.png )
 ![](./png/parabola_no.png )
 ![](./png/parabola_steps.png )
 ![](./png/parabola_tubes.png )
 ![](./png/pcurve_no.png )
 ![](./png/pcurve_steps.png )
 ![](./png/pcurve_tubes.png )
 ![](./png/sinc_no.png )
 ![](./png/sinc_steps.png )
 ![](./png/sinc_tubes.png )
 ![](./png/trunc_fallof_no.png )
 ![](./png/trunc_fallof_steps.png )
 ![](./png/trunc_fallof_tubes.png )



*/


#include <stdio.h>
#include <stdlib.h>		// malloc
#include <string.h>		// strcat



		
const char *titles[] = {
"Linear", "Quadratic", "Cubic", "CubicInv", "Sqrt", "Root", "Gamma", "LSin", "SinExp", "Sin", "Smooth", "Tanh", 
"smoothstep_Cubic_Polynomial", "inv_smoothstep_Cubic_Polynomial", "smoothstep_Quartic_Polynomial", "inv_smoothstep_Quartic_Polynomial", "smoothstep_Quintic_Polynomial", 
"smoothstep_Quadratic_Rational", "inv_smoothstep_Quadratic_Rational", "smoothstep_Cubic_Rational", "inv_smoothstep_Cubic_Rational", "smoothstep_Rational", "inv_smoothstep_Rational",
"smoothstep_Piecewise_Quadratic","inv_smoothstep_Piecewise_Quadratic","smoothstep_Piecewise_Polynomial","inv_smoothstep_Piecewise_Polynomial", 
"smoothstep_Trigonometric", "inv_smoothstep_Trigonometric", 
"almostIdentity", "almostIdentity2", "almostUnitIdentity", "integralSmoothstep", "expImpulse", "quaImpulse", "polyImpulse", "expSustainedImpulse", "cubicPulse", "expStep", "gain", "parabola", "pcurve", "sinc", "trunc_fallof"};

const char * sGradientJoiningType[] = {"no" , "steps" , "tubes"};		

// print enum type for g.c
void PrintEnums(){

	// titles
	int i = 0;
	int iMax = sizeof(titles)/ sizeof(titles[0]);
	printf("typedef enum  {");
	for (i =0; i< iMax; ++i){
		printf("%s ", titles[i]);
		if ( i<iMax-1) printf(", ");
	}
	printf("} ColorTransferFunctionType; \n\n");
	
	// sGradientJoiningType
	i = 0;
	iMax = sizeof(sGradientJoiningType)/ sizeof(sGradientJoiningType[0]);
	printf("typedef enum  {");
	for (i =0; i< iMax; ++i){
		printf("%s = %d", sGradientJoiningType[i], i);
		if ( i<iMax-1) printf(", ");
	}
	printf("} GradientJoiningType;\n\n\n\n");
	
}

/*
gnuplot 
titles = "RainbowHSV Linas GraySineStep"
*/

// print gnuplot array for use in plot.gp 
void PrintGnuplot(){
	// titles
	int i = 0;
	int iMax = sizeof(titles)/ sizeof(titles[0]);
	printf("titles = \"");
	for (i =0; i< iMax; ++i){
		printf("%s  ", titles[i]);
		
	}
	printf("\"\n\n");

	// sGradientJoiningType
	i = 0;
	iMax = sizeof(sGradientJoiningType)/ sizeof(sGradientJoiningType[0]);
	printf("sGradientJoiningType = \"");
	for (i =0; i< iMax; ++i){
		printf("%s  ", sGradientJoiningType[i]);
		
	}
	printf("\"\n\n");




}
		


void Print4GiveRGB_Gray(){

	// titles
	int i = 0;
	int iMax = sizeof(titles)/ sizeof(titles[0]);
	for (i =0; i< iMax; ++i){
		printf("case %s : { s = Give_%s(p); break; }\n", titles[i], titles[i]); // case Sqrt : { s = sqrt(p); break; }
		//if ( i<iMax-1) printf(", ");
	}
}


void Print4GiveColor(){

	// titles
	int i = 0;
	int iMax = sizeof(titles)/ sizeof(titles[0]);
	for (i =0; i< iMax; ++i){
		printf("case %s:\n", titles[i]); // case Sqrt : { s = sqrt(p); break; }
		//if ( i<iMax-1) printf(", ");
	}



}


void Print4Images(){

	// titles
	int i = 0;
	int iMax = sizeof(titles)/ sizeof(titles[0]);
	//
	int f = 0; 
	int fMax = sizeof(sGradientJoiningType)/ sizeof(sGradientJoiningType[0]);
	
	for (i =0; i< iMax; ++i)
	
		{
		 printf("%s \n", titles[i]);
		 for ( f = 0; f< fMax; ++f)
  			{ 
  			printf("%s_%s\n", titles[i], sGradientJoiningType[f]); 
  			printf(" \n");
  			printf(" ![](./png/%s_%s.png "")\n", titles[i], sGradientJoiningType[f]); // ![](./png/continous.png "") 
  			printf(" \n");
  			printf(" ![](./png/%s_%s_2D.png "")\n", titles[i], sGradientJoiningType[f]); // ![](./png/continous.png "") 
  			printf(" \n");
			//if ( i<iMax-1) printf(", ");
			}
		printf(" \n");
		}



}



		
int main (){

	PrintEnums();
	Print4GiveRGB_Gray();
	Print4GiveColor();
	PrintGnuplot();
	Print4Images();
	
	return 0;
}


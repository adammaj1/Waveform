# Description
* [waveform](https://en.wikipedia.org/wiki/Waveform) 
* data types 
* functions  
  * [shaping functions](https://www.flong.com/archive/texts/code/shapers_poly/)  shaping signals in the normalized range [0, 1]
  * [Easing functions specify the rate of change of a parameter over time](https://easings.net/en)
  * [Tweening functions: The purpose of a tweening function is to deliver a position for a specific time, given the tween’s essential characteristics. These characteristics are beginning position, final position, and duration](http://robertpenner.com/easing/penner_chapter7_tweening.pdf). It is used in Flash for describe time related motion
  * [1D gray color gradient](https://github.com/adammaj1/1D-RGB-color-gradient)
* Pattern Master
* Unit generators
* Interpolation curves or interpolations
* [Parametric acceleration curves for animations](https://cocoawithlove.com/2008/09/parametric-acceleration-curves-in-core.html)


[Names or nomenclature comparison](./src/doc/comparison.md)



All functions work in the range [0..1].



# Algorithm:
* take input function f which maps floating point number (x or position) in a normalised range [0.0, 1.0] and gives monotone output ( [A monotonically non-decreasing function](https://en.wikipedia.org/wiki/Monotonic_function) )
* make function diagram  and color gradient ( image of continous color gradient) using above function
* make 3 types of periodic waves for each function type using ModifyPosition function
* make color diagram and color gradient for each GradientJoiningType of input function

```
typedef enum  {no, steps, tubes } GradientJoiningType; 



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


```



So workflow 

$float x \to ModifyPosition \to GiveRGB_Gray \to Give_color \to color $


# old images ( made using ./src/d/d.c)


[Linear function](https://en.wikipedia.org/wiki/Linear_function) graph = made using [continous_data function ](./src/d/d.c)


![](./png/continous.png "") 





[Step function](https://en.wikipedia.org/wiki/Step_function) graph. Made using [discrete_data function](./src/d/d.c) 




![](./png/discrete.png "") 




[Sawtooth wave](https://en.wikipedia.org/wiki/Sawtooth_wave) graph.  Made using [sawtooth_data function which includes steps type of joining](./src/d/d.c) 




![](./png/sawtooth.png "") 





[Sine wave](https://en.wikipedia.org/wiki/Sine_wave)





![](./png/sin.png "") 





[Piecewise linear functions](https://en.wikipedia.org/wiki/Piecewise_linear_function):  [Boxcar function](https://en.wikipedia.org/wiki/Boxcar_function) or [square waveform](https://en.wikipedia.org/wiki/Waveform) or  [Rectangular function](https://en.wikipedia.org/wiki/Rectangular_function), the simplest [step_function](https://en.wikipedia.org/wiki/Step_function). It is made using [square_wave function ](./src/d/d.c) 




![](./png/square.png "") 



[Triangle wave](https://en.wikipedia.org/wiki/Triangle_wave) = made from linear function using tubes type of joining  


![](./png/tubes.png "") 


# new images ( made using ./src/g/g.c)


 Linear 
Linear_no
 
 ![](./png/Linear_no.png )
 
 ![](./png/Linear_no_2D.png )
Linear_steps
 
 ![](./png/Linear_steps.png )
 
 ![](./png/Linear_steps_2D.png )
Linear_tubes
 
 ![](./png/Linear_tubes.png )
 
 ![](./png/Linear_tubes_2D.png )
 
 Quadratic 
Quadratic_no
 
 ![](./png/Quadratic_no.png )
 
 ![](./png/Quadratic_no_2D.png )
Quadratic_steps
 
 ![](./png/Quadratic_steps.png )
 
 ![](./png/Quadratic_steps_2D.png )
Quadratic_tubes
 
 ![](./png/Quadratic_tubes.png )
 
 ![](./png/Quadratic_tubes_2D.png )
 
 Cubic 
Cubic_no
 
 ![](./png/Cubic_no.png )
 
 ![](./png/Cubic_no_2D.png )
Cubic_steps
 
 ![](./png/Cubic_steps.png )
 
 ![](./png/Cubic_steps_2D.png )
Cubic_tubes
 
 ![](./png/Cubic_tubes.png )
 
 ![](./png/Cubic_tubes_2D.png )
 
 CubicInv 
CubicInv_no
 
 ![](./png/CubicInv_no.png )
 
 ![](./png/CubicInv_no_2D.png )
CubicInv_steps
 
 ![](./png/CubicInv_steps.png )
 
 ![](./png/CubicInv_steps_2D.png )
CubicInv_tubes
 
 ![](./png/CubicInv_tubes.png )
 
 ![](./png/CubicInv_tubes_2D.png )
 
 Sqrt 
Sqrt_no
 
 ![](./png/Sqrt_no.png )
 
 ![](./png/Sqrt_no_2D.png )
Sqrt_steps
 
 ![](./png/Sqrt_steps.png )
 
 ![](./png/Sqrt_steps_2D.png )
Sqrt_tubes
 
 ![](./png/Sqrt_tubes.png )
 
 ![](./png/Sqrt_tubes_2D.png )
 
 Root 
Root_no
 
 ![](./png/Root_no.png )
 
 ![](./png/Root_no_2D.png )
Root_steps
 
 ![](./png/Root_steps.png )
 
 ![](./png/Root_steps_2D.png )
Root_tubes
 
 ![](./png/Root_tubes.png )
 
 ![](./png/Root_tubes_2D.png )
 
 Gamma 
Gamma_no
 
 ![](./png/Gamma_no.png )
 
 ![](./png/Gamma_no_2D.png )
Gamma_steps
 
 ![](./png/Gamma_steps.png )
 
 ![](./png/Gamma_steps_2D.png )
Gamma_tubes
 
 ![](./png/Gamma_tubes.png )
 
 ![](./png/Gamma_tubes_2D.png )
 
 LSin 
LSin_no
 
 ![](./png/LSin_no.png )
 
 ![](./png/LSin_no_2D.png )
LSin_steps
 
 ![](./png/LSin_steps.png )
 
 ![](./png/LSin_steps_2D.png )
LSin_tubes
 
 ![](./png/LSin_tubes.png )
 
 ![](./png/LSin_tubes_2D.png )
 
 SinExp 
SinExp_no
 
 ![](./png/SinExp_no.png )
 
 ![](./png/SinExp_no_2D.png )
SinExp_steps
 
 ![](./png/SinExp_steps.png )
 
 ![](./png/SinExp_steps_2D.png )
SinExp_tubes
 
 ![](./png/SinExp_tubes.png )
 
 ![](./png/SinExp_tubes_2D.png )
 
 Sin 
Sin_no
 
 ![](./png/Sin_no.png )
 
 ![](./png/Sin_no_2D.png )
Sin_steps
 
 ![](./png/Sin_steps.png )
 
 ![](./png/Sin_steps_2D.png )
Sin_tubes
 
 ![](./png/Sin_tubes.png )
 
 ![](./png/Sin_tubes_2D.png )
 
 Smooth 
Smooth_no
 
 ![](./png/Smooth_no.png )
 
 ![](./png/Smooth_no_2D.png )
Smooth_steps
 
 ![](./png/Smooth_steps.png )
 
 ![](./png/Smooth_steps_2D.png )
Smooth_tubes
 
 ![](./png/Smooth_tubes.png )
 
 ![](./png/Smooth_tubes_2D.png )
 
 Tanh 
Tanh_no
 
 ![](./png/Tanh_no.png )
 
 ![](./png/Tanh_no_2D.png )
Tanh_steps
 
 ![](./png/Tanh_steps.png )
 
 ![](./png/Tanh_steps_2D.png )
Tanh_tubes
 
 ![](./png/Tanh_tubes.png )
 
 ![](./png/Tanh_tubes_2D.png )
 
 smoothstep_Cubic_Polynomial 
smoothstep_Cubic_Polynomial_no
 
 ![](./png/smoothstep_Cubic_Polynomial_no.png )
 
 ![](./png/smoothstep_Cubic_Polynomial_no_2D.png )
smoothstep_Cubic_Polynomial_steps
 
 ![](./png/smoothstep_Cubic_Polynomial_steps.png )
 
 ![](./png/smoothstep_Cubic_Polynomial_steps_2D.png )
smoothstep_Cubic_Polynomial_tubes
 
 ![](./png/smoothstep_Cubic_Polynomial_tubes.png )
 
 ![](./png/smoothstep_Cubic_Polynomial_tubes_2D.png )
 
 inv_smoothstep_Cubic_Polynomial 
inv_smoothstep_Cubic_Polynomial_no
 
 ![](./png/inv_smoothstep_Cubic_Polynomial_no.png )
 
 ![](./png/inv_smoothstep_Cubic_Polynomial_no_2D.png )
inv_smoothstep_Cubic_Polynomial_steps
 
 ![](./png/inv_smoothstep_Cubic_Polynomial_steps.png )
 
 ![](./png/inv_smoothstep_Cubic_Polynomial_steps_2D.png )
inv_smoothstep_Cubic_Polynomial_tubes
 
 ![](./png/inv_smoothstep_Cubic_Polynomial_tubes.png )
 
 ![](./png/inv_smoothstep_Cubic_Polynomial_tubes_2D.png )
 
 smoothstep_Quartic_Polynomial 
smoothstep_Quartic_Polynomial_no
 
 ![](./png/smoothstep_Quartic_Polynomial_no.png )
 
 ![](./png/smoothstep_Quartic_Polynomial_no_2D.png )
smoothstep_Quartic_Polynomial_steps
 
 ![](./png/smoothstep_Quartic_Polynomial_steps.png )
 
 ![](./png/smoothstep_Quartic_Polynomial_steps_2D.png )
smoothstep_Quartic_Polynomial_tubes
 
 ![](./png/smoothstep_Quartic_Polynomial_tubes.png )
 
 ![](./png/smoothstep_Quartic_Polynomial_tubes_2D.png )
 
 inv_smoothstep_Quartic_Polynomial 
inv_smoothstep_Quartic_Polynomial_no
 
 ![](./png/inv_smoothstep_Quartic_Polynomial_no.png )
 
 ![](./png/inv_smoothstep_Quartic_Polynomial_no_2D.png )
inv_smoothstep_Quartic_Polynomial_steps
 
 ![](./png/inv_smoothstep_Quartic_Polynomial_steps.png )
 
 ![](./png/inv_smoothstep_Quartic_Polynomial_steps_2D.png )
inv_smoothstep_Quartic_Polynomial_tubes
 
 ![](./png/inv_smoothstep_Quartic_Polynomial_tubes.png )
 
 ![](./png/inv_smoothstep_Quartic_Polynomial_tubes_2D.png )
 
 smoothstep_Quintic_Polynomial 
smoothstep_Quintic_Polynomial_no
 
 ![](./png/smoothstep_Quintic_Polynomial_no.png )
 
 ![](./png/smoothstep_Quintic_Polynomial_no_2D.png )
smoothstep_Quintic_Polynomial_steps
 
 ![](./png/smoothstep_Quintic_Polynomial_steps.png )
 
 ![](./png/smoothstep_Quintic_Polynomial_steps_2D.png )
smoothstep_Quintic_Polynomial_tubes
 
 ![](./png/smoothstep_Quintic_Polynomial_tubes.png )
 
 ![](./png/smoothstep_Quintic_Polynomial_tubes_2D.png )
 
 smoothstep_Quadratic_Rational 
smoothstep_Quadratic_Rational_no
 
 ![](./png/smoothstep_Quadratic_Rational_no.png )
 
 ![](./png/smoothstep_Quadratic_Rational_no_2D.png )
smoothstep_Quadratic_Rational_steps
 
 ![](./png/smoothstep_Quadratic_Rational_steps.png )
 
 ![](./png/smoothstep_Quadratic_Rational_steps_2D.png )
smoothstep_Quadratic_Rational_tubes
 
 ![](./png/smoothstep_Quadratic_Rational_tubes.png )
 
 ![](./png/smoothstep_Quadratic_Rational_tubes_2D.png )
 
 inv_smoothstep_Quadratic_Rational 
inv_smoothstep_Quadratic_Rational_no
 
 ![](./png/inv_smoothstep_Quadratic_Rational_no.png )
 
 ![](./png/inv_smoothstep_Quadratic_Rational_no_2D.png )
inv_smoothstep_Quadratic_Rational_steps
 
 ![](./png/inv_smoothstep_Quadratic_Rational_steps.png )
 
 ![](./png/inv_smoothstep_Quadratic_Rational_steps_2D.png )
inv_smoothstep_Quadratic_Rational_tubes
 
 ![](./png/inv_smoothstep_Quadratic_Rational_tubes.png )
 
 ![](./png/inv_smoothstep_Quadratic_Rational_tubes_2D.png )
 
 smoothstep_Cubic_Rational 
smoothstep_Cubic_Rational_no
 
 ![](./png/smoothstep_Cubic_Rational_no.png )
 
 ![](./png/smoothstep_Cubic_Rational_no_2D.png )
smoothstep_Cubic_Rational_steps
 
 ![](./png/smoothstep_Cubic_Rational_steps.png )
 
 ![](./png/smoothstep_Cubic_Rational_steps_2D.png )
smoothstep_Cubic_Rational_tubes
 
 ![](./png/smoothstep_Cubic_Rational_tubes.png )
 
 ![](./png/smoothstep_Cubic_Rational_tubes_2D.png )
 
 inv_smoothstep_Cubic_Rational 
inv_smoothstep_Cubic_Rational_no
 
 ![](./png/inv_smoothstep_Cubic_Rational_no.png )
 
 ![](./png/inv_smoothstep_Cubic_Rational_no_2D.png )
inv_smoothstep_Cubic_Rational_steps
 
 ![](./png/inv_smoothstep_Cubic_Rational_steps.png )
 
 ![](./png/inv_smoothstep_Cubic_Rational_steps_2D.png )
inv_smoothstep_Cubic_Rational_tubes
 
 ![](./png/inv_smoothstep_Cubic_Rational_tubes.png )
 
 ![](./png/inv_smoothstep_Cubic_Rational_tubes_2D.png )
 
 smoothstep_Rational 
smoothstep_Rational_no
 
 ![](./png/smoothstep_Rational_no.png )
 
 ![](./png/smoothstep_Rational_no_2D.png )
smoothstep_Rational_steps
 
 ![](./png/smoothstep_Rational_steps.png )
 
 ![](./png/smoothstep_Rational_steps_2D.png )
smoothstep_Rational_tubes
 
 ![](./png/smoothstep_Rational_tubes.png )
 
 ![](./png/smoothstep_Rational_tubes_2D.png )
 
 inv_smoothstep_Rational 
inv_smoothstep_Rational_no
 
 ![](./png/inv_smoothstep_Rational_no.png )
 
 ![](./png/inv_smoothstep_Rational_no_2D.png )
inv_smoothstep_Rational_steps
 
 ![](./png/inv_smoothstep_Rational_steps.png )
 
 ![](./png/inv_smoothstep_Rational_steps_2D.png )
inv_smoothstep_Rational_tubes
 
 ![](./png/inv_smoothstep_Rational_tubes.png )
 
 ![](./png/inv_smoothstep_Rational_tubes_2D.png )
 
 smoothstep_Piecewise_Quadratic 
smoothstep_Piecewise_Quadratic_no
 
 ![](./png/smoothstep_Piecewise_Quadratic_no.png )
 
 ![](./png/smoothstep_Piecewise_Quadratic_no_2D.png )
smoothstep_Piecewise_Quadratic_steps
 
 ![](./png/smoothstep_Piecewise_Quadratic_steps.png )
 
 ![](./png/smoothstep_Piecewise_Quadratic_steps_2D.png )
smoothstep_Piecewise_Quadratic_tubes
 
 ![](./png/smoothstep_Piecewise_Quadratic_tubes.png )
 
 ![](./png/smoothstep_Piecewise_Quadratic_tubes_2D.png )
 
 inv_smoothstep_Piecewise_Quadratic 
inv_smoothstep_Piecewise_Quadratic_no
 
 ![](./png/inv_smoothstep_Piecewise_Quadratic_no.png )
 
 ![](./png/inv_smoothstep_Piecewise_Quadratic_no_2D.png )
inv_smoothstep_Piecewise_Quadratic_steps
 
 ![](./png/inv_smoothstep_Piecewise_Quadratic_steps.png )
 
 ![](./png/inv_smoothstep_Piecewise_Quadratic_steps_2D.png )
inv_smoothstep_Piecewise_Quadratic_tubes
 
 ![](./png/inv_smoothstep_Piecewise_Quadratic_tubes.png )
 
 ![](./png/inv_smoothstep_Piecewise_Quadratic_tubes_2D.png )
 
 smoothstep_Piecewise_Polynomial 
smoothstep_Piecewise_Polynomial_no
 
 ![](./png/smoothstep_Piecewise_Polynomial_no.png )
 
 ![](./png/smoothstep_Piecewise_Polynomial_no_2D.png )
smoothstep_Piecewise_Polynomial_steps
 
 ![](./png/smoothstep_Piecewise_Polynomial_steps.png )
 
 ![](./png/smoothstep_Piecewise_Polynomial_steps_2D.png )
smoothstep_Piecewise_Polynomial_tubes
 
 ![](./png/smoothstep_Piecewise_Polynomial_tubes.png )
 
 ![](./png/smoothstep_Piecewise_Polynomial_tubes_2D.png )
 
  inv_smoothstep_Piecewise_Polynomial 
 inv_smoothstep_Piecewise_Polynomial_no
 
 ![](./png/inv_smoothstep_Piecewise_Polynomial_no.png )
 
 ![](./png/inv_smoothstep_Piecewise_Polynomial_no_2D.png )
 inv_smoothstep_Piecewise_Polynomial_steps
 
 ![](./png/inv_smoothstep_Piecewise_Polynomial_steps.png )
 
 ![](./png/inv_smoothstep_Piecewise_Polynomial_steps_2D.png )
 inv_smoothstep_Piecewise_Polynomial_tubes
 
 ![](./png/inv_smoothstep_Piecewise_Polynomial_tubes.png )
 
 ![](./png/inv_smoothstep_Piecewise_Polynomial_tubes_2D.png )
 
 smoothstep_Trigonometric 
smoothstep_Trigonometric_no
 
 ![](./png/smoothstep_Trigonometric_no.png )
 
 ![](./png/smoothstep_Trigonometric_no_2D.png )
smoothstep_Trigonometric_steps
 
 ![](./png/smoothstep_Trigonometric_steps.png )
 
 ![](./png/smoothstep_Trigonometric_steps_2D.png )
smoothstep_Trigonometric_tubes
 
 ![](./png/smoothstep_Trigonometric_tubes.png )
 
 ![](./png/smoothstep_Trigonometric_tubes_2D.png )
 
 inv_smoothstep_Trigonometric 
inv_smoothstep_Trigonometric_no
 
 ![](./png/inv_smoothstep_Trigonometric_no.png )
 
 ![](./png/inv_smoothstep_Trigonometric_no_2D.png )
inv_smoothstep_Trigonometric_steps
 
 ![](./png/inv_smoothstep_Trigonometric_steps.png )
 
 ![](./png/inv_smoothstep_Trigonometric_steps_2D.png )
inv_smoothstep_Trigonometric_tubes
 
 ![](./png/inv_smoothstep_Trigonometric_tubes.png )
 
 ![](./png/inv_smoothstep_Trigonometric_tubes_2D.png )
 
 almostIdentity 
almostIdentity_no
 
 ![](./png/almostIdentity_no.png )
 
 ![](./png/almostIdentity_no_2D.png )
almostIdentity_steps
 
 ![](./png/almostIdentity_steps.png )
 
 ![](./png/almostIdentity_steps_2D.png )
almostIdentity_tubes
 
 ![](./png/almostIdentity_tubes.png )
 
 ![](./png/almostIdentity_tubes_2D.png )
 
 almostIdentity2 
almostIdentity2_no
 
 ![](./png/almostIdentity2_no.png )
 
 ![](./png/almostIdentity2_no_2D.png )
almostIdentity2_steps
 
 ![](./png/almostIdentity2_steps.png )
 
 ![](./png/almostIdentity2_steps_2D.png )
almostIdentity2_tubes
 
 ![](./png/almostIdentity2_tubes.png )
 
 ![](./png/almostIdentity2_tubes_2D.png )
 
 almostUnitIdentity 
almostUnitIdentity_no
 
 ![](./png/almostUnitIdentity_no.png )
 
 ![](./png/almostUnitIdentity_no_2D.png )
almostUnitIdentity_steps
 
 ![](./png/almostUnitIdentity_steps.png )
 
 ![](./png/almostUnitIdentity_steps_2D.png )
almostUnitIdentity_tubes
 
 ![](./png/almostUnitIdentity_tubes.png )
 
 ![](./png/almostUnitIdentity_tubes_2D.png )
 
 integralSmoothstep 
integralSmoothstep_no
 
 ![](./png/integralSmoothstep_no.png )
 
 ![](./png/integralSmoothstep_no_2D.png )
integralSmoothstep_steps
 
 ![](./png/integralSmoothstep_steps.png )
 
 ![](./png/integralSmoothstep_steps_2D.png )
integralSmoothstep_tubes
 
 ![](./png/integralSmoothstep_tubes.png )
 
 ![](./png/integralSmoothstep_tubes_2D.png )
 
 expImpulse 
expImpulse_no
 
 ![](./png/expImpulse_no.png )
 
 ![](./png/expImpulse_no_2D.png )
expImpulse_steps
 
 ![](./png/expImpulse_steps.png )
 
 ![](./png/expImpulse_steps_2D.png )
expImpulse_tubes
 
 ![](./png/expImpulse_tubes.png )
 
 ![](./png/expImpulse_tubes_2D.png )
 
 quaImpulse 
quaImpulse_no
 
 ![](./png/quaImpulse_no.png )
 
 ![](./png/quaImpulse_no_2D.png )
quaImpulse_steps
 
 ![](./png/quaImpulse_steps.png )
 
 ![](./png/quaImpulse_steps_2D.png )
quaImpulse_tubes
 
 ![](./png/quaImpulse_tubes.png )
 
 ![](./png/quaImpulse_tubes_2D.png )
 
 polyImpulse 
polyImpulse_no
 
 ![](./png/polyImpulse_no.png )
 
 ![](./png/polyImpulse_no_2D.png )
polyImpulse_steps
 
 ![](./png/polyImpulse_steps.png )
 
 ![](./png/polyImpulse_steps_2D.png )
polyImpulse_tubes
 
 ![](./png/polyImpulse_tubes.png )
 
 ![](./png/polyImpulse_tubes_2D.png )
 
 expSustainedImpulse 
expSustainedImpulse_no
 
 ![](./png/expSustainedImpulse_no.png )
 
 ![](./png/expSustainedImpulse_no_2D.png )
expSustainedImpulse_steps
 
 ![](./png/expSustainedImpulse_steps.png )
 
 ![](./png/expSustainedImpulse_steps_2D.png )
expSustainedImpulse_tubes
 
 ![](./png/expSustainedImpulse_tubes.png )
 
 ![](./png/expSustainedImpulse_tubes_2D.png )
 
 cubicPulse 
cubicPulse_no
 
 ![](./png/cubicPulse_no.png )
 
 ![](./png/cubicPulse_no_2D.png )
cubicPulse_steps
 
 ![](./png/cubicPulse_steps.png )
 
 ![](./png/cubicPulse_steps_2D.png )
cubicPulse_tubes
 
 ![](./png/cubicPulse_tubes.png )
 
 ![](./png/cubicPulse_tubes_2D.png )
 
 expStep 
expStep_no
 
 ![](./png/expStep_no.png )
 
 ![](./png/expStep_no_2D.png )
expStep_steps
 
 ![](./png/expStep_steps.png )
 
 ![](./png/expStep_steps_2D.png )
expStep_tubes
 
 ![](./png/expStep_tubes.png )
 
 ![](./png/expStep_tubes_2D.png )
 
 gain 
gain_no
 
 ![](./png/gain_no.png )
 
 ![](./png/gain_no_2D.png )
gain_steps
 
 ![](./png/gain_steps.png )
 
 ![](./png/gain_steps_2D.png )
gain_tubes
 
 ![](./png/gain_tubes.png )
 
 ![](./png/gain_tubes_2D.png )
 
 parabola 
parabola_no
 
 ![](./png/parabola_no.png )
 
 ![](./png/parabola_no_2D.png )
parabola_steps
 
 ![](./png/parabola_steps.png )
 
 ![](./png/parabola_steps_2D.png )
parabola_tubes
 
 ![](./png/parabola_tubes.png )
 
 ![](./png/parabola_tubes_2D.png )
 
 pcurve 
pcurve_no
 
 ![](./png/pcurve_no.png )
 
 ![](./png/pcurve_no_2D.png )
pcurve_steps
 
 ![](./png/pcurve_steps.png )
 
 ![](./png/pcurve_steps_2D.png )
pcurve_tubes
 
 ![](./png/pcurve_tubes.png )
 
 ![](./png/pcurve_tubes_2D.png )
 
 sinc 
sinc_no
 
 ![](./png/sinc_no.png )
 
 ![](./png/sinc_no_2D.png )
sinc_steps
 
 ![](./png/sinc_steps.png )
 
 ![](./png/sinc_steps_2D.png )
sinc_tubes
 
 ![](./png/sinc_tubes.png )
 
 ![](./png/sinc_tubes_2D.png )
 
 trunc_fallof 
trunc_fallof_no
 
 ![](./png/trunc_fallof_no.png )
 
 ![](./png/trunc_fallof_no_2D.png )
trunc_fallof_steps
 
 ![](./png/trunc_fallof_steps.png )
 
 ![](./png/trunc_fallof_steps_2D.png )
trunc_fallof_tubes
 
 ![](./png/trunc_fallof_tubes.png )
 
 ![](./png/trunc_fallof_tubes_2D.png )
# source code

D directort
* [d.c](./src/d/d.c)
* results of the program  are in [the text files (./src/*.txt)](./src/d)


Compile and run the program

```
gcc d.c -Wall -Wextra -lm
a.out > c.txt
gnuplot
plot "c.txt" with lines 
# save image as a c.png
```


G directory

  make

# FAQ

## How to add new shaping function (transfer function or color function or mapping function) ?
* add new functions named: Give_s
* add new enum named: s in ColorTransferFunctionType 
* use s.c program to compute code for c functions (GiveRGB_Gray and GiveColor) and for gnuplot 
* copy code 

```c
// 
double Give_s(const double position){
	
	
  double s =  position;
  return s;
}
```

S directory contains c program for creating code for plot.gp and g.c




# all curves in one image 

[curves by kynd.inf ](https://www.flickr.com/photos/kynd/9546075099/in/photostream/)

![](./png/kynd_big.jpg )

Screen shot from  [online WebGL demo](https://www.polymonster.co.uk/pmtech/examples/maths_functions.html)

![](./png/curves.png )



[available animation transition types: (the default transition type, 'linear', was omitted)](https://wiki.sparrow-framework.org/_media/manual/transitions.png) from the [wiki of the Sparrow Framework](https://wiki.sparrow-framework.org/manual/animation) — the Open Source Game Engine for iOS.


![](./png/transitions.png)


# online demos
* [jQuery easing; illustrated by James Padolsey](https://j11y.io/demos/jquery/easing/)
* [online WebGL demo](https://www.polymonster.co.uk/pmtech/examples/maths_functions.html)
* [larsenwork: easing-gradients/](https://larsenwork.com/easing-gradients/) Linear gradients often have hard edges where they start and/or end. We can avoid those by controlling the color mix with easing functions.
* [FlexMonkey: Interpolation-Playground-](https://github.com/FlexMonkey/Interpolation-Playground-)
* [Easing Functions Cheat Sheet](https://easings.net/en)


# Similar repo
* [1D-RGB-color-gradient](https://github.com/adammaj1/1D-RGB-color-gradient)
* [Golan Levin: Pattern_Master](https://github.com/golanlevin/Pattern_Master) for Processing
* [p5.js-func](https://idmnyu.github.io/p5.js-func/): Function Generators for p5.js
* [Shaping functions in GLSL by Patricio Gonzalez Vivo & Jen Lowe](https://thebookofshaders.com/05/)
* [curves by kynd.inf ](https://www.flickr.com/photos/kynd/9546075099/in/photostream/)




Easing functions
* each easing function has 3 variants: ease-in, ease-out, and ease-in-out 
* [Easing Equations by @nicmulvaney](https://web.archive.org/web/20230627221335/https://gizma.com/easing/)
* [EASING EQUATIONS by Robert Penner - github](https://github.com/danro/tweenman-as3/blob/master/Easing.as)
* [EASING EQUATIONS by Robert Penner - www](http://robertpenner.com/easing/)
* [Tweening chapter of  Robert Penner's book: Programming Macromedia Flash MX](http://robertpenner.com/easing/penner_chapter7_tweening.pdf)
* [AHEasing: A supplemental library of easing functions for C, C++, and Objective-C](https://github.com/warrenm/AHEasing) by Warren Moore
* [Parametric acceleration curves in Core Animation, September 9, 2008 by Matt Gallagher](https://cocoawithlove.com/2008/09/parametric-acceleration-curves-in-core.html)
* [stackoverflow question: how-to-create-custom-easing-function-with-core-animation](https://stackoverflow.com/questions/5161465/how-to-create-custom-easing-function-with-core-animation)
* [Robert Penner's easing equations converted to coffeescript.](https://github.com/jimjeffers/Easie) by Jim Jeffers
* [Understanding Easing (Explaining Penner’s equations) – JavaScript and ActionScript ](https://upshots.org/)
* [easing-functions in CSS ](https://developer.mozilla.org/en-US/docs/Web/CSS/easing-function)

by Iñigo Quilez
* [GraphToy  = a tool to visualize GLSL functions in WebGL](https://graphtoy.com/), only function of 2 variables:  f(x,t) 
* [useful little functions ](https://iquilezles.org/articles/functions/)
* [smoothsteps/](https://iquilezles.org/articles/smoothsteps/)
* [smoothstep integral](https://iquilezles.org/articles/smoothstepintegral/)
* [mega polynomial curve](https://www.shadertoy.com/view/sltfRs)   
  
Smoothstep
* [wikipedia](https://en.wikipedia.org/wiki/Smoothstep)
* [Smoothstep - Shader Graph Basics - Episode 15 by Ben Cloward](https://www.youtube.com/watch?v=dn3y5KVxylQ) 
* [smoothstep-looking-for-a-continuous-family-of-interpolation-functions](https://math.stackexchange.com/questions/1749250/smoothstep-looking-for-a-continuous-family-of-interpolation-functions) 
* [RSL: Using smoothstep](https://www.fundza.com/rman_shaders/smoothstep/index.html)
* [interpolations tricks](https://solhsa.com/interpolation/) or How I Learned to Stop Worrying and Love the 0..1 Range by  Jari Komppa
  
[Polynomial Shaping Functions](https://www.flong.com/archive/texts/code/shapers_poly): This page presents a collection of polynomial functions for shaping, tweening, and easing signals in the range [0...1]. Functions include:
* Blinn-Wyvill Approximation to the Raised Inverted Cosine
* Double-Cubic Seat
* Double-Cubic Seat with Linear Blend
* Double-Odd-Polynomial Seat
* Symmetric Double-Polynomial Sigmoids
* Quadratic Through a Given Point

[Exponential Shaping Functions](https://www.flong.com/archive/texts/code/shapers_exp)
* Exponential Ease-In and Ease-Out
* Double-Exponential Seat
* Double-Exponential Sigmoid
* The Logistic Sigmoid

[Circular & Elliptical Shaping Functions](https://www.flong.com/archive/texts/code/shapers_circ)
* Circular Interpolation: Ease-In and Ease-Out 
* Double-Circle Seat
* Double-Circle Sigmoid
* Double-Elliptic Seat
* Double-Elliptic Sigmoid
* Double-Linear with Circular Fillet
* Circular Arc Through a Given Points

[Bezier and Other Parametric Shaping Functions](https://www.flong.com/archive/texts/code/shapers_bez)
* Quadratic Bezier
* Cubic Bezier
* Cubic Bezier (Nearly) Through Two Given Points


[List of interpolations](https://github.com/FlexMonkey/Interpolation-Playground-)
* Linear Interpolation
* Smooth Step
* Smoother Step
* Smoothest Step
* Squared
* Inverse Squared
* Cubed
* Sin
* Catmull-Rom
* Elastic In
* Elastic Out
* Wobble
* Gaussian

#Inspiration
--------

This work is a spiritual descendent (not to say derivative work) of works done by the following individuals:
* [Robert Penner](http://www.robertpenner.com/easing/): Created the first flexible, reusable Easing functions …which are the cornerstone of all JS animation techniques today
* [Golan Levin](https://www.flong.com/)
* [Warren Moore](https://github.com/warrenm)
* [George McGinley Smith](http://gsgd.co.uk/sandbox/jquery/easing/)
* [James Padolsey](http://james.padolsey.com/demos/jquery/easing/)
* [Authors of jQuery](http://plugins.jquery.com/project/Easing)
* [Matt Gallagher](http://cocoawithlove.com/2008/09/parametric-acceleration-curves-in-core.html)
* [Jesse Crossen](http://stackoverflow.com/questions/5161465/how-to-create-custom-easing-function-with-core-animation)
* [Iñigo Quilez](https://iquilezles.org) 
* [Andrey Sitnik](https://sitnik.ru/en/) 
* [Jim Jeffers](https://github.com/jimjeffers)



# Dictionary
* lerp = linear interpolation
* Easing functions specify the rate of change of a parameter over time.
* [Exponential decay](https://en.wikipedia.org/wiki/Exponential_decay)
* [Exponential growth](https://en.wikipedia.org/wiki/Exponential_growth): Exponential growth is the inverse of logarithmic growth
* [Logarithmic growth](https://en.wikipedia.org/wiki/Logarithmic_growth): Logarithmic growth is the inverse of exponential growth and is very slow
* linear growth ( linear function):  y = f(x) ; proportional or directly proportional if their corresponding elements have a constant ratio
* [Quadratic_growth](https://en.wikipedia.org/wiki/Quadratic_growth)
* [Hyperbolic_growth](https://en.wikipedia.org/wiki/Hyperbolic_growth): If the output of a function is inversely proportional to its input, or inversely proportional to the difference from a given value x0, the function will exhibit hyperbolic growth, with a singularity at x0
* [Big O notation](https://en.wikipedia.org/wiki/Big_O_notation), see Orders of common functions



# Git


```
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin git@github.com:adammaj1/Waveform.git
git push -u origin main
```

Subdirectory
---------------

```
mkdir images
git add *.png
git mv  *.png ./png
git commit -m "move"
git push -u origin main

```

then link the images:

```
![](./png/n.png "description of n.png image") 
```
to overwrite

```
git mv -f 
```

local repo : 
--------------

~/Dokumenty/c/Waveform


License
------------------
File LICENSE must be in main repo directory to be read by github


Github
* [GitHub Flavored Markdown Spec](https://github.github.com/gfm/)
* [md cheat sheet](http://mdcheatsheet.com/)
* [CommonMark Spec](https://spec.commonmark.org)
* [Markdown parser ](https://markdown-it.github.io/)


Math equation inside README.md
* $\sqrt{3x-1}+(1+x)^2$




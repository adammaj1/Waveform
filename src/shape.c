/*
// Contents © 2020 Golan Levin and Collaborators. "We fling flongs all day long"
https://www.flong.com/archive/texts/code/shapers_poly/index.html
07 2006. Shaping Functions: Polynomial
07 2006. Shaping Functions: Exponential
07 2006. Shaping Functions: Circular and Elliptical
07 2006. Shaping Functions: Bezier and Parametric

*/









//Polynomial Shaping Functions
/*
This page presents a collection of polynomial functions for shaping, tweening, and easing signals in the range [0...1]. Functions include:

Blinn-Wyvill Approximation to the Raised Inverted Cosine
Double-Cubic Seat
Double-Cubic Seat with Linear Blend
Double-Odd-Polynomial Seat
Symmetric Double-Polynomial Sigmoids
Quadratic Through a Given Point
Blinn-Wyvill Approximation to the Raised Inverted Cosine

Trigonometric functions like cos() and sin() are ubiquitous in natural sciences, engineering and animation, but they can be expensive to compute. If a situation calls for millions of trigonometric operations per second, substantial speed optimizations can be obtained by using an approximation constructed from simple arithmetic functions. An example is the Blinn-Wyvill polynomial approximation to the Raised Inverted Cosine, which diverges from the authentic (scaled) trigonometric function by less than 0.1% within the range [0...1]. It also shares some of the Raised Inverted Cosine's key properties, having flat derivatives at 0 and 1, and the value 0.5 at x=0.5. It has the strong advantage that it is relatively efficient to compute, since it is comprised exclusively from simple arithmetic operations and cacheable fractions. Unlike the Raised Inverted Cosine, it does not have infinite derivatives, but since it is a sixth-order function, this limitation is unlikely to be noticed in practice.

This would be a useful approximation for the cos() and sin() trigonometric functions for a small microprocessor (such as an Arduino) which has limited speed and math capabilities.


y = blinnWyvillCosineApproximation ( x) = (4 * x^6  - 17 * x^4  + 22*x^2)/ 9

*/



//---------------------------------------------
 const  double blinnWyvillCosineApproximation (const double x){
   double x2 = x*x;
   double x4 = x2*x2;
   double x6 = x4*x2;
  
  final  double fa = ( 4.0/9.0);
  final  double fb = (17.0/9.0);
  final  double fc = (22.0/9.0);
  
   double y = fa*x6 - fb*x4 + fc*x2;
  return y;
}

/*
Double-Cubic Seat

This seat-shaped function is formed by joining two 3rd-order polynomial (cubic) curves. The curves meet with a horizontal inflection point at the control coordinate (a,b) in the unit square.
*/






//------------------------------------------------
 double doubleCubicSeat (const double x,const  double a,  const  double b){
  
   double epsilon = 0.00001;
   double min_param_a = 0.0 + epsilon;
   double max_param_a = 1.0 - epsilon;
   double min_param_b = 0.0;
   double max_param_b = 1.0;
  a = min(max_param_a, max(min_param_a, a));  
  b = min(max_param_b, max(min_param_b, b)); 
  
   double y = 0;
  if (x <= a){
    y = b - b*pow(1-x/a, 3.0);
  } else {
    y = b + (1-b)*pow((x-a)/(1-a), 3.0);
  }
  return y;
}

/*
Double-Cubic Seat with Linear Blend

This modified version of the Double-Cubic Seat function uses a single variable to control the location of its inflection point along the diagonal of the unit square. A second parameter is used to blend this curve with the Identity Function (y=x). Here, we use the variable b to control the amount of this blend, which has the effect of tilting the slope of the curve's plateau in the vicinity of its inflection point. The adjustable flattening around the inflection point makes this a useful shaping function for lensing or magnifying evenly-spaced data.


*/



//---------------------------------------------------------------
 double doubleCubicSeatWithLinearBlend (const double x, const  double a,  const  double b){

   double epsilon = 0.00001;
   double min_param_a = 0.0 + epsilon;
   double max_param_a = 1.0 - epsilon;
   double min_param_b = 0.0;
   double max_param_b = 1.0;
  a = min(max_param_a, max(min_param_a, a));  
  b = min(max_param_b, max(min_param_b, b)); 
  b = 1.0 - b; //reverse for intelligibility.
  
   double y = 0;
  if (x<=a){
    y = b*x + (1-b)*a*(1-pow(1-x/a, 3.0));
  } else {
    y = b*x + (1-b)*(a + (1-a)*pow((x-a)/(1-a), 3.0));
  }
  return y;
}
/*
Double-Odd-Polynomial Seat

The previous Double-Cubic Seat function can be generalized to a form which uses any odd integer exponent. In the code below, the parameter n controls the flatness or breadth of the plateau region in the vicinity of the point (a,b). A good working range for n is the set of whole numbers from 1 to about 20.


*/



//---------------------------------------------------------------
 double doubleOddPolynomialSeat (const double x, const  double a,  const  double b, const  int n){

   double epsilon = 0.00001;
   double min_param_a = 0.0 + epsilon;
   double max_param_a = 1.0 - epsilon;
   double min_param_b = 0.0;
   double max_param_b = 1.0;
  a = min(max_param_a, max(min_param_a, a));  
  b = min(max_param_b, max(min_param_b, b)); 

  int p = 2*n + 1;
   double y = 0;
  if (x <= a){
    y = b - b*pow(1-x/a, p);
  } else {
    y = b + (1-b)*pow((x-a)/(1-a), p);
  }
  return y;
}

/*
Odd-powered polynomials, such as cubics and quintics, lend themselves very naturally to creating seat-shaped curves. This example is parametrically blended with the Identity Function (y=x), as regulated by the parameter a; the shaping function passes through the corners of the unit square (0,0) and (1,1) and symmetrically through the midpoint (0.5, 0.5). It is also relatively efficient to compute.



Symmetric Double-Polynomial Sigmoids

It is possible to generate sigmoid patterns by joining a symmetric pair of polynomials at the center of the unit square. The exponents in these equations (controlled by the integer parameter n) control the steepness of the wall separating the squelched values from the boosted ones; a suggested range for the whole number n is from 1 to about 10. Of these, the sigmoid created with a 2nd-order (quadratic) exponent comes closest to the Raised Inverted Cosine, approximating it to within 2.8%.


The Symmetric Double-Polynomial Sigmoids presented here create an S-shape with flat tangents at 0 and 1, and with the special property that f(0.5) = 0.5. Sigmoids generated with even exponents require the following equations:




Odd exponents require a slightly different pair of equations:

*/

//---------------------------------------------------------------
 double doublePolynomialSigmoid (const double x,const  double a,  const  double b, const  int n){
  
   double y = 0;
  if (n%2 == 0){ 
    // even polynomial
    if (x<=0.5){
      y = pow(2.0*x, n)/2.0;
    } else {
      y = 1.0 - pow(2*(x-1), n)/2.0;
    }
  } 
  
  else { 
    // odd polynomial
    if (x<=0.5){
      y = pow(2.0*x, n)/2.0;
    } else {
      y = 1.0 + pow(2.0*(x-1), n)/2.0;
    }
  }

  return y;
}

/*
Quadratic Through a Given Point

This function defines an axis-aligned quadratic (parabola) which passes through a user-supplied point (a,b) in the unit square. Caution: Not all points in the unit square will produce curves which pass through the locations (0,0) and (1,1).


*/


//------------------------------------------------------------
 double quadraticThroughAGivenPoint (const double x,const  double a,  const  double b){
  
   double epsilon = 0.00001;
   double min_param_a = 0.0 + epsilon;
   double max_param_a = 1.0 - epsilon;
   double min_param_b = 0.0;
   double max_param_b = 1.0;
  a = min(max_param_a, max(min_param_a, a));  
  b = min(max_param_b, max(min_param_b, b)); 
  
   double A = (1-b)/(1-a) - (b/a);
   double B = (A*(a*a)-b)/a;
   double y = A*(x*x) - B*(x);
  y = min(1,max(0,y)); 
  
  return y;
}























//Exponential Shaping Functions

/*
Exponential Ease-In and Ease-Out
Double-Exponential Seat
Double-Exponential Sigmoid
The Logistic Sigmoid
Exponential Ease-In and Ease-Out

In this implementation of an exponential shaping function, the control parameter a permits the designer to vary the function from an ease-out form to an ease-in form.

Exponential Ease-In:




Exponential Ease-Out:
*/



//-----------------------------------------
 double exponentialEasing (const double x,  double a){
  
   double epsilon = 0.00001;
   double min_param_a = 0.0 + epsilon;
   double max_param_a = 1.0 - epsilon;
  a = max(min_param_a, min(max_param_a, a));
  
  if (a < 0.5){
    // emphasis
    a = 2.0*(a);
     double y = pow(x, a);
    return y;
  } else {
    // de-emphasis
    a = 2.0*(a-0.5);
     double y = pow(x, 1.0/(1-a));
    return y;
  }
}


/*
Double-Exponential Seat

A seat-shaped function can be created with a coupling of two exponential functions. This has nicer derivatives than the cubic function, and more continuous control in some respects, at the expense of greater CPU cycles. The recommended range for the control parameter a is from 0 to 1. Note that these equations are very similar to the Double-Exponential Sigmoid described below.

*/




//---------------------------------------------
 double doubleExponentialSeat (const double x,  double a){

   double epsilon = 0.00001;
   double min_param_a = 0.0 + epsilon;
   double max_param_a = 1.0 - epsilon;
  a = min(max_param_a, max(min_param_a, a)); 

   double y = 0;
  if (x<=0.5){
    y = (pow(2.0*x, 1-a))/2.0;
  } else {
    y = 1.0 - (pow(2.0*(1.0-x), 1-a))/2.0;
  }
  return y;
}

/*
Double-Exponential Sigmoid

The same doubling-and-flipping scheme can be used to create sigmoids from pairs of exponential functions. These have the advantage that the control parameter a can be continously varied between 0 and 1, and are therefore very useful as adjustable-contrast functions. However, they are more expensive to compute than the polynomial sigmoid flavors. The Double-Exponential Sigmoid approximates the Raised Inverted Cosine to within 1% when the parameter a is approximately 0.426.

*/




//------------------------------------------------
 double doubleExponentialSigmoid (const double x,  double a){

   double epsilon = 0.00001;
   double min_param_a = 0.0 + epsilon;
   double max_param_a = 1.0 - epsilon;
  a = min(max_param_a, max(min_param_a, a));
  a = 1.0-a; // for sensible results
  
   double y = 0;
  if (x<=0.5){
    y = (pow(2.0*x, 1.0/a))/2.0;
  } else {
    y = 1.0 - (pow(2.0*(1.0-x), 1.0/a))/2.0;
  }
  return y;
}



/*
The Logistic Sigmoid

The so-called "Logistic Curve" is an elegant sigmoidal function which is believed by many scientists to best represent the growth of organic populations and many other natural phenomena. In software engineering, it is often used for weighting signal-response functions in neural networks. In this implementation, the parameter a regulates the slope or "growth rate" of the sigmoid during its rising portion. When a=0, this version of the Logistic function collapses to the Identity Function (y=x). The Logistic Sigmoid has very natural rates of change, but is expensive to calculate due to the use of many exponential functions.
*/




//---------------------------------------
 double logisticSigmoid (const double x,  double a){
  // n.b.: this Logistic Sigmoid has been normalized.

   double epsilon = 0.0001;
   double min_param_a = 0.0 + epsilon;
   double max_param_a = 1.0 - epsilon;
  a = max(min_param_a, min(max_param_a, a));
  a = (1/(1-a) - 1);

   double A = 1.0 / (1.0 + exp(0 -((x-0.5)*a*2.0)));
   const  double b = 1.0 / (1.0 + exp(a));
   double C = 1.0 / (1.0 + exp(0-a)); 
   double y = (A-B)/(C-B);
  return y;
}


/*

Circular & Elliptical Shaping Functions
Circular Interpolation: Ease-In and Ease-Out 
Double-Circle Seat
Double-Circle Sigmoid
Double-Elliptic Seat
Double-Elliptic Sigmoid
Double-Linear with Circular Fillet
Circular Arc Through a Given Point
Circular Interpolation: Ease-In and Ease-Out

A circular arc offers a quick and easy-to-code method for easing in or out of the unit square. The computational efficiency of the function is diminished by its use of a square root, however.


Ease-In-interpolation (x) = 1 - sqrt(1 - x*x)
Ease-Out-interpolation(x) = sqrt(1 - (1 - x )^2)


*/
//------------------------------
 double circularEaseIn (const double x){
   double y = 1 - sqrt(1 - x*x);
  return y;
}

//------------------------------
 double circularEaseOut (const double x){
   double y = sqrt(1 - sq(1 - x));
  return y;
}

/*
Double-Circle Seat

This shaping function is formed by the meeting of two circular arcs, which join with a horizontal tangent. The parameter a, in the range [0...1], governs the location of the curve's inflection point along the diagonal of the unit square.
*/





//----------------------------------------
 double doubleCircleSeat (const double x,  double a){
   double min_param_a = 0.0;
   double max_param_a = 1.0;
  a = max(min_param_a, min(max_param_a, a)); 

   double y = 0;
  if (x<=a){
    y = sqrt(sq(a) - sq(x-a));
  } else {
    y = 1 - sqrt(sq(1-a) - sq(x-a));
  }
  return y;
}


/*
Double-Circle Sigmoid

This sigmoidal shaping function is formed by the meeting of two circular arcs, which join with a vertical tangent. The parameter a, in the range [0...1], governs the location of the curve's inflection point along the diagonal of the unit square.

*/




//-------------------------------------------
 double doubleCircleSigmoid (const double x,  double a){
   double min_param_a = 0.0;
   double max_param_a = 1.0;
  a = max(min_param_a, min(max_param_a, a)); 

   double y = 0;
  if (x<=a){
    y = a - sqrt(a*a - x*x);
  } else {
    y = a + sqrt(sq(1-a) - sq(x-1));
  }
  return y;
}

/*
Double-Elliptic Seat

This seat-shaped function is created by the joining of two elliptical arcs, and is a generalization of the Double-Circle Seat. The two arcs meet at the coordinate (a,b) with a horizontal tangent.
*/





//---------------------------------------------------
 double doubleEllipticSeat (const double x,const  double a,  const  double b){
   double epsilon = 0.00001;
   double min_param_a = 0.0 + epsilon;
   double max_param_a = 1.0 - epsilon;
   double min_param_b = 0.0;
   double max_param_b = 1.0;
  a = max(min_param_a, min(max_param_a, a)); 
  b = max(min_param_b, min(max_param_b, b)); 

   double y = 0;
  if (x<=a){
    y = (b/a) * sqrt(sq(a) - sq(x-a));
  } else {
    y = 1- ((1-b)/(1-a))*sqrt(sq(1-a) - sq(x-a));
  }
  return y;
}


/*
Double-Elliptic Sigmoid

This sigmoid-shaped function is created by the joining of two elliptical arcs, and is a generalization of the Double-Circle Sigmoid. The arcs meet at the coordinate (a, b) in the unit square with a vertical tangent.

*/

 


//------------------------------------------------------
 double doubleEllipticSigmoid (const double x,const  double a,  const  double b){

   double epsilon = 0.00001;
   double min_param_a = 0.0 + epsilon;
   double max_param_a = 1.0 - epsilon;
   double min_param_b = 0.0;
   double max_param_b = 1.0;
  a = max(min_param_a, min(max_param_a, a)); 
  b = max(min_param_b, min(max_param_b, b));
 
   double y = 0;
  if (x<=a){
    y = b * (1 - (sqrt(sq(a) - sq(x))/a));
  } else {
    y = b + ((1-b)/(1-a))*sqrt(sq(1-a) - sq(x-1));
  }
  return y;
}

/*
Double-Linear with Circular Fillet

This pattern joins two straight lines with a circular arc whose radius is adjustable. The user specifies the fillet's radius (with parameter c) and the coordinate in the unit square where the lines would otherwise intersect (with parameters a and b). This pattern is adapted from Robert D. Miller's "Joining Two Lines with a Circular Arc Fillet", which appears in Graphics Gems III.

*/

//--------------------------------------------------------
// Joining Two Lines with a Circular Arc Fillet
// Adapted from Robert D. Miller / Graphics Gems III.

 double arcStartAngle;
 double arcEndAngle;
 double arcStartX,  arcStartY;
 double arcEndX,    arcEndY;
 double arcCenterX, arcCenterY;
 double arcRadius;

//--------------------------------------------------------
 double circularFillet (const double x,const  double a,  const  double b,  double R){
  
   double epsilon = 0.00001;
   double min_param_a = 0.0 + epsilon;
   double max_param_a = 1.0 - epsilon;
   double min_param_b = 0.0 + epsilon;
   double max_param_b = 1.0 - epsilon;
  a = max(min_param_a, min(max_param_a, a)); 
  b = max(min_param_b, min(max_param_b, b)); 

  computeFilletParameters (0,0, a,b, a,b, 1,1,  R);
   double t = 0;
   double y = 0;
  x = max(0, min(1, x));
  
  if (x <= arcStartX){
    t = x / arcStartX;
    y = t * arcStartY;
  } else if (x >= arcEndX){
    t = (x - arcEndX)/(1 - arcEndX);
    y = arcEndY + t*(1 - arcEndY);
  } else {
    if (x >= arcCenterX){
      y = arcCenterY - sqrt(sq(arcRadius) - sq(x-arcCenterX)); 
    } else{
      y = arcCenterY + sqrt(sq(arcRadius) - sq(x-arcCenterX)); 
    }
  }
  return y;
}

//------------------------------------------
// Return signed distance from line Ax + By + C = 0 to point P.
 double linetopoint ( double a,  const  double b,  double c,  double ptx,  double pty){
   double lp = 0.0;
   double d = sqrt((a*a)+(b*b));
  if (d != 0.0){
    lp = (a*ptx + b*pty + c)/d;
  }
  return lp;
}

//------------------------------------------
// Compute the parameters of a circular arc 
// fillet between lines L1 (p1 to p2) and
// L2 (p3 to p4) with radius R.  
// 
void computeFilletParameters (
   double p1x,  double p1y, 
   double p2x,  double p2y, 
   double p3x,  double p3y, 
   double p4x,  double p4y,
   double r){

   double c1   = p2x*p1y - p1x*p2y;
   double a1   = p2y-p1y;
   const  double b1   = p1x-p2x;
   double c2   = p4x*p3y - p3x*p4y;
   double a2   = p4y-p3y;
   const  double b2   = p3x-p4x;
  if ((a1*b2) == (a2*b1)){  /* Parallel or coincident lines */
    return;
  }

   double d1, d2;
   double mPx, mPy;
  mPx = (p3x + p4x)/2.0;
  mPy = (p3y + p4y)/2.0;
  d1 = linetopoint(a1,b1,c1,mPx,mPy);  /* Find distance p1p2 to p3 */
  if (d1 == 0.0) {
    return; 
  }
  mPx = (p1x + p2x)/2.0;
  mPy = (p1y + p2y)/2.0;
  d2 = linetopoint(a2,b2,c2,mPx,mPy);  /* Find distance p3p4 to p2 */
  if (d2 == 0.0) {
    return; 
  }

   double c1p, c2p, d;
   double rr = r;
  if (d1 <= 0.0) {
    rr= -rr;
  }
  c1p = c1 - rr*sqrt((a1*a1)+(b1*b1));  /* Line parallel l1 at d */
  rr = r;
  if (d2 <= 0.0){
    rr = -rr;
  }
  c2p = c2 - rr*sqrt((a2*a2)+(b2*b2));  /* Line parallel l2 at d */
  d = (a1*b2)-(a2*b1);

   double pCx = (c2p*b1-c1p*b2)/d; /* Intersect constructed lines */
   double pCy = (c1p*a2-c2p*a1)/d; /* to find center of arc */
   double pAx = 0;
   double pAy = 0;
   double pBx = 0;
   double pBy = 0;
   double dP,cP;

  dP = (a1*a1) + (b1*b1);        /* Clip or extend lines as required */
  if (dP != 0.0){
    cP = a1*pCy - b1*pCx;
    pAx = (-a1*c1 - b1*cP)/dP;
    pAy = ( a1*cP - b1*c1)/dP;
  }
  dP = (a2*a2) + (b2*b2);
  if (dP != 0.0){
    cP = a2*pCy - b2*pCx;
    pBx = (-a2*c2 - b2*cP)/dP;
    pBy = ( a2*cP - b2*c2)/dP;
  }

   double gv1x = pAx-pCx; 
   double gv1y = pAy-pCy;
   double gv2x = pBx-pCx; 
   double gv2y = pBy-pCy;

   double arcStart = ( double) atan2(gv1y,gv1x); 
   double arcAngle = 0.0;
   double dd = ( double) sqrt(((gv1x*gv1x)+(gv1y*gv1y)) * ((gv2x*gv2x)+(gv2y*gv2y)));
  if (dd != ( double) 0.0){
    arcAngle = (acos((gv1x*gv2x + gv1y*gv2y)/dd));
  } 
   double crossProduct = (gv1x*gv2y - gv2x*gv1y);
  if (crossProduct < 0.0){ 
    arcStart -= arcAngle;
  }

   double arc1 = arcStart;
   double arc2 = arcStart + arcAngle;
  if (crossProduct < 0.0){
    arc1 = arcStart + arcAngle;
    arc2 = arcStart;
  }

  arcCenterX    = pCx;
  arcCenterY    = pCy;
  arcStartAngle = arc1;
  arcEndAngle   = arc2;
  arcRadius     = r;
  arcStartX     = arcCenterX + arcRadius*cos(arcStartAngle);
  arcStartY     = arcCenterY + arcRadius*sin(arcStartAngle);
  arcEndX       = arcCenterX + arcRadius*cos(arcEndAngle);
  arcEndY       = arcCenterY + arcRadius*sin(arcEndAngle);
}
Circular Arc Through a Given Point

This function defines a circular arc which passes through a user-specified point in the unit square. Unfortunately, not every location in the unit square lends itself to defining a circle which also is confined to the unit square; the user-supplied point must inhabit a zone close to the main (Identity) diagonal. This pattern is adapted from Paul Bourke's Equation of a Circle From 3 Points.



//---------------------------------------------------------
// Adapted from Paul Bourke 
 double m_Centerx;
 double m_Centery;
 double m_dRadius;

 double circularArcThroughAPoint (const double x,const  double a,  const  double b){  
   double epsilon = 0.00001;
   double min_param_a = 0.0 + epsilon;
   double max_param_a = 1.0 - epsilon;
   double min_param_b = 0.0 + epsilon;
   double max_param_b = 1.0 - epsilon;
  a = min(max_param_a, max(min_param_a, a));
  b = min(max_param_b, max(min_param_b, b));
  x = min(1.0-epsilon, max(0.0+epsilon, x));
  
   double pt1x = 0;
   double pt1y = 0;
   double pt2x = a;
   double pt2y = b;
   double pt3x = 1;
   double pt3y = 1;

  if      (!IsPerpendicular(pt1x,pt1y, pt2x,pt2y, pt3x,pt3y))		
     calcCircleFrom3Points (pt1x,pt1y, pt2x,pt2y, pt3x,pt3y);	
  else if (!IsPerpendicular(pt1x,pt1y, pt3x,pt3y, pt2x,pt2y))		
     calcCircleFrom3Points (pt1x,pt1y, pt3x,pt3y, pt2x,pt2y);	
  else if (!IsPerpendicular(pt2x,pt2y, pt1x,pt1y, pt3x,pt3y))		
     calcCircleFrom3Points (pt2x,pt2y, pt1x,pt1y, pt3x,pt3y);	
  else if (!IsPerpendicular(pt2x,pt2y, pt3x,pt3y, pt1x,pt1y))		
     calcCircleFrom3Points (pt2x,pt2y, pt3x,pt3y, pt1x,pt1y);	
  else if (!IsPerpendicular(pt3x,pt3y, pt2x,pt2y, pt1x,pt1y))		
     calcCircleFrom3Points (pt3x,pt3y, pt2x,pt2y, pt1x,pt1y);	
  else if (!IsPerpendicular(pt3x,pt3y, pt1x,pt1y, pt2x,pt2y))		
     calcCircleFrom3Points (pt3x,pt3y, pt1x,pt1y, pt2x,pt2y);	
  else { 
    return 0;
  }

  // constrain
  if ((m_Centerx > 0) && (m_Centerx < 1)){
     if (a < m_Centerx){
       m_Centerx = 1;
       m_Centery = 0;
       m_dRadius = 1;
     } else {
       m_Centerx = 0;
       m_Centery = 1;
       m_dRadius = 1;
     }
  }
  
   double y = 0;
  if (x >= m_Centerx){
    y = m_Centery - sqrt(sq(m_dRadius) - sq(x-m_Centerx)); 
  } else {
    y = m_Centery + sqrt(sq(m_dRadius) - sq(x-m_Centerx)); 
  }
  return y;
}

//----------------------
boolean IsPerpendicular(
 double pt1x,  double pt1y,
 double pt2x,  double pt2y,
 double pt3x,  double pt3y)
{
  // Check the given point are perpendicular to x or y axis 
   double yDelta_a = pt2y - pt1y;
   double xDelta_a = pt2x - pt1x;
   double yDelta_b = pt3y - pt2y;
   double xDelta_b = pt3x - pt2x;
   double epsilon = 0.000001;

  // checking whether the line of the two pts are vertical
  if (abs(xDelta_a) <= epsilon && abs(yDelta_b) <= epsilon){
    return false;
  }
  if (abs(yDelta_a) <= epsilon){
    return true;
  }
  else if (abs(yDelta_b) <= epsilon){
    return true;
  }
  else if (abs(xDelta_a)<= epsilon){
    return true;
  }
  else if (abs(xDelta_b)<= epsilon){
    return true;
  }
  else return false;
}

//--------------------------
void calcCircleFrom3Points (
 double pt1x,  double pt1y,
 double pt2x,  double pt2y,
 double pt3x,  double pt3y)
{
   double yDelta_a = pt2y - pt1y;
   double xDelta_a = pt2x - pt1x;
   double yDelta_b = pt3y - pt2y;
   double xDelta_b = pt3x - pt2x;
   double epsilon = 0.000001;

  if (abs(xDelta_a) <= epsilon && abs(yDelta_b) <= epsilon){
    m_Centerx = 0.5*(pt2x + pt3x);
    m_Centery = 0.5*(pt1y + pt2y);
    m_dRadius = sqrt(sq(m_Centerx-pt1x) + sq(m_Centery-pt1y));
    return;
  }

  // IsPerpendicular() assure that xDelta(s) are not zero
   double aSlope = yDelta_a / xDelta_a; 
   const  double bSlope = yDelta_b / xDelta_b;
  if (abs(aSlope-bSlope) <= epsilon){	
    // checking whether the given points are colinear. 	
    return;
  }

  // calc center
  m_Centerx = (
     aSlope*bSlope*(pt1y - pt3y) + 
     bSlope*(pt1x + pt2x) - 
     aSlope*(pt2x+pt3x) )
     /(2* (bSlope-aSlope) );
  m_Centery = -1*(m_Centerx - (pt1x+pt2x)/2)/aSlope +  (pt1y+pt2y)/2;
  m_dRadius = sqrt(sq(m_Centerx-pt1x) + sq(m_Centery-pt1y));
}













/*


Bezier and Other Parametric Shaping Functions
Quadratic Bezier
Cubic Bezier
Cubic Bezier (Nearly) Through Two Given Points
Quadratic Bezier

This function defines a 2nd-order (quadratic) Bezier curve with a single user-specified spline control point (at the coordinate a,b) in the unit square. This function is guaranteed to have the same entering and exiting slopes as the Double-Linear Interpolator. Put another way, this curve allows the user to precisely specify its rate of change at its endpoints in the unit square.



*/


//------------------------------------------------
 double quadraticBezier (const double x,const  double a,  const  double b){
  // adapted from BEZMATH.PS (1993)
  // by Don Lancaster, SYNERGETICS Inc. 
  // http://www.tinaja.com/text/bezmath.html

   double epsilon = 0.00001;
  a = max(0, min(1, a)); 
  b = max(0, min(1, b)); 
  if (a == 0.5){
    a += epsilon;
  }
  
  // solve t from x (an inverse operation)
   double om2a = 1 - 2*a;
   double t = (sqrt(a*a + om2a*x) - a)/om2a;
   double y = (1-2*b)*(t*t) + (2*b)*t;
  return y;
}


/*
Cubic Bezier

The Cubic Bezier is a workhorse of computer graphics; most designers will recognize it from Adobe Illustrator and other popular vector-based drawing programs. Here, this extremely flexible curve is used in as a signal-shaping function, which requires the user to specify two locations in the unit square (at the coordinates a,b and c,d) as its control points. By setting the two control points (a,b) and (c,d) to various locations, the Bezier curve can be used to produce sigmoids, seat-shaped functions, ease-ins and ease-outs.

Bezier curves are customarily defined in such a way that y and x are both functions of another variable t. In order to obtain y as a function of x, it is necessary to first solve for t using successive approximation, making the code longer than one might first expect. The implementation here is adapted from the Bezmath Postscript library by Don Lancaster.

*/

//--------------------------------------------------------------
 double cubicBezier (const double x,const  double a,  const  double b,  double c,  double d){

   double y0a = 0.00; // initial y
   double x0a = 0.00; // initial x 
   double y1a = b;    // 1st influence y   
   double x1a = a;    // 1st influence x 
   double y2a = d;    // 2nd influence y
   double x2a = c;    // 2nd influence x
   double y3a = 1.00; // final y 
   double x3a = 1.00; // final x 

   double A =   x3a - 3*x2a + 3*x1a - x0a;
   const  double b = 3*x2a - 6*x1a + 3*x0a;
   double C = 3*x1a - 3*x0a;   
   double D =   x0a;

   double E =   y3a - 3*y2a + 3*y1a - y0a;    
   double F = 3*y2a - 6*y1a + 3*y0a;             
   double G = 3*y1a - 3*y0a;             
   double H =   y0a;

  // Solve for t given x (using Newton-Raphelson), then solve for y given t.
  // Assume for the first guess that t = x.
   double currentt = x;
  const  int nRefinementIterations = 5;
  for (int i=0; i < nRefinementIterations; i++){
     double currentx = xFromT (currentt, A,B,C,D); 
     double currentslope = slopeFromT (currentt, A,B,C);
    currentt -= (currentx - x)*(currentslope);
    currentt = constrain(currentt, 0,1);
  } 

   double y = yFromT (currentt,  E,F,G,H);
  return y;
}

// Helper functions:
 double slopeFromT ( double t,const  double a,  const  double b,  double C){
   double dtdx = 1.0/(3.0*A*t*t + 2.0*B*t + C); 
  return dtdx;
}

 double xFromT ( double t,const  double a,  const  double b,  double C,  double D){
   double x = A*(t*t*t) + B*(t*t) + C*t + D;
  return x;
}

 double yFromT ( double t,  double E,  double F,  double G,  double H){
   double y = E*(t*t*t) + F*(t*t) + G*t + H;
  return y;
}


/*
Cubic Bezier (Nearly) Through Two Given Points

This shaping function asks the user to specify two points in the unit square. The algorithm then attempts to generate a curve which passes through these points as closely as possible. The curves are not guaranteed to pass through the two points, but come quite close in most instances. The method is adapted from Don Lancaster.


*/
 

//--------------------------------------
 double cubicBezierNearlyThroughTwoPoints(
   double x,const  double a,  const  double b,  double c,  double d){

   double y = 0;
   double epsilon = 0.00001;
   double min_param_a = 0.0 + epsilon;
   double max_param_a = 1.0 - epsilon;
   double min_param_b = 0.0 + epsilon;
   double max_param_b = 1.0 - epsilon;
  a = max(min_param_a, min(max_param_a, a));
  b = max(min_param_b, min(max_param_b, b));

   double x0 = 0;  
   double y0 = 0;
   double x4 = a;  
   double y4 = b;
   double x5 = c;  
   double y5 = d;
   double x3 = 1;  
   double y3 = 1;
   double x1,y1,x2,y2; // to be solved.

  // arbitrary but reasonable 
  // t-values for interior control points
   double t1 = 0.3;
   double t2 = 0.7;

   const  double b0t1 = B0(t1);
   const  double b1t1 = B1(t1);
   const  double b2t1 = B2(t1);
   const  double b3t1 = B3(t1);
   const  double b0t2 = B0(t2);
   const  double b1t2 = B1(t2);
   const  double b2t2 = B2(t2);
   const  double b3t2 = B3(t2);

   double ccx = x4 - x0*B0t1 - x3*B3t1;
   double ccy = y4 - y0*B0t1 - y3*B3t1;
   double ffx = x5 - x0*B0t2 - x3*B3t2;
   double ffy = y5 - y0*B0t2 - y3*B3t2;

  x2 = (ccx - (ffx*B1t1)/B1t2) / (B2t1 - (B1t1*B2t2)/B1t2);
  y2 = (ccy - (ffy*B1t1)/B1t2) / (B2t1 - (B1t1*B2t2)/B1t2);
  x1 = (ccx - x2*B2t1) / B1t1;
  y1 = (ccy - y2*B2t1) / B1t1;

  x1 = max(0+epsilon, min(1-epsilon, x1));
  x2 = max(0+epsilon, min(1-epsilon, x2));

  // Note that this function also requires cubicBezier()!
  y = cubicBezier (x, x1,y1, x2,y2);
  y = max(0, min(1, y));
  return y;
}

// Helper functions. 
float B0 (float t){
  return (1-t)*(1-t)*(1-t);
}
float B1 (float t){
  return  3*t* (1-t)*(1-t);
}
float B2 (float t){
  return 3*t*t* (1-t);
}
float B3 (float t){
  return t*t*t;
}
float  findx (float t, float x0, float x1, float x2, float x3){
  return x0*B0(t) + x1*B1(t) + x2*B2(t) + x3*B3(t);
}
float  findy (float t, float y0, float y1, float y2, float y3){
  return y0*B0(t) + y1*B1(t) + y2*B2(t) + y3*B3(t);
}



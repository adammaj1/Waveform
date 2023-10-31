
double function easeInSine( const double x ) {
    return 1 - cos((x * M_PI) / 2);
}
//  cubic-bezier(0.12, 0, 0.39, 0)


double function easeOutSine( const double x ) {
    return sin((x * M_PI) / 2);
}

/// cubic-bezier(0.61, 1, 0.88, 1)
double function easeInOutSine( const double x ) {
    return -(cos(M_PI * x) - 1) / 2;
}

// cubic-bezier(0.37, 0, 0.63, 1)



double function easeInQuad( const double x ) {
    return x * x;
}

// cubic-bezier(0.11, 0, 0.5, 0)
double function easeOutQuad( const double x ) {
    return 1 - (1 - x) * (1 - x);
}

// cubic-bezier(0.5, 1, 0.89, 1)


double function easeInOutQuad( const double x ) {
    return x < 0.5 ? 2 * x * x : 1 - pow(-2 * x + 2, 2) / 2;
}

// cubic-bezier(0.45, 0, 0.55, 1)

double function easeInCubic( const double x ) {
    return x * x * x;
}

// cubic-bezier(0.32, 0, 0.67, 0)


double function easeOutCubic( const double x ) {
    return 1 - pow(1 - x, 3);
}

// cubic-bezier(0.33, 1, 0.68, 1)

double function easeInOutCubic( const double x ) {
    return x < 0.5 
    	? 4 * x * x * x 
    	: 1 - pow(-2 * x + 2, 3) / 2;
}


// cubic-bezier(0.65, 0, 0.35, 1)



double function easeInQuart( const double x ) {
    return x * x * x * x;
}




double function easeOutQuart( const double x ) {
    return 1 - pow(1 - x, 4);
}



double function easeInOutQuart( const double x ) {
    return x < 0.5 
    	? 8 * x * x * x * x 
    	: 1 - pow(-2 * x + 2, 4) / 2;
}




double function easeInQuint( const double x ) {
    return x * x * x * x * x;
}





double function easeOutQuint( const double x ) {
    return 1 - pow(1 - x, 5);
}





double function easeInOutQuint( const double x ) {
    return x < 0.5 
    	? 16 * x * x * x * x * x 
    	: 1 - pow(-2 * x + 2, 5) / 2;
}




double function easeInExpo( const double x ) {
    return x == 0 
    	? 0 
    	: pow(2, 10 * x - 10);
}




double function easeOutExpo( const double x ) {
    return x == 1 ? 1 : 1 - pow(2, -10 * x);
}




double function easeInOutExpo( const double x ) {
    return x == 0
    ? 0
    : x == 1
         ? 1
         : x < 0.5 
            ? pow(2, 20 * x - 10) / 2
            : (2 - pow(2, -20 * x + 10)) / 2;
}





double function easeInCirc( const double x ) {
    return 1 - sqrt(1 - pow(x, 2));
}




double function easeOutCirc( const double x ) {
    return sqrt(1 - pow(x - 1, 2));
}





double function easeInOutCirc( const double x ) {
    return x < 0.5
    ? (1 - sqrt(1 - pow(2 * x, 2))) / 2
    : (sqrt(1 - pow(-2 * x + 2, 2)) + 1) / 2;
}



double function easeInBack( const double x ) {
    const c1 = 1.70158;
    const c3 = c1 + 1;
    return c3 * x * x * x - c1 * x * x;
}



double function easeOutBack( const double x ) {
    const c1 = 1.70158;
    const c3 = c1 + 1;
    return 1 + c3 * pow(x - 1, 3) + c1 * pow(x - 1, 2);
}



double function easeInOutBack( const double x ) {
    const c1 = 1.70158;
    const c2 = c1 * 1.525;
    return x < 0.5
       ? (pow(2 * x, 2) * ((c2 + 1) * 2 * x - c2)) / 2
       : (pow(2 * x - 2, 2) * ((c2 + 1) * (x * 2 - 2) + c2) + 2) / 2;
}


double function easeInElastic( const double x ) {
    const c4 = (2 * M_PI) / 3;
    return x === 0
        ? 0
        : x === 1
        ? 1
        : -pow(2, 10 * x - 10) * sin((x * 10 - 10.75) * c4);
}




double function easeOutElastic( const double x ) {
    const c4 = (2 * M_PI) / 3;
    return x === 0
    ? 0
    : x === 1
    ? 1
    : pow(2, -10 * x) * sin((x * 10 - 0.75) * c4) + 1;
}




double function easeInOutElastic( const double x ) {
    const c5 = (2 * M_PI) / 4.5;
    return x === 0
    ? 0
    : x === 1
    ? 1
    : x < 0.5
    ? -(pow(2, 20 * x - 10) * sin((20 * x - 11.125) * c5)) / 2
    : (pow(2, -20 * x + 10) * sin((20 * x - 11.125) * c5)) / 2 + 1;
}




double function easeInBounce( const double x ) {
    return 1 - easeOutBounce(1 - x);
}




double function easeOutBounce( const double x ) {
    const n1 = 7.5625;
    const d1 = 2.75;
    if (x < 1 / d1) {
    return n1 * x * x;
    } else if (x < 2 / d1) {
        return n1 * (x -= 1.5 / d1) * x + 0.75;
    } else if (x < 2.5 / d1) {
        return n1 * (x -= 2.25 / d1) * x + 0.9375;
    } else {
        return n1 * (x -= 2.625 / d1) * x + 0.984375;
    }
}


double function easeInOutBounce( const double x ) {
    return x < 0.5
    ? (1 - easeOutBounce(1 - 2 * x)) / 2
    : (1 + easeOutBounce(2 * x - 1)) / 2;
}


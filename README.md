# Waveform
[Waveform](https://en.wikipedia.org/wiki/Waveform) or data types or function type or shaping functions



![](./png/continous.png "") 

![](./png/discrete.png "") 

![](./png/sawtooth.png "") 

![](./png/sin.png "") 

![](./png/square.png "") 

![](./png/sawtooth.png "") 


# source code
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
   

Similar repo
* [1D-RGB-color-gradient](https://github.com/adammaj1/1D-RGB-color-gradient)
* [Shaping functions in GLSL by Patricio Gonzalez Vivo & Jen Lowe](https://thebookofshaders.com/05/)
* [curves by kynd.inf ](https://www.flickr.com/photos/kynd/9546075099/in/photostream/)
* by Iñigo Quilez
  * [GraphToy  = a tool to visualize GLSL functions in WebGL](https://graphtoy.com/)
  * [useful little functions ](https://iquilezles.org/articles/functions/)
  * [smoothsteps/](https://iquilezles.org/articles/smoothsteps/)
  * [smoothstep integral](https://iquilezles.org/articles/smoothstepintegral/)
  
[Polynomial Shaping Functions](www.flong.com/archive/texts/code/shapers_poly): This page presents a collection of polynomial functions for shaping, tweening, and easing signals in the range [0...1]. Functions include:
* Blinn-Wyvill Approximation to the Raised Inverted Cosine
* Double-Cubic Seat
* Double-Cubic Seat with Linear Blend
* Double-Odd-Polynomial Seat
* Symmetric Double-Polynomial Sigmoids
* Quadratic Through a Given Point

[Exponential Shaping Functions](www.flong.com/archive/texts/code/shapers_exp)
* Exponential Ease-In and Ease-Out
* Double-Exponential Seat
* Double-Exponential Sigmoid
* The Logistic Sigmoid

[Circular & Elliptical Shaping Functions](www.flong.com/archive/texts/code/shapers_circ)
* Circular Interpolation: Ease-In and Ease-Out 
* Double-Circle Seat
* Double-Circle Sigmoid
* Double-Elliptic Seat
* Double-Elliptic Sigmoid
* Double-Linear with Circular Fillet
* Circular Arc Through a Given Points

[Bezier and Other Parametric Shaping Functions](www.flong.com/archive/texts/code/shapers_bez)
* Quadratic Bezier
* Cubic Bezier
* Cubic Bezier (Nearly) Through Two Given Points

# Git


```
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin git@github.com:adammaj1/Waveform.git
git push -u origin main
```

Subdirectory

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

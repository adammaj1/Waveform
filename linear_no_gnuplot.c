/*

gcc Linear_no_gnuplot.c -Wall -Wextra -lm -pedantic -std=c99
./a.out > Linear_no_2D.txt
gnuplot 
set terminal png
set output "Linear_no_2D.png"
set xlabel "x"
set ylabel "y"
set title "2D RGB profiles of linear map"
plot "Linear_no.txt" with linespoints 

*/


#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int h = 200;
  int w = h;   
  
  fprintf(stdout, "%s %s      %s \n","#","x","y"); // header 
  for (int i = 0; i < w; ++i) {
      double g = i / (double)w;   //  linear scale of shade of gray in [0.0, 1.0] range 
      fprintf(stdout, "%f %f\n",g, g); // data 
    }
  

  

  return 0;
}

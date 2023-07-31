#!/bin/bash 
 
# script file for BASH 
# which bash
# save this file as g.sh
# chmod +x g.sh
# ./g.sh
# checked in https://www.shellcheck.net/


gcc g.c -Wall -Wextra -lm
./a.out
	
# for all ppm files in this directory
for file in *.ppm ; do
  # b is name of file without extension
  b=$(basename "$file" .ppm)
  # convert  using ImageMagic
  convert "${b}".ppm "${b}".png
  echo "$file"
done


printf "delete all ppm files \n"
rm ./*.ppm


gnuplot ./plot.gp

printf "delete all data files \n"
rm ./*.dat

echo OK
# end


echo OK

printf "info about software \n"
bash --version
make -v
gcc --version
gnuplot --version
convert -version
convert -list resource


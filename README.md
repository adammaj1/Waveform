# Waveform
[Waveform](https://en.wikipedia.org/wiki/Waveform) or data types or function type



![](./png/continous.png "") 

![](./png/discrete.png "") 

![](./png/sawtooth.png "") 

![](./png/sin.png "") 

![](./png/square.png "") 

![](./png/sawtooth.png "") 


# source code
* [d.c](./src/d.c)
* results of the program  are in [the text files (./src/*.txt)](./src)


Compile and run the program


    make
   


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
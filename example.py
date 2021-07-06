#Marina Dunn
#Phys 105
#to run: $python example.py

#Start by importing libraries
import numpy as np
import matplotlib.pyplot as plt

#It's easy to print things!
print "Hello! Welcome to python!"

#Variables are untyped
var1 = 1
var2 = 2.0
var3 = var1 + var2
var4 = "It's as easy as"

#Printing them is easy, just use commas
print var4, var1, var2, var3

#Arrays are easily allocated
x = np.array([0,.1,.2,.3,.4]) #You can do it by hand
x = np.arange(0,1,.1) #Or you can define a low, high, and step

#Array math is symbolic, which is BALLER
y = x*x

#Arrays can be printed easily
print x
print y

#Plotting is easy
plt.plot(x,y)
plt.show() #This puts it to the screen

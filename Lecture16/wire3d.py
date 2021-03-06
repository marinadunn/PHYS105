#Marina Dunn
#PHYS 105
#to run: $python wire3d.py

#Does a 3D plot of a function Z(x,y), displayed as a wire frame

#Import libraries
import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import axes3d

#Here is a function we define.
#Note the whitespace!
def function(X, Y, phi):
    #R = 1 - np.sqrt(X*X)
    R = 1 - np.sqrt(X*X + Y*Y) #Try this one yourself!
    return np.cos(2 * np.pi * X + phi) * R
#Create s figure, and make it 3D
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

#Create a "meshgrid" of x and y values
#Z holds the function evaluated at those x,y points
#Both x and y will go from -1 to 1
X, Y = np.meshgrid(np.linspace(-1,1,50), np.linspace
                   (-1,1,50))
Z = function(X, Y, 0.0)

#The loop goes from 0 to 180 degrees in 100 steps
#The loop variable is called "phi"
wframe = None #This holds a wireframe, you'll see! :)
for phi in np.linspace(0, 180./np.pi, 100):

    #This is the old wireframe
    oldwframe = wframe

    #Make a new wire frame of the function
    Z = function(X, Y, phi)
    wframe = ax.plot_wireframe(X, Y, Z, rstride=2, cstride=2)

    #Remove old line wireframe before drawing
    if oldwframe is not None:
        ax.collections.remove(oldwframe)
    #Pause to draw
    plt.pause(.05)

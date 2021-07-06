#Marina Dunn
#PHYS 105
#to run: python animation.py

#Import libraries
import numpy as np
import  matplotlib.pyplot as plt

#Create a 2D array that is 5x6
z = np.arange(5)[:, np.newaxis]*np.arange(6)

print "z shape = ",np.shape(z)
print "z array:\n",z

#Do a loop with 30 iterations
for i in range(30):
    #The first step, create an image of the array
    if i == 0:
        p = plt.imshow(z) #Draw the gradient map
        plt.clim(0,30) #This controls the color limits
        plt.title("Simple gradient animation")
    #increase the values in the array and redraw
    else:
        z = z + 0.5
        p.set_data(z)

    
    print("step", i)
    #pause() will caule a delay AND push to the screen
    plt.pause(0.1)

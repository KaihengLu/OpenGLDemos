---
title: this is a openGL demo
tag: first version
---
### How to creat a window by openGL
There are several steps you can follow to create a window by OpenGL.
* download the free GLUT and complie it.
* use lib and head file of glut to configure IDE
* add a pre event command to copy dll into target debug folder.
* start write the simple code.
---
How to write the code to show a window by free glut?
* initialzie the glut by using glutinit().
* initialzie the display mode of glut by using glutInitDisplayMode. In this method you can set the display model. GLUT_DOUBLE and GLUT_RGBA were recommanded.
* initialize and create window by three methds. 1. glutInitWindowSize 2.glutInitWindowPosition 3.glutCreateWindow.
* set render callback function to draw image from buffer.
* don't forget notify the message loop by using glutMainLoop
---
How to define the render callback function?
<br>
The render callback function should be defined based on the certain format.
* there is no return value for render callback function
* there is no parameters for render callback function

In render callback function, you can use glClear to clear the given buffer and glutSwapBuffers to swap the buffers. 
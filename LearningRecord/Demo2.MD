## <center> Let change to GLEW and GLFW.
---
### what;s GLEW
The OpenGL Extension Wrangler Library (GLEW) is a cross-platform open-source C/C++ extension loading library. GLEW provides efficient run-time mechanisms for determining which OpenGL extensions are supported on the target platform. OpenGL core and extension functionality is exposed in a single header file. GLEW has been tested on a variety of operating systems, including Windows, Linux, Mac OS X, FreeBSD, Irix, and Solaris. 
### what's GLFW
GLFW is an Open Source, multi-platform library for OpenGL, OpenGL ES and Vulkan development on the desktop. It provides a simple API for creating windows, contexts and surfaces, receiving input and events.
GLFW is written in C and has native support for Windows, macOS and many Unix-like systems using the X Window System, such as Linux and FreeBSD.

Use GLEW and GLFW can increase your develop efficiency and increase stability of your code. 

#
How to use GLEW and GLFW?
* first you should download GLEW and GLFW, you can download source code [GLEW](https://github.com/nigels-com/glew.git) and [GLFW](https://github.com/glfw/glfw.git). 
* compile the downloaded source code based on your platform.
* use the generated library file and dynamic linkage library to configure your project.
* Start writing code.
---
How to write code with glew and glfw and Opengl?

In real situation, you will write your code with glew, glfw and Opengl together, but not only a single library. 
* GLEW will be used to 
* GLFW could be used to create window, get envent from end user.
Here I want to give a small demo about how to create window with GLFW and how to fetch keybord or mouse event by GLFW. 
<br>
a.  initailize glfw by using glfwInit().
<br>
b. set window hint, there are many window hint you can use to initalize your windiw.<br>
c. Create window by using glfwCreateWindow method, if the window created successfully, you will get a pointer represent the glfw window.<br>
d. Make the created window as current context.<br>
e. Add game loop to mentain the message loop. in the loop you can get event sent by end user. you also can update your buffer and draw your image on window. So, this is the most important thing in the program. <br>
e. If all things are completed, you should invoke glfwTerminate to terminate GLFW API.<br>
f. you also can add a callback method to get the status of key. 

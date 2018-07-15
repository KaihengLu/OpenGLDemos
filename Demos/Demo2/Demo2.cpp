// Demo2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

//#include <GLEW\glew.h>
#include <GLFW\glfw3.h>

#include <iostream>


// If you want to use opengl method, please don't forget involve lib file into this project

int main()
{
	// first we should initalize the glfw
	
	if (glfwInit() == GLFW_FALSE)  // initailzie the GLFW API
	{
		std::cout << "initialize GLFW failed" << std::endl;
		system("pause");
		return -1;
	}
	// then wwe should set the window hint. this hint will set what kind of glfw you want to use.
	// what kind of profile you want and do you want to resize your opengl window?
	// There are a lof of hints you can chose, here I only give 4 hints
	// Notice: you should set Major version and minor version of glfw you will use.
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	// then we should create window, the window will use hints you set before.
	GLFWwindow* glfwWindow = glfwCreateWindow(800, 600, "this is the first window", nullptr, nullptr);
	// check whether the window created successful
	if (glfwWindow == nullptr)
	{
		std::cout << "Create GLFW window failed" << std::endl;
		system("pause");
		return -1;
	}

	// we set the created window as the current drawing context
	glfwMakeContextCurrent(glfwWindow);

	////initailize GLEW. if the initialization failed, return true. 
	//glewExperimental = GL_TRUE;
	//if (glewInit())
	//{
	//	std::cout << "Failed to init GLEW!\n";
	//	return -1;
	//}

	// set the clear color, if you use glclear method, the background color will be set as color this method given
	glClearColor(0.2f, 0.3f, 0.3f, 1.0f);

	// this method is one of the most important method. 
	// it's a game loop method, in this method you can get the event comes from screen, keybord and mouse.
	while (!glfwWindowShouldClose(glfwWindow))
	{
		glfwSwapBuffers(glfwWindow);
		glfwPollEvents();

		if (glfwGetKey(glfwWindow, GLFW_KEY_ESCAPE) == GLFW_PRESS)  // get the status of key, you can use any key you want to cose the window
			glfwSetWindowShouldClose(glfwWindow, GLFW_TRUE);  // if you press ESCAPE key , the window will be closed

		glClear(GL_COLOR_BUFFER_BIT); // use this method to clear all color set in current context. 
	}

	// after you close the window you should terminate the glfw API
	glfwTerminate();
	return 0;
}
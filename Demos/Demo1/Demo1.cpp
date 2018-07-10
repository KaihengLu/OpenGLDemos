// Demo1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <GL\freeglut.h>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

// first you should define a render callback function
/*
* there is no reurn value for the call back function
* there is no parameters for the callback function
*/
void RenderScenceCB()
{
	//clear color buffer
	glClear(GL_COLOR_BUFFER_BIT);
	// swap the color buffer (double buffer to draw the picture
	glutSwapBuffers();
}

wstring widen(const string& str)
{
	wostringstream wstm;
	const ctype<wchar_t>& ctfacet =
		use_facet< ctype<wchar_t> >(wstm.getloc());
	for (size_t i = 0; i<str.size(); ++i)
		wstm << ctfacet.widen(str[i]);
	return wstm.str();
}


string narrow(const wstring& str)
{
	ostringstream stm;
	const ctype<char>& ctfacet =
		use_facet< ctype<char> >(stm.getloc());
	for (size_t i = 0; i<str.size(); ++i)
		stm << ctfacet.narrow(str[i], 0);
	return stm.str();
}

/*
* this is the main function . all method will be run by this method
*/
int _tmain(int argc, char* argv[])
{
	// initailzie glut
	glutInit(&argc, argv);
	//set display mode
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	//set windows
	// first we need set the windows size, position and tittle
	glutInitWindowSize(480, 320); // initialize the window's width and length
	glutInitWindowPosition(100, 100); // initailzie the windows position
	glutCreateWindow(" this is a test window"); // give a tittle of windows
	
	// then we need give a render callback, to display the buffer 
	glutDisplayFunc(&RenderScenceCB);
	//clear the color. 
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

	// notify glut start inner message loop
	glutMainLoop();
	return 0;
}


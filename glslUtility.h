
#ifndef GLSLUTILITY_H_
#define GLSLUTILITY_H_

#ifdef __APPLE__
#include <GLFW/glfw3.h>
#else
#include <GL/glew.h>
#endif

namespace glslUtility
{

	GLuint createProgram(const char *vertexShaderPath, const char *fragmentShaderPath, const char *attributeLocations[], GLuint numberOfLocations);
	GLuint createProgram(const char *vertexShaderPath, const char *geometryShaderPath, const char *fragmentShaderPath, const char *attributeLocations[], GLuint numberOfLocations);

}

#endif

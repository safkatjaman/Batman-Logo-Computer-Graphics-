
/*
* GL02Primitive.cpp: Vertex, Primitive and Color
* Draw Simple 2D colored Shapes: quad, triangle and polygon.
*/
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Initialize OpenGL Graphics */
void initGL() {
    // Set "clearing" or background color
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Black and opaque
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
    glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

glPointSize(23.0);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices's form a quad

	// Line No. 1 From Left Side
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.9f, 0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.9f, 0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.9f, 0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.9f, 0.0f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.9f, -0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.9f, -0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.9f, -0.3f);    // x, y

	// Line No. 2 From Left Side
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.83f, 0.4f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.83f, 0.3f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.83f, 0.2f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.83f, 0.1f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.83f, 0.0f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.83f, -0.1f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.83f, -0.2f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.83f, -0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.83f, -0.4f);    // x, y


	// Line No. 3 From Left Side
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.76f, 0.5f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.76f, 0.4f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.76f, 0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.76f, 0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.76f, 0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.76f, 0.0f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.76f, -0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.76f, -0.2f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.76f, -0.3f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.76f, -0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.76f, -0.5f);    // x, y


	// Line No. 4 From Left Side
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.70f, 0.6f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.70f, 0.5f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.70f, 0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.70f, 0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.70f, 0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.70f, 0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.70f, 0.0f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.70f, -0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.70f, -0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.70f, -0.3f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.70f, -0.4f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.70f, -0.5f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.70f, -0.6f);    // x, y

	// Line No. 5 From Left Side
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.64f, 0.7f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.64f, 0.6f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.64f, 0.5f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.64f, 0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.64f, 0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.64f, 0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.64f, 0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.64f, 0.0f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.64f, -0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.64f, -0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.64f, -0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.64f, -0.4f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.64f, -0.5f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.64f, -0.6f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.64f, -0.7f);    // x, y

	// Line No. 6 From Left Side
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.58f, 0.8f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.58f, 0.7f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.58f, 0.6f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.58f, 0.5f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.58f, 0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.58f, 0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.58f, 0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.58f, 0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.58f, 0.0f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.58f, -0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.58f, -0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.58f, -0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.58f, -0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.58f, -0.5f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.58f, -0.6f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.58f, -0.7f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.58f, -0.8f);    // x, y

	// Line No. 7 From Left Side
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.52f, 0.9f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.52f, 0.8f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.52f, 0.7f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.52f, 0.6f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.52f, 0.5f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.52f, 0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.52f, 0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.52f, 0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.52f, 0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.52f, 0.0f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.52f, -0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.52f, -0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.52f, -0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.52f, -0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.52f, -0.5f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.52f, -0.6f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.52f, -0.7f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.52f, -0.8f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.52f, -0.9f);    // x, y

    // Line No. 8 From Left Side
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.46f, 0.9f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.46f, 0.8f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.46f, 0.7f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.46f, 0.6f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.46f, 0.5f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.46f, 0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.46f, 0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.46f, 0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.46f, 0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.46f, 0.0f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.46f, -0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.46f, -0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.46f, -0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.46f, -0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.46f, -0.5f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.46f, -0.6f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.46f, -0.7f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.46f, -0.8f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.46f, -0.9f);    // x, y

	// Line No. 9 From Left Side
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.40f, 0.9f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.40f, 0.8f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.40f, 0.7f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.40f, 0.6f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.40f, 0.5f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.40f, 0.4f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.40f, 0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.40f, 0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.40f, 0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.40f, 0.0f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.40f, -0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.40f, -0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.40f, -0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.40f, -0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.40f, -0.5f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.40f, -0.6f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.40f, -0.7f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.40f, -0.8f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.40f, -0.9f);    // x, y

	// Line No. 10 From Left Side
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.35f, 0.9f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.35f, 0.8f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.35f, 0.7f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.35f, 0.6f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.35f, 0.5f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.35f, 0.4f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.35f, 0.3f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.35f, 0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.35f, 0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.35f, 0.0f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.35f, -0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.35f, -0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.35f, -0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.35f, -0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.35f, -0.5f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.35f, -0.6f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.35f, -0.7f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.35f, -0.8f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.35f, -0.9f);    // x, y

	// Line No. 11 From Left Side
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.30f, 0.9f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.30f, 0.8f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.30f, 0.7f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.30f, 0.6f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.30f, 0.5f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.30f, 0.4f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.30f, 0.3f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.30f, 0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.30f, 0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.30f, 0.0f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.30f, -0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.30f, -0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.30f, -0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.30f, -0.4f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.30f, -0.5f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.30f, -0.6f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.30f, -0.7f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.30f, -0.8f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.30f, -0.9f);    // x, y

	// Line No. 12 From Left Side
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.25f, 0.9f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.25f, 0.8f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.25f, 0.7f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.25f, 0.6f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.25f, 0.5f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.25f, 0.4f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.25f, 0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.25f, 0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.25f, 0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.25f, 0.0f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.25f, -0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.25f, -0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.25f, -0.3f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.25f, -0.4f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.25f, -0.5f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.25f, -0.6f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.25f, -0.7f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.25f, -0.8f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.25f, -0.9f);    // x, y

	// Line No. 13 From Left Side
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.20f, 0.9f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.20f, 0.8f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.20f, 0.7f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.20f, 0.6f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.20f, 0.5f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.20f, 0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.20f, 0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.20f, 0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.20f, 0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.20f, 0.0f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.20f, -0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.20f, -0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.20f, -0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.20f, -0.4f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.20f, -0.5f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.20f, -0.6f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.20f, -0.7f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.20f, -0.8f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.20f, -0.9f);    // x, y

	// Line No. 14 From Left Side
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.15f, 0.9f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.15f, 0.8f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.15f, 0.7f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.15f, 0.6f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.15f, 0.5f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.15f, 0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.15f, 0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.15f, 0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.15f, 0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.15f, 0.0f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.15f, -0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.15f, -0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.15f, -0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.15f, -0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.15f, -0.5f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.15f, -0.6f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.15f, -0.7f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.15f, -0.8f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.15f, -0.9f);    // x, y

	// Line No. 15 From Left Side
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.10f, 0.9f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.10f, 0.8f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.10f, 0.7f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.10f, 0.6f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.10f, 0.5f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.10f, 0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.10f, 0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.10f, 0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.10f, 0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.10f, 0.0f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.10f, -0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.10f, -0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.10f, -0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.10f, -0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.10f, -0.5f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.10f, -0.6f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.10f, -0.7f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.10f, -0.8f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.10f, -0.9f);    // x, y

	// Line No. 16 From Left Side
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.05f, 0.9f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.05f, 0.8f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.05f, 0.7f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.05f, 0.6f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.05f, 0.5f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.05f, 0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.05f, 0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.05f, 0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.05f, 0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.05f, 0.0f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.05f, -0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.05f, -0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.05f, -0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.05f, -0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.05f, -0.5f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.05f, -0.6f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.05f, -0.7f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(-0.05f, -0.8f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.05f, -0.9f);    // x, y

	// Line No. 17 From Left Side
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.0f, 0.9f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.0f, 0.8f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.0f, 0.7f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.0f, 0.6f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.0f, 0.5f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.0f, 0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.0f, 0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.0f, 0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.0f, 0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.0f, -0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.0f, -0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.0f, -0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.0f, -0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.0f, -0.5f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.0f, -0.6f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.0f, -0.7f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.0f, -0.8f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.0f, -0.9f);    // x, y

    // Line No. 18 From Left Side
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.05f, 0.9f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.05f, 0.8f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.05f, 0.7f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.05f, 0.6f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.05f, 0.5f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.05f, 0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.05f, 0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.05f, 0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.05f, 0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.05f, 0.0f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.05f, -0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.05f, -0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.05f, -0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.05f, -0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.05f, -0.5f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.05f, -0.6f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.05f, -0.7f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.05f, -0.8f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.05f, -0.9f);    // x, y

	// Line No. 19 From Left Side
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.10f, 0.9f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.10f, 0.8f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.10f, 0.7f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.10f, 0.6f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.10f, 0.5f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.10f, 0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.10f, 0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.10f, 0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.10f, 0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.10f, 0.0f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.10f, -0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.10f, -0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.10f, -0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.10f, -0.4f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.10f, -0.5f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.10f, -0.6f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.10f, -0.7f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.10f, -0.8f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.10f, -0.9f);    // x, y

	// Line No. 20 From Left Side
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.15f, 0.9f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.15f, 0.8f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.15f, 0.7f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.15f, 0.6f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.15f, 0.5f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.15f, 0.4f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.15f, 0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.15f, 0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.15f, 0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.15f, 0.0f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.15f, -0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.15f, -0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.15f, -0.3f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.15f, -0.4f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.15f, -0.5f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.15f, -0.6f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.15f, -0.7f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.15f, -0.8f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.15f, -0.9f);    // x, y

	// Line No. 21 From Left Side
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.20f, 0.9f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.20f, 0.8f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.20f, 0.7f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.20f, 0.6f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.20f, 0.5f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.20f, 0.4f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.20f, 0.3f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.20f, 0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.20f, 0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.20f, 0.0f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.20f, -0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.20f, -0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.20f, -0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.20f, -0.4f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.20f, -0.5f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.20f, -0.6f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.20f, -0.7f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.20f, -0.8f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.20f, -0.9f);    // x, y

	// Line No. 22 From Left Side
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.25f, 0.9f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.25f, 0.8f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.25f, 0.7f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.25f, 0.6f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.25f, 0.5f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.25f, 0.4f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.25f, 0.3f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.25f, 0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.25f, 0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.25f, 0.0f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.25f, -0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.25f, -0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.25f, -0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.25f, -0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.25f, -0.5f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.25f, -0.6f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.25f, -0.7f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.25f, -0.8f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.25f, -0.9f);    // x, y

	// Line No. 23 From Left Side
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.30f, 0.9f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.30f, 0.8f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.30f, 0.7f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.30f, 0.6f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.30f, 0.5f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.30f, 0.4f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.30f, 0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.30f, 0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.30f, 0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.30f, 0.0f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.30f, -0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.30f, -0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.30f, -0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.30f, -0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.30f, -0.5f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.30f, -0.6f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.30f, -0.7f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.30f, -0.8f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.30f, -0.9f);    // x, y

	// Line No. 24 From Left Side
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.35f, 0.9f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.35f, 0.8f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.35f, 0.7f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.35f, 0.6f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.35f, 0.5f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.35f, 0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.35f, 0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.35f, 0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.35f, 0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.35f, 0.0f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.35f, -0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.35f, -0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.35f, -0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.35f, -0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.35f, -0.5f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.35f, -0.6f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.35f, -0.7f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.35f, -0.8f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.35f, -0.9f);    // x, y

	// Line No. 25 From Left Side
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.40f, 0.9f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.40f, 0.8f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.40f, 0.7f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.40f, 0.6f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.40f, 0.5f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.40f, 0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.40f, 0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.40f, 0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.40f, 0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.40f, 0.0f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.40f, -0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.40f, -0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.40f, -0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.40f, -0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.40f, -0.5f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.40f, -0.6f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.40f, -0.7f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.40f, -0.8f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.40f, -0.9f);    // x, y

	// Line No. 26 From Left Side
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.465f, 0.8f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.465f, 0.7f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.465f, 0.6f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.465f, 0.5f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.465f, 0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.465f, 0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.465f, 0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.465f, 0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.465f, 0.0f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.465f, -0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.465f, -0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.465f, -0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.465f, -0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.465f, -0.5f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.465f, -0.6f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.465f, -0.7f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.465f, -0.8f);    // x, y

	// Line No. 27 From Left Side
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.525f, 0.7f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.525f, 0.6f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.525f, 0.5f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.525f, 0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.525f, 0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.525f, 0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.525f, 0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.525f, 0.0f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.525f, -0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.525f, -0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.525f, -0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.525f, -0.4f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.525f, -0.5f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.525f, -0.6f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.525f, -0.7f);    // x, y


	// Line No. 28 From Left Side
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.590f, 0.6f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.590f, 0.5f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.590f, 0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.590f, 0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.590f, 0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.590f, 0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.590f, 0.0f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.590f, -0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.590f, -0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.590f, -0.3f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.590f, -0.4f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.590f, -0.5f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.590f, -0.6f);    // x, y

	// Line No. 29 From Left Side
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.655f, 0.5f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.655f, 0.4f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.655f, 0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.655f, 0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.655f, 0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.655f, 0.0f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.655f, -0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.655f, -0.2f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.655f, -0.3f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.655f, -0.4f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.655f, -0.5f);    // x, y


	// Line No. 30 From Left Side
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.715f, 0.4f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.715f, 0.3f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.715f, 0.2f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.715f, 0.1f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.715f, 0.0f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.715f, -0.1f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.715f, -0.2f);    // x, y

	glColor3f(1.0f, 1.0f, 0.0f); // Red
	glVertex2f(0.715f, -0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.715f, -0.4f);    // x, y


	// Line No. 31 From Left Side
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.780f, 0.3f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.780f, 0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.780f, 0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.780f, 0.0f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.780f, -0.1f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.780f, -0.2f);    // x, y

	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.780f, -0.3f);    // x, y

	glEnd();

    glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
    glutInit(&argc, argv);          // Initialize GLUT
    glutInitWindowSize(720, 480);   // Set the window's initial width & height
    glutCreateWindow("Batman Logo");  // Create window with the given title
    glutDisplayFunc(display);       // Register callback handler for window re-paint event
    initGL();                       // Our own OpenGL initialization
    glutMainLoop();                 // Enter the event-processing loop
    return 0;
}

#include "GLModel.h"


GLModel::GLModel()
{
    //ctor
    rotateX = 0.0;
    rotateY = 0.0;
    rotateZ = 0.0;

    xPos = 0.0;
    yPos = 0.0;
    zPos = -8.0;
}

GLModel::~GLModel()
{
    //dtor
}
void GLModel::drawModel()
{
    glColor3f(1.0,1.0,1.0); // Set model color
    glTranslatef(xPos,yPos,zPos); // Set model location

    glRotatef(rotateX,1,0,0); // Rotation controls
    glRotatef(rotateY,0,1,0); //
    glRotatef(rotateZ,0,0,1);

    glutSolidTeapot(1.5); // load object & render object
}

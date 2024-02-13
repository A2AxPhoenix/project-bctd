#ifndef GLMODEL_H
#define GLMODEL_H

#include <windows.h>
#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>


class GLModel
{
    public:
        GLModel();
        virtual ~GLModel();

        GLfloat rotateX; // Init rotation
        GLfloat rotateY;
        GLfloat rotateZ;

        GLfloat xPos; // Init translation
        GLfloat yPos;
        GLfloat zPos;

        void drawModel(); // Model drawing


    protected:

    private:
};

#endif // GLMODEL_H

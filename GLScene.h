#ifndef GLSCENE_H
#define GLSCENE_H

#include <Windows.h>
#include <GL/glut.h>
#include <iostream>

using namespace std;


class GLScene
{
    public:
        GLScene();
        virtual ~GLScene();
        GLint initGL();
        GLint drawScene();
        GLvoid resizeScene(GLsizei, GLsizei);
        int windMsg(HWND, UINT, WPARAM, LPARAM);

    protected:

    private:
};

#endif // GLSCENE_H

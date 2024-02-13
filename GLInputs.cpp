#include "GLInputs.h"

GLInputs::GLInputs()
{
    //ctor
    prev_MouseX = 0;
    prev_MouseY = 0;

    mouse_Translate = 0;
    mouse_Rotate = 0;
}

GLInputs::~GLInputs()
{
    //dtor
}

void GLInputs::keyPress(GLModel* Model) {
    switch(wParam) {
    case VK_LEFT:
        Model->rotateY -= 1.0f;
        break;
    case VK_RIGHT:
        Model->rotateY += 1.0f;
        break;
    case VK_DOWN:
        Model->rotateX += 1.0f;
        break;
    case VK_UP:
        Model->rotateX -= 1.0f;
        break;
    case VK_ADD:
        Model->zPos += 1.0f;
        break;
    case VK_SUBTRACT:
        Model->zPos-= 1.0f;
        break;
    }
}

void GLInputs::keyUp() {
    switch (wParam) {
        default:
        break;
    }
}


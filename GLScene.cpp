#include "GLScene.h"
#include "GLLight.h"
#include "GLTexture.h"
#include <GLModel.h>
#include <GLInputs.h>

GLTexture *teapotTex = new GLTexture();
GLModel *teapotModel = new GLModel();
GLInputs *KbMs = new GLInputs();

GLScene::GLScene()
{
    //ctor
}

GLScene::~GLScene()
{
    //dtor
}


GLint GLScene::initGL()
{
    glShadeModel(GL_SMOOTH); // for smooth render
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // clear background to black
    glClearDepth(1.0f); // depth test for layers
    glEnable(GL_DEPTH_TEST); // activate depth test
    glDepthFunc(GL_LEQUAL); // depth function

    GLLight Light(GL_LIGHT0);
    Light.setLight(GL_LIGHT0);

    glEnable(GL_TEXTURE_2D);                        //enable textures
    teapotTex->loadTexture("images/teapot.jpg");    //load texture

    return true;
}

GLint GLScene::drawScene()  // runs on loop 30x a second
                            // DELICATE
{

    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT); //clear bits in each iteration
    glLoadIdentity();
    glTranslatef(0.0,0.0,-8.0); // translate object to xyz
    glColor3f(1.0,1.0,1.0); // color object red

    teapotTex->bindTexture();       //activate texture handler
    glPushMatrix(); // group object
        teapotModel->drawModel();
    glPopMatrix(); // exit group

    return true;
}

GLvoid GLScene::resizeScene(GLsizei width, GLsizei height)
{
    GLfloat aspectRatio = (GLfloat)width/(GLfloat)height; // keep aspect ratio
    glViewport(0,0,width,height); // adjusting the viewport
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45, aspectRatio, 0.1, 100.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

int GLScene::windMsg(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch(uMsg) {
    case WM_KEYDOWN:
        KbMs->wParam = wParam;
        KbMs->keyPress(teapotModel);
        break;
    }
}

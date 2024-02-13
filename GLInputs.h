#ifndef GLINPUTS_H_H
#define GLINPUTS_H_H

#include <GLModel.h>


class GLInputs
{
    public:
        GLInputs();
        virtual ~GLInputs();

        void keyPress(GLModel *); // when key is pressed
        void keyUp(); // when key is released

        void mouseEventDown(GLModel*, double, double); // When mouse button is down
        void mouseUp(); // When mouse button is released
        void mouseWheel(GLModel*, double); // When mouse wheel is rolled
        void mouseMove(GLModel*, double, double); // When mouse moved

        double prev_MouseX; // current mouse location X before action
        double prev_MouseY; // current mouse location Y before action

        bool mouse_Translate; // If mouse moved
        bool mouse_Rotate; // if mouse moved for rotation

        WPARAM wParam; // Catching input interrupts

    protected:

    private:
};

#endif // GLINPUTS_H_H

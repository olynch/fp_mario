#ifndef _CONTROLS_H
#define _CONTROLS_H
#include <GLFW/glfw3.h> //for keypress keycodes (e.g. GLFW_KEY_W)
#include "helpers.h"
#include "objects.h"
#include "gamelogic.h"
#include "mechanics.h"

#define k_xVel 0.05
#define k_yVel 4.1
#define k_xVelMax  1.0
#define k_yVelMin -4.5
#define k_nJumpFrames 40

extern struct state s;

void cl_init();
void cl_update();
void cl_keypress(int, int, int, int);
void cl_cursormove(double, double);
bool cl_move1(int, char, bool);
bool cl_go1(char, bool);
bool cl_go(char, int);
bool cl_forward();
bool cl_backward();
bool cl_upward();
void cl_gravity();
void cl_jumpStart();
void cl_jumpEnd();

#endif

#include <GLFW/glfw3.h>
#include "helpers.h"
#include "objects.h"
#include "rendering.h"
#include "gamelogic.h"
#include "controls.h"
#include "mechanics.h"
#include "graphics.h"
#include "windowing.h"
#include "parsing.h"
struct state s;

int main(void){
    ob_init();
    gl_init();
    gr_init();
    wn_init();

    glfwSetTime(0.0);

    while(!wn_shouldClose()) {
        if(s.gameOver){
            wn_deinit();
            gr_deinit();
            gl_deinit();
            ob_deinit();

            ob_init();
            gl_init();
            gr_init();
            wn_init();
        }
        if(!s.paused){
            gl_update();
            gr_update();
        }
        wn_perspWindow();
        gr_draw(perspWindow, 2);
        wn_dimWindow();
        gr_draw(dimWindow, 0);
        wn_update();
    }
    wn_deinit();
    gr_deinit();
    gl_deinit();
    ob_deinit();
    exit(EXIT_SUCCESS);

    return 0;
}

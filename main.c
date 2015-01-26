#include <stdio.h>
#include <GLFW/glfw3.h>
#include "helpers.h"
#include "objects.h"
#include "rendering.h"
#include "gamelogic.h"
#include "controls.h"
#include "mechanics.h"
#include "graphics.h"
#include "windowing.h"
struct state s;

int main(void){
    ob_init();
    mh_init();
    wn_init();
    gr_init();
    while(!wn_shouldClose()) {
        //sleep(1);
        if(!s.paused){
            mh_update();
            gr_update();
        }
        wn_perspWindow();
        gr_draw(perspWindow, 2);
        wn_dimWindow();
        gr_draw(dimWindow, 0);
        wn_update();
    }
    gr_deinit();
    wn_deinit();
    mh_deinit();
    ob_deinit();
    exit(EXIT_SUCCESS);

    return 0;
}

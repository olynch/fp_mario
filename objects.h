#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#ifndef _OBJECT_H
#define _OBJECT_H

#define k_nPixels 500 //resolution of screen
#define k_FOV 60 //Field of vision (degrees)
#define k_nMaxLinesPerObj 30 //maximum number of lines per object
#define k_drawD 500
#define k_nMaxObj 50 //maximum number of objects in a world

//labeling all the types of objects (enum)
enum objType {
    nothing=1,
    objGround
};

typedef struct {
    int x1;
    int x2;
    int y1;
    int y2;
    unsigned char r;
    unsigned char g;
    unsigned char b;
} line;

//objects possible in the scene
line *ob_ground;
line *ob_nothing;

//object from type
line* objFtype(enum objType);

void ob_init();

void ob_printLine(line*);

bool ob_isTerminating(line*);

int ob_levelTest[k_nMaxObj*3];

#endif

#ifndef DOCUMENTATION_MODULE_H
#define DOCUMENTATION_MODULE_H

#include <stdlib.h>
#include <stdio.h>

typedef struct{
    int height;
    int weight;
    int Field[25][80];
}Field;

typedef struct{
    int x;
    int y;
    int xspeed;
    int yspeed;
}Ball;

typedef struct{
    int y;
    int height;
}LRocket;


typedef struct{
    int y;
    int height;
}RRocket;

void Pong();
void PrintField(const Field *f);
void InputField(Field *f, Ball *b, LRocket *l, RRocket *r);
#endif  
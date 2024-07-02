#include "struct.h"

void Pong(){
    Field field;
    Ball ball; 
    LRocket lrocket;
    RRocket rrocket;

    lrocket.y = 10;
    lrocket.height = 3;
    rrocket.y = 10;
    rrocket.height = 3;

    field.height = 25;
    field.weight = 80;

    ball.x = 10;
    ball.y = 15;
    ball.xspeed = 1;
    ball.yspeed = 1;

    char ch;
    scanf("%c", &ch);
    while(ch != 'q'){
        InputField(&field, &ball, &lrocket, &rrocket);
        PrintField(&field);
        scanf("%c", &ch);
        ball.x += ball.xspeed;
        ball.y += ball.yspeed;
    
    }
    return;
}


void PrintField(const Field *f){
    printf("\e[1;1H\e[2J");
    for(int i = 0; i < f->height; ++i){
        for(int j = 0; j < f->weight; ++j){
            if(f->Field[i][j] == 1)
                printf("*");
            else 
                printf(" ");
        }
        printf("\n");
    }
}

void InputField(Field *f, Ball *b, LRocket *l, RRocket *r){
    for(int i = 0; i < f->height; ++i){ //i - y
        for(int j = 0; j < f->weight; ++j){ // j - x
            if(i == b->y && j == b->x){
                f->Field[i][j] == 1;
            if(j == 1 && i == l->y){
                f->Field[i][j] == 1;
            }
            if(j == 79 && i == r->y){
                f->Field[i][j] == 1;
            }
            }
        }

    }
}
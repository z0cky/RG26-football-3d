#ifndef BALL_H
#define BALL_H

#include "main.h"

// Startna pozicija lopte
#define BALL_X 35    
#define BALL_Y 0
#define BALL_Z 0

//Precnik lopte
#define B_RADIUS 1
#define B_PRECISION 26
#define SHININESS 100
// Brzina kretanja lopte
#define MOVE 3

// Opis skoka i rotacije
#define ANGLE_START 0
#define ANGLE_EXT 180
#define P_ANGLE 3.9
#define JUMP_LEVEL 3
#define MAT_DIM 16
#define ROT_Z 0

enum {
    JUMP_FALSE, 
    JUMP_END
};

enum {
    ROT_FORWARD = 1,
    ROT_BACKWARD = -1
};

// Struktura lopte
struct ball{
    GLdouble x, y, z;
    GLdouble precision;
    GLdouble radius;
    GLdouble jump_p;
} ball;

// Struktura rotacije
struct rotation{
    GLdouble x, y;
    GLdouble matrix[MAT_DIM];
}rotation;

// Funkcije za loptu
void make_ball(void);
void set_ball(void);
void ball_forward(void);
void ball_backward(void);
int ball_jump(void);
void ball_roll(int);

#endif 

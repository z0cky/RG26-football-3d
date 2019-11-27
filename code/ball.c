#include "ball.h"

void make_ball(void)
{
    // Opis lopte, centar, poluprecnik i preciznost
    ball.x = B_CENTER;
    ball.y = B_CENTER;
    ball.z = B_CENTER;
    ball.precision = B_PRECISION;
    ball.radius = B_RADIUS;
}

void set_ball(void)
{
    // Ambijentalna, difuzna i spekularna boja svetla lopte
    GLfloat ambient_light[] = {0.4f, 0.4f, 0.4f, 1.0f};
    GLfloat diffuse_light[] = {0.4f, 0.4f, 0.4f, 1.0f};
    GLfloat specular_light[] = {1.0f, 1.0f, 1.0f, 1.0f};
    
    // Postavljanje svojstava materijala
    glMaterialfv(GL_FRONT, GL_AMBIENT, ambient_light);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, diffuse_light);
    glMaterialfv(GL_FRONT, GL_SPECULAR, specular_light);
    glMateriali(GL_FRONT, GL_SHININESS, SHININESS);
    
    // Pomeranje u centar lopte
    glTranslated(ball.x, ball.y, ball.z);
    
    // Crtanje lopte
    glutSolidSphere(ball.radius, ball.precision, ball.precision);
}

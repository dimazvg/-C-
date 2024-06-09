/* примеры использования структур 2 */
#include <stdio.h>
#include <math.h>  // собираем с ключом -lm

typedef struct Point{
    int x;
    int y;
} tPoint;

void print_point(tPoint * p, char endline);
void move_point(tPoint * p, int dx, int dy);
void inc_x(tPoint * p);
void inc_y(tPoint * p);
float distance(tPoint * p1, tPoint * p2);

int main() {
    tPoint P1 = {0, 0}, P2 = {0, 0};
    move_point(&P1, 4, 5);
    inc_x(&P1);
    inc_y(&P1);
    move_point(&P2, -4, 5);
    inc_y(&P2);
    printf("Points: ");
    print_point(&P1, ' ');
    print_point(&P2, '\n');
    printf("\tdistance: %g\n", distance(&P1, &P2));

    return 0;
}

// type Point function ---------------------------------------------------------------
void print_point(tPoint * p, char endline) {
    printf("(%d, %d)%c", p->x, p->y, endline);
}

void inc_x(tPoint * p) {
    p->x++;
}

void inc_y(tPoint * p) {
    p->y++;
}

void move_point(tPoint * p, int dx, int dy) {
    p->x += dx;
    p->y += dy;
}

float distance(tPoint * p1, tPoint * p2) {
    float res = sqrt(powf(p2->x - p1->x, 2) + powf(p2->y - p1->y, 2));
    return res;
}
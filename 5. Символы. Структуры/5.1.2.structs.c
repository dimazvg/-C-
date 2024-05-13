/* примеры использования структур */
#include <stdio.h>
#include <math.h>  // собираем с ключом -lm

#define YEAR 2024

struct Student {
    long id;
    int birth_year;		    // год рождения
    float weight;		    // вес, кг
    float height;		    // рост, м
    float run100;  		    // время забега на 100 метров
    unsigned char pushup;	// отжиманий
    unsigned char pullup;	// подтягиваний
};

void print_student(struct Student s);

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
    struct Student Petya = {100, 2005, 90.1f, 174.5f, 14, 22, 10};
    printf("student Petya: ");
    print_student(Petya);
    // ---------------------
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

// struct Student function ---------------------------------------------------------
void print_student(struct Student s) {
    printf("id %ld, age %d, weight %g, height %g, %hhu pushup, %hhu pullup.\n", \
        s.id, YEAR - s.birth_year, s.weight, s.height, s.pushup, s.pullup);
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
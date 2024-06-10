/* пример использования псевдонимов типа при помощи typedef 
пример использования псевдонима типов typedef со структурами
*/
#include <stdio.h>

typedef unsigned char Age;              // тип для хранения возраста человека в годах
typedef unsigned long long int llu;     // просто надоело писать длинные слова

int is_adult(Age student);  // вместо int is_adult(unsigned char student);

// void move(Coord *x, Coord *y, Coord dx, Coord dy);  // пример функции с параметрами - указателями на тип Coord
    // вместо void move(unsigned char *x, unsigned char *y, unsigned char dx, unsigned char dy);

typedef struct Point {
    int x;
    int y;
} Point;  // вместо typedef struct Point Point;

void move(struct Point *p, int dx);
void mirror_x(Point *p);

int main() 
{
    Age student = 17;
    printf("student age: %hhu - ", student);
    if (is_adult(student))
        printf("adult\n");
    else
        printf("jung\n");
    
    printf("\n");

    unsigned char x = 10;
    llu z = (llu)x * x;
    printf("llu z = %llu\n", z);

    printf("\n");

    Point y = {0, 0};
    y.x = 12;
    printf("Point y (%d, %d)\n", y.x, y.y);
    move(&y, 3);
    mirror_x(&y);
    printf("After changes:\n");
    printf("Point y (%d, %d)\n", y.x, y.y);

    return 0;
}

int is_adult(Age student) 
{
    int res = 0;
    if (student >= 18)
        res = 1;
    return res;
}

void move(struct Point *p, int dx)
{
    p->x += dx;
}

void mirror_x(Point *p)
{
    p->x = -p->x;
}
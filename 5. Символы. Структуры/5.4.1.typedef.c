/* пример использования псевдонимов типа при помощи typedef */

#include <stdio.h>

typedef unsigned char Age;              // тип для хранения возраста человека в годах
typedef unsigned long long int llu;     // просто надоело писать длинные слова

int is_adult(Age student);  // вместо int is_adult(unsigned char student);
int is_adult(Age student) {
    int res = 0;
    if (student >= 18)
        res = 1;
    return res;
}

// void move(Coord *x, Coord *y, Coord dx, Coord dy);
    // вместо void move(unsigned char *x, unsigned char *y, unsigned char dx, unsigned char dy);

int main() {
    Age student = 17;
    printf("student age: %hhu - ", student);
    if (is_adult(student))
        printf("adult\n");
    else
        printf("jung\n");

    unsigned char x = 10;
    llu z = (llu)x * x;
    printf("llu z = %llu\n", z);

    return 0;
}
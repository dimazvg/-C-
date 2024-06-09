/* примеры использования структур */
#include <stdio.h>

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

int main() {
    struct Student Ivanov = {315101, 2000, 70.4, 1.86, 17.6, 14, 5};
    printf("student Ivanov: ");
    print_student(Ivanov);

    struct Student Petrov = {315102, 1999};  // указаны только id и birth_year остальные поля 0
    printf("student Petrov: ");
    print_student(Petrov);

    struct Student Sidorov = {.weight=56.6, .height=1.62, .id=315102};
    printf("student Sidorov: ");
    print_student(Sidorov);

    struct Student Zotov;
    Zotov.height = 1.72;
    Zotov.pullup = 9;
    Zotov.id = Sidorov.id + 2;
    printf("student Zotov: ");
    print_student(Zotov);

    printf("Самый высокий рост: %.2f\n", Ivanov.height);

    // scanf("%d", &Zotov.id); // скобки нет, приоритет . больше, чем приоритет &

    return 0;
}

void print_student(struct Student s) {
    printf("id %ld, age %d, weight %g, height %g, %hhu pushup, %hhu pullup.\n", \
        s.id, YEAR - s.birth_year, s.weight, s.height, s.pushup, s.pullup);
}

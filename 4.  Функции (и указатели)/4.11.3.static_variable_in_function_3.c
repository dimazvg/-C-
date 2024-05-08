#include <stdio.h>

// функция get_free_id() возвращает не занятый на данный момент id
unsigned int get_free_id() {
    static int id = 1;
    return id++;
}

int main() {
    // пользователи Alex, Olya и Gleb получили свои уникальные id
    unsigned int alex_id = get_free_id();       // 1
    unsigned int olga_id = get_free_id();       // 2
    unsigned int gleb_id = get_free_id();       // 3


    return 0;
}
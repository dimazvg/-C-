/* пример на использование условной компиляции 
Судя по всему, __linux__ и _WIN64 - системные константы
*/
#include <stdio.h>

//#define _WIN64

int main()
{
#ifdef __linux__ // или #if defined (__linux__)
    printf("working in Linux\n");  // код для Linux
#elif defined (_WIN64)
    printf("working in Win64\n");  // код для 64-битной Windows
#else
    printf("Какая у вас операционная система?\n");
#endif

    return 0;
}
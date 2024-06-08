/* пример 2 на использование условной компиляции 
определить макрос AAA можно, не использую define
для этого нужно скомпилировать программу с флагом -DAAA
*/
#define AAA                 // определили макрос ААА

#ifdef AAA                  // если ААА есть, то включаем код:
#include <stdio.h>
#include <assert.h>

int inc(int x);

int main()
{
    assert(inc(2) == 3);
    assert(inc(-2) == -1);
    return 0;
}
#endif                      // включаем до этой строки

// Код дальше есть всегда:

int inc(int x)
{
    return x + 1;
}
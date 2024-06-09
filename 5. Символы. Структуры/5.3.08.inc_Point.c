/* Пример. В функцию передаем адрес структуры и изменяем значение ее полей */
#include <stdio.h>

struct Point {
    int x;
    int y;
};

void inc(struct Point * p)
{
    p->x = p->x + 1;
}

int main()
{
   struct Point t;
   t.x = 2;
   inc(&t);
   inc(&t);
   printf("%d\n", t.x);

   return 0;
}

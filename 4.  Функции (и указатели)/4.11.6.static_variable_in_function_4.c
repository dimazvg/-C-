#include <stdio.h>

void hello() {
    static int counter;
    counter++;
    printf("Я сказал Hello уже %d раз.\n", counter);
}
int main()
{
    hello();        // Я сказал Hello уже 1 раз.
    hello();        // Я сказал Hello уже 2 раз.
    hello();        // Я сказал Hello уже 3 раз.
    hello();        // Я сказал Hello уже 4 раз.

    return 0;
}
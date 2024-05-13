#include <stdio.h>

struct Point {
    int x;
    int y;
};

struct Rect1 {
    struct Point lt;
    struct Point rb;
} b = { {-7, 5}, {5, -3} };

int main() {
    printf("%d %d %d %d\n", b.lt.x, b.lt.y, b.rb.x, b.rb.y);
    
    return 0;
}
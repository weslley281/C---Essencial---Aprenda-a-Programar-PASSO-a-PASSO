#include <iostream>
#include <cstdio>

int main() {
    int x = 2;
    int y = 1;

    x++;
    ++y;
    printf("%d %d\n", x, y);

    x--;
    --y;
    printf("%d %d\n", x, y);

    return 0;
}
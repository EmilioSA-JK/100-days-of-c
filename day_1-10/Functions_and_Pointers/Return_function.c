#include <stdio.h>

int sum(int x, int y) {
    return(x+y);
}

int main() {

    int res = sum(12, 56);
    printf("%d", res);

    return 0;
}
#include <stdio.h>

int main() {

    int num = 1;
    
    //using loop while with the ++ incremental
    while (num < 5) {

        printf("%d\n", num);
        num++;

    }
    //using loop while, with the -- decremental
    while (num > 0) {

        printf("%d\n", num);
        num--;

    }

    // We have another operators just like "+=" or "+=" 

    do {
        printf("%d\n", num);

        num += 3;

    } while (num < 10);


}
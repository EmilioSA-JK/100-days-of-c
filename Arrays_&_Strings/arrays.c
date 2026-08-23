#include <stdio.h>

int main() {

    // an int array is defined
    int ages[7];

    // the value 24 is added to the third position
    ages[2] = 24;

    // the value 31 is added to the first position
    ages[0] = 31;

    printf("%d", ages[2]);

    return 0;

}
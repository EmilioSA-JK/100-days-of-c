#include <stdio.h>

void divide(int* x, int* y, int by) {

    *x /= by;
    *y /= by;
}





int main() {

    // To access a variable address in memory the "&" is used

    int age = 24;

    // The age variable address is printe
    printf("%p\n", &age);

    return 0;

    // a pointer is a variable that stores the memory address of another variable

    //Is defined using *

    int* p = &age;
    // The address is printed
    printf("%p\n", p);


    // The value on the pointer(memory address where the pointer is pointing) is printed
    printf("d", *p);

    int x = 4200;

    int y = 670;

    divide(&x, &y, 10);

    printf("%d %d\n", x, y);

    


    // When using arrays, the name of the array is actually a pointer to its first value

    int x[] = {1, 2, 3, 4};

    printf("%d", *x);

    int* p = x;

    return 0;
    
}
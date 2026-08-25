#include <stdio.h>

// Defining a function with a parameter
void greeting(char name[], int age) {

    printf("Hello, %s\n", name);
    printf("You're %d\n", age);
}



int main () {

    greeting("James", 67);

    return 0;

}


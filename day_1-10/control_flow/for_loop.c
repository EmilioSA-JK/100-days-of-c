#include <stdio.h>

int main() {
    //example of a for loop in C
    // the first argument represents the definition of the variable, the second one is the condition and the last one is the incremental or decremental
    for(int i=1; i<10, i++){
        printf("%d \n", i);

    }

    for(int i=1; i<10; i++){
        if(i == 5){
            break;
        }
    }

    return 0;
}
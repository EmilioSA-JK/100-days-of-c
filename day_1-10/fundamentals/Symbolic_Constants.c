#include <stdio.h>

int main () {
    // Defining constants
    #define LOWER 0
    #define UPPER 300
    #define STEP 20

    int fahr;
    
    printf("%9s %9s\n", "Farenheit", "Celsius");
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){

        printf("%9d %9.1f\n", fahr, (5.0/9.0)*(fahr-32));

    }
    
   




    return 0;
}
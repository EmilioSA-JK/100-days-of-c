#include <stdio.h>

int main() {

    // an int array is defined
    int ages[7];

    // the value 24 is added to the third position
    ages[2] = 24;

    // the value 31 is added to the first position
    ages[0] = 31;

    printf("%d\n", ages[2]);


    // Looping over arrays

    int age[] = {31, 18, 24, 55, 29};

    for (int i=0; i < 5;i++) {

        printf("All the age array elements: %d \n", age[i]);
    }


    // It's possible to take the array values to calculate with its values

    int total = 0;

    for (int i=0; i<5; i++) {

        total += age[i];

        
    }

    printf("The total sum of the values: %d\n", total);

    
    
    
    return 0;

}
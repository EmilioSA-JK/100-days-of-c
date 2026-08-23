#include <stdio.h>

int main() {

    /* An example of how to create a multidimensional array
     defining the size of the dimensions is a MUST*/
    int ages[2][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8}};

    // print the third element of the second array
    printf("%d\n", ages[1][2]);


    /*to loop over a multidimensional, nested for loops
    are the option for this*/

    for(int i=0; i<2; i++) {
        for (int j=0; j<4; j++) {

            printf("every value of every array: array: %d, position: %d, number: %d\n", i, j, ages[i][j]);


        }
    }

    return 0;
}
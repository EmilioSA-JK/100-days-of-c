#include <stdio.h>

int main() {

    //There's two types of type casting(implicit and explicit)

    //implicit casting: happens automatically when converting a smaller data type to a larger one
    int num = 10;
    double = decimal_num;

    // Implicit casting from int to double
    decimal_num = num;
    printf("Here it is, %f", decimal_num)

    // implicit casting path char → int → long → float → double

    // Explicit casting is for converting larger data so smaller data

    double decimal_num = 5.65;
    int num;

    num = (int)decimal_num;

    printf("here it goes %d", num)


    double result = 5.65;
    int grade;

    grade = (int)result;
    
    printf("The grade is: %d\n", grade);
    



}
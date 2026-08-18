#include <stdio.h>
    int main() {

        // "<" used for "less than"
        // ">" used for "greater than"
        // "!=" used for "no equal to"
        // "==" used for "equal to"
        // "<=" used for "less than or equal to"
        // ">=" used for "greater than or equal to"

        int score = 87;
        if(score >= 70) {
            printf("Exam passed\n");
        }

        else {
            printf("Exam failed\n");
        }

        int age = 18;
        if(age >= 18) {
            printf("You are an adult\n");
        }
        // This is a nested conditional just like "elif" in python
        else if (age >= 13){
            printf("You're able to watch this movie with an adult\n");
        }

        else{

            printf("You chiquitin, you can't watch this\n");

        }



        //Here we use the Switch conditional
        int position = 2;


        switch(position) {

            case 1:
                printf("Gold\n");
                break;

            case 2:
                printf("Silver\n");
                break;

            case 3:
                printf("Bronze\n");
                break;

            default:
                printf("No medal\n");

        }


        return 0;
    }


#include <stdio.h>

int main(){

    // A string is considered an array
    char text[] = "Hi nih";
    int age = 42;

    printf("%s\n" ,text);

    

    // The specifier for string is %s

    //char name[] = "James";
    //int age = 42;

    //printf("%s is %d years old.", name, age);

    

    // This is how to take an string input in case is just one string chain(word)

    char name[50];
    //scanf("%s\n", name);

    //printf("%s\n", name);

   


    //If it is needed to take more than one word there's a function called fgets()


    /* The three parts are
    1. The variable that stores the string
    2. The maximum size of the string
    3. A keyword to tell the program to take an input from the user
    */

    fgets(name, 50, stdin);

    printf("Hi %s.", name);

    return 0;

}
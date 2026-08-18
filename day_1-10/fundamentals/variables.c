#include <stdio.h>

#include <stdbool.h> // The stdbool is used to get boolean data type

int main(){
    int integer = 67; //Whole number type(integer)
    float floating = 45.5f; //decimal number type(floating) - 7 decimal digits of precision(4 bytes)
    char character = 'A'; //Single character type(character) 
    double pi = 3.14159; //Double precision floating-point - 15 digits of precision(8 bytes)


    // "%d" used for integer
    // "%f" used for floating
    // "%c" used for character
    printf("%d\n", integer);
    float temperature = 98.6f;
    printf("The temperature is %f\n", temperature);
    printf("This character is %c\n", character);

    // here I use double and float to calculate the volume of a sphere
    float radius = 1.5;
    double volume = (4.0/3.0) * pi * radius * radius * radius;
    printf("The volume of a sphere with radius %f is %f\n", radius, volume);

    // Here I use character variables

    char chaman = 'A';

    printf("The most beautiful letter %c\n", chaman);

    int IsTrue = 1;// Represents true
    int isFalse = 0;//Represens false

    int age = 25;
    int isAdult = (age > 18);

    printf("Is Adult? %d\n", isAdult);

    return 0;

    //using <stdbool.h>

    bool isTrue = true;
    bool isFalse = false;


    
    //Here I'm using Constants
    #define PI 3.14159;

    const float chilling = 0.14;

    //area of a circle, we're using the constant and the variable radius for this

    float area = (PI * radius * radius);

    printf("The area of this circle is:%d\n",area );



}
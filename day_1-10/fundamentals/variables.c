#include <stdio.h>

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
}
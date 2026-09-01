#include <stdio.h>

    // exercise to practice and keep understanding pointers
int main() {

    
    int elo = 1780;
    int *p = &elo;

    // Print the address and value with pointers
    printf("%d\n", elo);
    printf("%p\n", &elo);
    printf("%d\n", *p);
    printf("%p\n", p);

    //

    int wins = 371;
    int  *ptr = &wins;
    //ptr brings the address
    //*ptr brings the value that belongs to that address

    printf("%d\n", *ptr);

    //The value on the pointer is changed
    *ptr = 365;

    printf("%d\n", *ptr);
    

    


    return 0;


}
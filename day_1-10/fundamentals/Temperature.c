#include <stdio.h>

int main () {

    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    char Farenheit[] = "Farenheit";
    char Celsius[] = "Celsius";
    printf("%9s, %9s\n",Farenheit Celsius);
    fahr = lower;

    while (fahr <= upper) {

        celsius = (5.0/9.0) * (fahr-32.0);

        
        printf("%9.0f %9.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}
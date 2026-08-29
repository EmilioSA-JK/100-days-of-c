#include <stdio.h>

int length(char *passwd){


    char *i = passwd;

    int count = 0;

    while (*i != '\0') {

        i++;
        count++;

    }

    return count;

}


int main () {
    
    char passwd[30] = "hack";


    
    printf("%d", length(passwd));

}
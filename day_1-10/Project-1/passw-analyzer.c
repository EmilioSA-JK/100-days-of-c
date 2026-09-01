#include <stdio.h>

// This function measures the length of the function
int length(char *passwd){


    char *i = passwd;
    int count = 0;

    // This loops counts the characters on the char array
    while (*i != '\0') {

        i++;
        count++;

    }
    return count >= 8;
}

int uppercase(char *passwd){

    char *i = passwd;
    int count = 0;

    while(*i != '\0') {

        if ((*i >= 'A') && (*i <= 'Z')) {

            count++;

        }

        i++;

        return count >= 2;

    }

        
        
}

int main () {
    
    printf("Length [ %s ]", length(*password) ? "✓":"✗");
    printf("Uppercase [ %s ]", uppercase(*password) ? "✓":"✗");

    return 0;

}


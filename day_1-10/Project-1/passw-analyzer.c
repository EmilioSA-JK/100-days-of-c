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

int lowercase(char *passwd){

    char *i = passwd;
    int count = 0;

    while(*i != '\0') {

        if ((*i >= 'a') && (*i <= 'z')) {

            count++;

        }

        i++;

    return count >= 4;    

    }
 
}

int numbers(char *passwd){

    char *i = passwd;
    int count = 0;

    while(*i != '\0') {

        if((*i >= 1) && (i* <= 9)) {

            count++;
        }

        i++;


        return count >= 1;

    }

    
    
}



int main () {
    
    printf("Length [ %s ]", length(*password) ? "✓":"✗");
    printf("Uppercase [ %s ]", uppercase(*password) ? "✓":"✗");
    printf("Uppercase [ %s ]", lowercase(*password) ? "✓":"✗");
    printf("Numbers [ %s ]", lowercase(*password) ? "✓" : "✗");

    return 0;

}




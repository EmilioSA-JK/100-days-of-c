#include <stdio.h>
#include <string.h>

//This will create a struct called course to define the struct of the course related variables

struct course {

        int id;
        char title[40];
        float hours;

    };

//This will create a struct called student to define the struct of the student related variables

struct student {

    int age;
    int grade;
    char name[40];

    };


 /*Typedef usage
    Is used to avoid using the keyword
    to declare variables(in this case it won't be needed to use the keyword struct when declaring a variable of the struct)*/
typedef struct {
        int id;
        char title[40];
        float hours;

    } course;






int main() {

    //The variables that belong to the student structure are defined
    struct student s1;
    struct student s2;

    // The variables are initialized
    s1.age = 19;
    s1.grade = 12;

    //sprint is used to store string data in an array
    sprintf(s1.name, "Daniel");

    s2.age = 17;
    s1.grade = 7;
    sprintf(s2.name, "Sherson");

    printf("Student: %s, %d\n", s1.name, s1.age);
    printf("Student: %s, %d\n", s2.name, s2.age);

    //Variables can also be initialized by listing values in order inside curly braces

    struct student s3 = {
        19,
        9,
        "Los tralaleritos"
    };

    struct student s4 = {
        22,
        10, 
        "John Marston"
    };

    printf("Student: %s, %d\n", s3.name, s3.age);
    printf("Student: %s, %d\n", s4.name, s4.age);

    //updating the structure variable
    s2 = s1;

    printf("Student s1: %s, %d\n, Student s2: %s, %d\n", s1.name, s1.age, s2.name, s2.age);


    

    course cs1;

    cs1.id = 67 ;
    
    strcpy(cs1.title, "Introduction to Docker");

    cs1.hours = 12.5;

    printf("%d\t%s\t%4.2f\n", cs1.id, cs1.title, cs1.hours);

    return 0;
}
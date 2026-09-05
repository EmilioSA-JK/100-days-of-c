#include <stdio.h>
#include <string.h>


typedef struct {
    int x;
    int y;

} point;

typedef struct {
    float radius;
    point center;

} circle;

struct student {
    char name[50];
    int number;
    int age;
};

void showStudentData(struct student *st) {

    printf("\nStudent:\n");
    printf("Name: %s\n", st->name);

};

int main () {

    circle c = {4.5, {1, 3}};

    printf("3.1f %d, %d", c.radius
    c.center.x, c.center.y);

    return 0;

}
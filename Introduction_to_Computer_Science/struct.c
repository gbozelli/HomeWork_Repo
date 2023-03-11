#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x;
    int y;
}point;

typedef struct{
    char * name;
    int age;
}person;

void move(point * p){
    p->x++;
    p->y++;
};

void birthday(person * p){
    p->age++;
};

int main(){
    point p;
    p.x = 1;
    p.y = 2;
    person A;
    A.age = 12;
    A.name = "Miguel";
    printf("%s\n", A.name);
    birthday(&A);
    printf("%d\n", A.age);
    move(&p);
    printf("%d\n", p.x);
    person * myperson = (person *) malloc(sizeof(person));
    myperson->age = 12;
    printf("%d\n", myperson->age);
    free(myperson);
    return 0;
}
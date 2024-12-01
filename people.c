#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 20

typedef struct {
    
    char name[MAX_SIZE];
    int age;
    float height;
    
} tPeople;

tPeople readPeople(tPeople people){
    
    printf("Nombre: ");
    scanf("%s",people.name);
    
    printf("Edad: ");
    scanf("%d",&people.age);
    
    printf("Altura: ");
    scanf("%f",&people.height);
    
    return people;
}

void printPeople(tPeople people){
    
    printf("Soy %s, tengo %d y mido %.2f \n",people.name,people.age,people.height);
}

int main()
{
    tPeople hernan;
    
    //readPeople(hernan);
    printPeople(readPeople(hernan));

    
    

    return 0;
}

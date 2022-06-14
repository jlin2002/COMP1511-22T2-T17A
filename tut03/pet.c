// A program that represents pets using structs.
// T17A, June 2022

#include <stdio.h>

#define TRUE 1
#define FALSE 0

enum position {
    laying_down,
    sitting,
    tummy_up
};

enum type {
    dog,
    cat,
    rabbit
};

struct pet {
    // in centimetres
    double height_above_ground;
    int is_happy;
    enum position body_position;
    enum type pet_type;
};

int main(void) {
    struct pet my_pet;
    my_pet.height_above_ground = 50;
    my_pet.is_happy = TRUE;
    my_pet.body_position = laying_down;
    my_pet.pet_type = dog;
    
    printf("My pet's height above ground: %lf\n", my_pet.height_above_ground);
    printf("My pet's happy: ");
    if (my_pet.is_happy) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    // Printing out values of enum types
    printf("%d %d %d\n", laying_down, sitting, tummy_up);
    printf("%d %d %d\n", dog, cat, rabbit);
    return 0;
}

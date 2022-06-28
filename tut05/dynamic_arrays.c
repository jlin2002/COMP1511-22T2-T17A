// A demonstration of dynamically sized arrays using malloc and free
// T17A, June 2022
#include <stdio.h>
#include <stdlib.h>

// Tasks:
// Write a void function called "dynamic_memory", which takes an integer called size.
// Create a dynamic array of integers, that is exactly size integers long.
// Set all the integers in that array to 0.
// Make that array twice as long.
// Set all the integers you just added to 1.
// Free the array.
void dynamic_memory(int size) {
    int *array = malloc(size * sizeof(*array));
    int i = 0;
    while (i < size) {
        array[i] = 0;
        i++;
    }

    array = realloc(array, 2 * size * sizeof(*array));
    int j = 0;
    while (j < 2 * size) {
        array[i] = 1;
        j++;
    }

    free(array);
}

int main(void) {

}
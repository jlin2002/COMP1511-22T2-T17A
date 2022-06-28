// A short demonstration of pointers. This is purely educational, and not a
// demonstration of how pointers are actually used in real life code.
// T17A, June 2022

#include <stdio.h>

int main(void) {
    // 1. Initialise a variable x to 10
    int x = 10;
    // 2. Initialise a pointer to x called x_ptr
    int *x_ptr = &x;
    // 3. Set the value of x to 5 via the pointer
    *x_ptr = 5;
    // 4. Print the new value of x
    printf("x is now %d\n", x);
    // 5. Print the value of x via the pointer
    printf("x via x_ptr is %d\n", *x_ptr);
    return 0;
}
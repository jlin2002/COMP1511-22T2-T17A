#include <stdio.h>

struct colour {
    int red;
    int green;
    int blue;
};

enum main_colours {
    RED,
    GREEN,
    BLUE,
    OTHER
};

// Declare a function prototype for make_colour
struct colour make_colour(int red_val, int green_val, int blue_val);

int main(void) {
    struct colour c = make_colour(100, 80, 70);
    printf("RGB: (%d, %d, %d)\n", c.red, c.green, c.blue);
    return 0;
}

// Define the function make_colour here
// make_colour takes 3 int values: red, green, blue
// returns a struct colour with fields initialised to those values.
struct colour make_colour(int red_val, int green_val, int blue_val) {
    struct colour c;
    c.red = red_val;
    c.green = green_val;
    c.blue = blue_val;
    return c;
}

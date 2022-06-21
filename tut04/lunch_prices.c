// A program that scans in a number of lunch prices
// and tells the user the average price of their last
// 5 lunch prices

#include <stdio.h>

#define MAX_INPUTS 1000
#define MAX_INPUTS_IN_MEAN 5

int main(void) {
    // Create an array to store inputs
    double prices[MAX_INPUTS];
    
    // Scan inputs into the array
    int i = 0;
    while (scanf("%lf", &prices[i]) == 1) {
        i++;
    }
    
    // Calculate the average
    double total_price = 0;
    int j = i - 1;
    while (j >= i - MAX_INPUTS_IN_MEAN) {
        total_price += prices[j];
        j--;
    }
    
    // Print the average
    printf(
        "The average of the prices is %lf\n", 
        total_price / MAX_INPUTS_IN_MEAN
    );
    return 0;
}

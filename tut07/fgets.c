// Implementation of fgets
// T17A, July 2022

#include <stdio.h>

#define MAX_SIZE 10

char *my_fgets(char *str, int size);

int main(void) {
    char line[MAX_SIZE];
    my_fgets(line, MAX_SIZE);
    printf("%s", line);
    return 0;
}

// Behaves like fgets(str, size, stdin);
// Using scanf("%c", &var);
// Scans characters into str (an array of chars) until either
// A '\n' is scanned in to the array:
//  str is returned (with the "\n" still at the end of the string).
// size - 1 characters are scanned in:
//  str is returned.
// CTRL-D is pressed:
//  if >= 0 characters have been scanned in:
//      str is returned.
//  if 0 characters have been scanned in:
//      NULL is returned.
// If any characters were scanned in, then a '\0' is added to the array after the last character.
char *my_fgets(char *str, int size) {
    int i = 0;
    char c;
    while (scanf("%c", &c) == 1 && c != '\n' && i < size - 1) {
        str[i] = c;
        i++;
    }
    if (i == 0) {
        return NULL;
    }
    if (c == '\n' && i < size - 1) {
        str[i] = '\n';
        i++;
    }
    str[i] = '\0';
    return str;
}
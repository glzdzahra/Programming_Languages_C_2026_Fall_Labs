/*
 * Lab 3, Task 3
 * Name: <Zahra Guluzade>
 * Student ID: <251ADC008>
 *
 * Manual string handling.
 *
 * Implement:
 * - int my_strlen(const char *str) - calculate string length manually
 * - void my_strcpy(char *dest, const char *src) - copy string manually
 *
 * Rules:
 * - Do not use standard library functions like strlen or strcpy.
 * - Test your functions in main.
 */

#include <stdio.h>

// Function prototypes
int my_strlen(const char *str);
void my_strcpy(char *dest, const char *src);

int main(void) {
    char source[] = "Programming in C";
    char destination[50];

    int len = my_strlen(source);
    printf("Length: %d\n", len);

    my_strcpy(destination, source);
    printf("Copy: %s\n", destination);

    return 0;
}

// Implement functions below
int my_strlen(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void my_strcpy(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}
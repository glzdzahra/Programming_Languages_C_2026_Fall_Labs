/*
 * Lab 3, Task 2
 * Name: <Zahra Guluzade>
 * Student ID: <251ADC008>
 *
 * Practice using pointers to modify values inside functions.
 *
 * Implement:
 * - void swap(int *x, int *y) - swap the values of two integers
 * - void modify_value(int *x) - multiply the value by 2
 *
 * Rules:
 * - Functions must modify the caller's variables via pointers.
 * - Test your functions in main.
 */

#include <stdio.h>

// Function prototypes
void swap(int *x, int *y);
void modify_value(int *x);

int main(void) {
    int a = 3, b = 7;

    printf("Before swap: a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("After swap: a=%d, b=%d\n", a, b);

    modify_value(&a);
    printf("After modify_value: a=%d\n", a);

    return 0;
}

// Implement functions below
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void modify_value(int *x) {
    *x = *x * 2;
}
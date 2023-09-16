//Compiled By Chintan Panchal
#include <stdio.h>

// Function to swap two integers by value
void ByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to swap two integers by reference (using pointers)
void ByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
   
int main() {
    
    int num1 = 10, num2 = 3;

    printf("Before swapping by value: num1 = %d, num2 = %d\n", num1, num2);
    ByValue(num1, num2);
    printf("After swapping by value: num1 = %d, num2 = %d\n", num1, num2);

    printf("\nBefore swapping by reference: num1 = %d, num2 = %d\n", num1, num2);
    ByReference(&num1, &num2);
    printf("After swapping by reference: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

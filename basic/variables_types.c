#include <stdio.h>

/**
 * Program to demonstrate C data types and variables
 * 
 * C has several basic data types:
 * - int: integers
 * - float: floating point numbers
 * - double: double precision floating point
 * - char: single character
 */
int main() {
    // Integer
    int age = 25;
    
    // Float
    float height = 5.9f;
    
    // Double
    double pi = 3.14159265359;
    
    // Character
    char grade = 'A';
    
    printf("Age: %d\n", age);
    printf("Height: %.1f feet\n", height);
    printf("Pi: %.11f\n", pi);
    printf("Grade: %c\n", grade);
    
    return 0;
}

/* Write a C program to input length in centimeter and convert it to meter and kilometer. How to convert length from centimeter to meter and kilometer in C programming. Length conversion program in C from centimeter to meter and centimeter to kilometer.

Example

Input
Enter length in centimeter = 1000

Output
Length in meter = 10 m
Length in kilometer = 0.01 km */

#include<stdio.h>
 
int main(){
    int a;
    printf("Enter length in centimeter = ");
    scanf("%d", &a);
    printf("\nlength in meter = %d m\n", a/1000);
    printf("length in kilometer = %.2f km", (float)a/100000);
}           

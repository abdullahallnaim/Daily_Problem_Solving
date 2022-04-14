/*
Write a C program to input base and height of a triangle and find area of the given triangle. How to find area of a triangle in C programming. Logic to find area of a triangle in C program.

Example

Input
Enter base of the triangle: 10
Enter height of the triangle: 15

Output
Area of the triangle = 75 sq. units */
#include<stdio.h>
int main(){
	int b,h, res;
	printf("Enter base of the triangle: ");
	scanf("%d", &b);
	printf("\nEnter base of the triangle: ");
	scanf("%d", &h);
	res = 0.5*b*h;
	printf("\nArea of the triangle = %d sq. units", res);
}
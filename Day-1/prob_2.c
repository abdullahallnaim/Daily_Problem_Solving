/* Write a C program to input temperature in Centigrade and convert to Fahrenheit. How to convert temperature from degree centigrade to degree Fahrenheit in C programming. Logic to convert temperature from Celsius to Fahrenheit in C.

Example

Input
Enter temperature in Celsius = 100

Output
Temperature in Fahrenheit = 212 F */

#include<stdio.h>
int main(){
	int t;
	float res;
	printf("Enter temperature in Celcius = ");
	scanf("%d", &t);
	res = (t*1.8)+32;
	printf("\nTemperature in Fahrenheit = %.1f F", res);
}
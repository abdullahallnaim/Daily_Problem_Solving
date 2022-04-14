/*
Write a C program to input number of days from user and convert it to years, weeks and days. How to convert days to years, weeks in C programming. Logic to convert days to years, weeks and days in C program.

Example

Input
Enter days: 373

Output
373 days = 1 year/s, 1 week/s and 1 day/s */

#include<stdio.h>
int main(){
	int t, y, w, d;
	printf("Enter Days : ");
	scanf("%d", &t);
	y = t%12;
	w = (t - y*365)%7;
	d = t - y*365 - w*7;
	printf("\n%d days = %d year/s, %d week/s and %d day/s",t, y, w, d);
}
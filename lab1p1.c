#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
Author: John Cody
Date created: 1/24/2018
Program Description: This program tests three integers, and then outputs the largest one. 
Input(s): three integers
Output(s): the largest integer
Relationship between inputs and outputs: The inputs are run through three if else statements to determine which is largest.
*/

int main(void) {
	int x;
	int y;
	int z;
	int maxInt;

	printf("Enter three integers:");
	scanf("%d%d%d", &x, &y, &z);

	if ((x > y) && (x > z)) {
		maxInt = x;
	}
	else if ((y > x) && (y > z)) {
		maxInt = y;
	}
	else {
		maxInt = z;
	}

	printf("Max intger = %d", maxInt);

	return 0;
}
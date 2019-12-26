#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
Author: John Cody
Date created: 1/24/2018
Program Description: This program tells you what your gpa is in terms of letter grades. 
Input(s): gpa as a float
Output(s): gpa as a letter grade 
Relationship between inputs and outputs: A series of if else statements determine what letter should be output as a result of the number grade.
*/

int main(void) {
	
	float nGrade;
	char lGrade;

	printf("Enter your numeric grade: ");
	scanf("%f", &nGrade);

	if (nGrade >= 3.5) {
		lGrade = 'A';
	}
	else if ((nGrade < 3.5) && (nGrade >= 2.5)) {
		lGrade = 'B';
	}
	else if ((nGrade < 2.5) && (nGrade >= 1.5)) {
		lGrade = 'C';
	}
	else if ((nGrade < 1.5) && (nGrade >= 0.5)) {
		lGrade = 'D';
	}
	else {
		lGrade = 'F';
	}

	printf("Your letter grade is: %c\n", lGrade);

	return 0;
}
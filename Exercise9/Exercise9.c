/*
 * Exercise9.c
 *
 *  Created on: Dec 28, 2020
 *      Author: Muhammad Farid
 */

#include<stdio.h>

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);			/* Disabling buffer */
	setvbuf(stderr , NULL , _IONBF , 0);
	int grade;										/* Student's grade*/
	printf("Enter student's grade in percentage: ");
	scanf("%d",&grade);								/* Scanning for student's grade from user */
	if(grade >= 85 && grade <=100){
		printf("Student's grade is Excellent");
	}
	else if(grade < 85 && grade >= 75){
		printf("Student's grade is Very good");
	}
	else if(grade < 75 && grade >= 65){
		printf("Student's grade is Good");
	}
	else if(grade < 65 && grade >= 50){
		printf("Student's grade is Passed");
	}
	else if(grade < 50 && grade >= 0){
		printf("Student's grade is Failed");
	}
	else{
		printf("Invalid input");
	}
	return 0;
}

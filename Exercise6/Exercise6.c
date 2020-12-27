/*
 * Exercise6.c
 *
 *  Created on: Dec 27, 2020
 *      Author: Muhammad Farid
 */

#include<stdio.h>

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);
	setvbuf(stderr , NULL , _IONBF , 0);
	int number1;														/* First number */
	int number2;														/* Second number */
	printf("Enter first number: ");
	scanf("%d",&number1);												/* Scanning first number from user */
	printf("Enter second number: ");
	scanf("%d",&number2);												/* scanning second number from user */
	if(number1 > number2){
		printf("First number '%d' is greater than second number '%d'.",number1,number2);  /* Displaying that first number is greater than second number */
	}
	else if(number1 < number2){
		printf("First number '%d' is smaller than second number '%d'.",number1,number2);	/* Displaying that first number is smaller than second number */
	}
	else{
		printf("First number '%d' is equal to second '%d'.",number1,number2);				/* Displaying that first number is equal to second number */
	}
	return 0;
}

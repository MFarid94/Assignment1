/*
 * Exercise7.c
 *
 *  Created on: Dec 27, 2020
 *      Author: Muhammad Farid
 */

#include<stdio.h>

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);
	setvbuf(stderr , NULL , _IONBF , 0);
	int number1;									/* First number */
	int number2;									/* Second number */
	int number3;									/* Third number */
	int max_number;									/* Maximum number */
	printf("Enter first number: ");
	scanf("%d",&number1);							/* Scanning first number from user */
	printf("Enter second number: ");
	scanf("%d",&number2);							/* Scanning second number from user */
	printf("Enter third number: ");
	scanf("%d",&number3);							/* Scanning third number from user */
	max_number = number1;							/* Setting first number as maximum then comparing other values to it */
	if(number2 > max_number){
		max_number = number2;						/* Setting second number as maximum after checking */
	}
	if(number3 > max_number){
		max_number = number3;						/* setting third number as maximum after checking */
	}
	printf("Maximum number is %d",max_number);		/* Displaying maximum number */
	return 0;
}

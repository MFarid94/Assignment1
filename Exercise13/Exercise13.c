/*
 * Exercise13.c
 *
 *  Created on: Dec 28, 2020
 *      Author: Muhammad Farid
 */

#include<stdio.h>

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);						/* Disabling Buffer */
	setvbuf(stderr , NULL , _IONBF , 0);
	int number;													/* Number to be checked if prime or not */
	int rem_of_two;												/* Reminder of being divided by two */
	int rem_of_three;											/* Reminder of being divided by three */
	printf("Enter number: ");
	scanf("%d",&number);										/* Scanning for number from user */
	rem_of_two = number % 2;									/* Reminder of two */
	rem_of_three = number % 3;									/* Reminder of three */

	if(number == 2 || number == 3){
		printf("Number is prime");
	}
	else{
		if( rem_of_two == 0 || rem_of_three == 0){
			printf("Number is not prime");
		}
		else{
			printf("Number is prime");
		}
	}
	return 0;
}

/*
 * Exercise12.c
 *
 *  Created on: Dec 28, 2020
 *      Author: Muhammad Farid
 */

#include<stdio.h>

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);											/* Disabling buffer */
	setvbuf(stderr , NULL , _IONBF , 0);
	int number;																		/* A number that it's factorial to be calculated */
	long long factorial = 1;														/* The factorial of a given number */

	/* A do..while loop for checking a positive given number */
	do{
		printf("Enter the number for which it's factorial to be calculated: ");
		scanf("%d",&number);
		if(number <= 0){
		printf("Invalid input, please enter a positive number\n");
		}
	}while(number <= 0);

	/* A for loop for calculating the factorial*/
	for(int i=1; i<=number ;i++){
		factorial *= i;																/* Calculation of a given number factorial */
	}

	printf("The factorial of %d is %I64d",number,factorial);							/* Displaying the factorial of a given number */
}

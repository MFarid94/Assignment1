/*
 * Exercise8.c
 *
 *  Created on: Dec 27, 2020
 *      Author: Muhammad Farid
 */

#include<stdio.h>
#include<math.h>

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);			/* Disabling buffer */
	setvbuf(stderr , NULL , _IONBF , 0);
	int number;										/* Number to be check if perfect square */
	int root;										/* The square root of a positive integer number */
	do{												/* A do..while loop for acquiring a positive number */
		printf("Enter the number: ");
		scanf("%d",&number);						/* Scanning the number from user */
		if(number <= 0){
			printf("Invalid please enter a positive number");			/* Asking user to resubmit a positive number */
		}
	}while(number <= 0);
	root = sqrt(number);												/* Calculating square root of given number */
	if(number == root*root){
		printf("Number given is a perfect sqaure");
	}
	else{
		printf("Number given is not a perfect square");
	}
	return 0;
}

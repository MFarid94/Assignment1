/*
 * Exercise11.c
 *
 *  Created on: Dec 28, 2020
 *      Author: Muhammad Farid
 */

#include<stdio.h>

int main(void){
	int sum = 0;												/* Overall summation */
	for(int i=0 ; i<100 ; i++){								/* A loop for summing integer from 0 to 100*/
		sum += i;												/* An iteration for summation of sum = sum + i */
	}

	/* Checking if sum of first 100 numbers is correct */
	if(sum == 4950 ){
		printf("Summation of first 100 number is correct and the sum is %d",sum);				/* Displaying summation and notifying that it is correct */
	}
	else{
		printf("Summation of first 100 number is incorrect");									/* Displaying that  summation is wrong */
	}
	return 0;
}

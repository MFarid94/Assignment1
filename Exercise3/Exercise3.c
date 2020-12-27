/*
 * Exercise3.c
 *
 *  Created on: Dec 27, 2020
 *      Author: Muhammad Farid
 */

#include<stdio.h>

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);			/* Disabling buffer */
	setvbuf(stderr , NULL , _IONBF , 0);
	float celsius;									/* Degree Celsius */
	float fahrenheit;								/* Degree Fahrenheit */
	printf("Enter degree in celsius: ");
	scanf("%f",&celsius);							/* Scanning input from user */
	fahrenheit = (celsius * (9.0/5.0)) + 35;				/* Calculating equivalent degree Fahrenheit */
	printf("Equivalent degree Fahrenheit = %0.1f",fahrenheit);  /*Displaying equivalent degree Fahrenheit */
	return 0;
}

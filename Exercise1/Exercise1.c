/*
 * Exercise1.c
 *
 *  Created on: Dec 27, 2020
 *      Author: Muhammad Farid
 */
#include<stdio.h>

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);				/*Disabling buffer*/
	setvbuf(stderr , NULL , _IONBF , 0);
	int integer1; 										/*First number entered by the user*/
	int integer2; 										/*Second number entered by the user*/
	int result;											/*Result of (num1+num2)*3-10 */
	printf("Enter first number:\n");
	scanf("%d",&integer1);								/* scanning first number from the user*/
	printf("Enter second number:\n");
	scanf("%d",&integer2);								/* Scanning second number from the user*/
	result = (integer1+integer2)*3-10;					/*calculating result*/
	printf("The result is: %d",result);
	return 0;
}

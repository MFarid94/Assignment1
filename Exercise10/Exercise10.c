/*
 * Exercise10.c
 *
 *  Created on: Dec 28, 2020
 *      Author: Muhammad Farid
 */

#include<stdio.h>

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);									/* Disabling buffer */
	setvbuf(stderr , NULL , _IONBF , 0);
	char operator;															/* Operation to be done */
	int number1;															/* First Number */
	int number2;															/* Second Number */
	printf("Enter type of operation: ");
	scanf("%c",&operator);													/* Scanning for operator from user */
	printf("Enter first number: ");
	scanf("%d",&number1);													/* Scanning for first number */
	printf("Enter second number: ");
	scanf("%d",&number2);													/* Scanning for second number */
	switch(operator){
	case '+':printf("Summation of two numbers is %d",number1+number2);break;
	case '-':printf("Subtraction of two numbers is %d",number1-number2);break;
	case '*':printf("Multiplication of two numbers is %d",number1*number2);break;
	case '/':printf("Division of two numbers is %d",number1/number2);break;
	default:printf("Invalid Operator");
	}
	return 0;
}

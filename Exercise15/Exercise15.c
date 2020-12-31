/*
 * Exercise15.c
 *
 *  Created on: Dec 28, 2020
 *      Author: Muhammad Farid
 */

#include<stdio.h>

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);										/* Disabling buffer */
	setvbuf(stderr , NULL , _IONBF , 0);
	int number;																	/* Number inputted from user */
	int power;																	/* Power of number number */
	int multiple = 1;																/* The number given to it's power */
	printf("Enter number: ");
	scanf("%d",&number);														/* Scanning for the number from user */
	printf("Enter the power: ");
	scanf("%d",&power);															/* Scanning for the power of the number from user*/
	/* Loop for calculating the number given raised to it's power */
	for(int i=1; i<=power ; i++){
		multiple *= number;														/* Rising the number to it's power */
	}
	printf("The number raised to it's power is equal to %d",multiple);			/* Displaying the number raised to it's power */
	return 0;
}

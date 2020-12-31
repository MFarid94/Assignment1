/*
 * Exercise17.c
 *
 *  Created on: Dec 28, 2020
 *      Author: Muhammad Farid
 */

#include<stdio.h>

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);										/* Disabling buffer */
	setvbuf(stderr , NULL , _IONBF , 0);
	int number;																	/* Number supplied by the user */
	int reminder;																/* Reminder of given number */
	int i = 0;																	/* Number of decimals of a given number */
	printf("Enter number: ");
	scanf("%d",&number);														/* Scanning for the number from the user */
	reminder = number % 10;														/* calculating reminder of given number */
	/* A while loop for calculating decimal numbers of a digit */
	while(reminder != 0){
		i++;										/* calculating the decimal numbers  */
		number = number / 10;
		reminder = number % 10;													/* Dividing given number by 10 and acquiring it's reminder */
	}
	printf("Number of decimals in given digit is %d",i);							/* Displaying the number of decimals */
	return 0;
}

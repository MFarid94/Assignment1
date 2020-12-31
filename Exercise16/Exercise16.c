/*
 * Exercise16.c
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
	int reversed = 0;															/* Reverse of a given number */
	printf("Enter number to be reversed: ");
	scanf("%d",&number);														/* Scanning for the number to be reversed */
	reminder = number % 10;														/* calculating reminder of given number */
	/* A while loop for reversing a given number */
	while(reminder != 0){
		reversed = reversed*10 + reminder;										/* calculating the reversed number  */
		number = number / 10;
		reminder = number % 10;													/* Dividing given number by 10 and acquiring it's reminder */
	}
	printf("Reverse of given number is %d",reversed);							/* Displaying the reversed number */
	return 0;
}

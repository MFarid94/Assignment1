/*
 * Exercise5.c
 *
 *  Created on: Dec 27, 2020
 *      Author: Muhammad Farid
 */

#include<stdio.h>

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);											/* Disabling Buffer */
	setvbuf(stderr , NULL , _IONBF , 0);
	char ascii_char;																/* ASCII character */
	printf("Enter ASCII character: ");
	scanf("%c",&ascii_char);														/* Scanning ASCII character from user*/
	printf("Corresponding integer value of ASCII character is %d",ascii_char);		/* Displaying corresponding integer value of an ASCII character*/
	return 0;
}

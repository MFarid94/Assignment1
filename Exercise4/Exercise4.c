/*
 * Exercise4.c
 *
 *  Created on: Dec 27, 2020
 *      Author: Muhammad Farid
 */

#include<stdio.h>
#define PI 3.14159

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0 );								/* Disabling buffer */
	setvbuf(stderr , NULL , _IONBF , 0 );
	float radius;														/* Radius of a circle */
	float area;															/* Area of a circle */
	float circumference;												/* Circumference of a circle */
	printf("Enter radius of a circle: ");
	scanf("%f",&radius);												/* Scanning radius of a cirlce from the user */
	area = PI * radius * radius;										/* Calculating Area of a circle */
	circumference = 2 * PI * radius;									/* Calculating Circumference of a circle */
	printf("Area of a circle is %0.2f\n",area);							/* Displaying Area of a circle */
	printf("Circumference of a circle is %0.2f",circumference);			/* Displaying Circumference of a circle */
	return 0;
}

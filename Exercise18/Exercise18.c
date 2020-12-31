/*
 * Exercise18.c
 *
 *  Created on: Dec 28, 2020
 *      Author: Muhammad Farid
 */

#include<stdio.h>

int main(void){
	/* Loop for displaying half pyramid pattern */
	for(int i=1; i<=5 ; i++){
		for(int j=1 ; j<=i ;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

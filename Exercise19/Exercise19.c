/*
 * Exercise19.c
 *
 *  Created on: Dec 28, 2020
 *      Author: Muhammad Farid
 */

#include<stdio.h>

int main(void){
	/* Loop for displaying inverted half pyramid pattern */
	for(int i=0; i<5 ; i++){
		for(int j=5-i ; j>0 ; j--){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

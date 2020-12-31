/*
 * Exercise20.c
 *
 *  Created on: Dec 28, 2020
 *      Author: Muhammad Farid
 */

#include<stdio.h>

int main(void){
	/*A loop for creating a pyramid pattern*/
	for(int i=0; i<5 ;i++){
		for(int k=4-i ; k>=0 ; k--){
			printf(" ");
		}
		for(int j=1 ; j<=2*i + 1 ;j++){
			printf("*");
		}
		for(int l=4-i; l>=0 ; l--){
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}

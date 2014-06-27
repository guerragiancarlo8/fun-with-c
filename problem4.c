
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "utils.h"


int main(){

	char number[100];

	int i;
	int j;
	int theNum;
	int product;

	for(i=999;i>99;i--){

		for(j=999;j>99;j--){

			theNum = j*i;

			snprintf(number, sizeof(number), "%i", theNum);

			if(isPalindrome(number) && theNum > product)
				product = theNum;

		}

	}

	printf("%i",product);



	
	
	//puts("Please enter a number: ");

	//fgets(number, 100, stdin);

	
	

}


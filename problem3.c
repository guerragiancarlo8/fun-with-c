#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"


void PrimeFactors(long long);

int main(){	
	
	
	long long number;
	puts("GIANCARLO M. GUERRA: PRIME FACTORS");
	puts("==================================");
	puts("Please press CTRL+D or CTRL+C to exit");
	puts("");

	while(1){

		puts("Please enter a number: ");

		scanf("%lld",&number);

		PrimeFactors(number);

		printf("\n");

	}
	


}

void PrimeFactors(long long number){

	long long i;
	

	if(number<2)
		return;

	else if(number>=2){

		for(i=2; i<number+1;i++){

			if(isPrime(i)){

				if(number % i == 0){

					printf("%lld ",i);
					
					PrimeFactors(number/i);

					return;
					
					

				}
			}
		}

	}
	
}


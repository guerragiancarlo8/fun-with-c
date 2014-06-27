#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

typedef struct prime {

	int value;
	struct prime *number;

} prime;

int main(){

	if(isPrime(15))
		puts("eje");
	if(isPrime(35))
		puts("eje2");
}
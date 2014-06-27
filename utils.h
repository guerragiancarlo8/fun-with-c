#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

long long isPrime(long long);

void reverse(char [], char[]);

char isPalindrome(char *);

long long isPrime(long long number){

	long long i;

	for(i=2;i<number;i++){

		if(number % i == 0)
			if(number != i)
				return 0;		
		else
			return 1;
	}
}

void reverse(char array[],char ret[]){

	int i;
	
	ret[strlen(array)];
	int j=strlen(array)-1;
	for(i=0;i<j+1;i++){

		ret[i] = array[j-i];
	}
	ret[strlen(array)] = '\0';		
}

char isPalindrome(char *number){
	
	char comp[100];
	reverse(number,comp);
	if(strstr(number,comp))
		return 1;
	else
		return 0;
}

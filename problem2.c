#include <stdio.h>
#include <stdlib.h>


void fibonacci();
//adding the previous 2 terms
//1,2,3,5,8,13,21,34,55,89

int main(){

	fibonacci();
}

void fibonacci(){



	int current = 2;
	int previous = 1;
	int numb=0;
	int i;



	for(i=0;numb<4000000;i++){


		//add the two together
		//store the result somewhere
		if(current % 2 == 0 && previous && 2 == 0){

			numb = current + previous;
			previous = current;
			current = numb;

		}
		
		//assign old value to var
		//create new var
	}
	printf("%i",numb);
	
}
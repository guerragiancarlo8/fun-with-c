#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	int total_so_far = 0;
	int i;

	
	for(i = 1; i<1000;i++){

		if(i % 5 == 0){

			total_so_far = total_so_far + i;
		}
		else if(i % 3 == 0){

			total_so_far = total_so_far + i;
		}
		
	} 
	
	printf("%i",total_so_far);
	
}
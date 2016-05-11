#include<stdio.h>
#include<stdlib.h>

int main(){

	/*
	It would have been more efficient if I computed divisibility while I generate 
	the arraybut instructions say I am "given" and array.
	*/

	int given[999];
	for (int i = 1; i <= 1000; i++){
		given[i-1] = i;
	}

	for (int j = 0; j <= 999; j++){
		if ((given[j]%3 == 0) && (given[j]%5 != 0))
			printf("fizz\n");
		else if ((given[j]%3 != 0) && (given[j]%5 == 0))
			printf("buzz\n");
		else if ((given[j]%3 == 0) && (given[j]%5 == 0))
			printf("fizzbuzz\n");
		else
			printf("%d\n", given[j]);
	}

}
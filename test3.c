#include<stdio.h>
#include<stdlib.h>

int length = 0;
int given[50]={8,24,20,5,13,3,1,12,11,24,8,24,20,4,5,23,24,23,21,2,19,3,21,2,14,17,21,5,7,10,20,11,0,5,18,2,13,11,14,3,20,1,23,6,21,10,14,0,15,20};
int dupe[50];
int dupeChecker(int x);


int main(){
	for (int start = 0; start <= 49; start++){
		for (int pos = start+1; pos< 49; pos++){
			if (given[start]==given[pos]){
				if (dupeChecker(given[start]) == 0){
					dupe[length] = given[start];
					length++;
					printf("%d\n", given[start]);
				}
			}
		}
	}
}

int dupeChecker(int x){
	int output = 0;
	for (int i = 0; i < length; i++){
		if (x == dupe[i])
			output = 1;
	}
	return output;
}
// Write a pattern.
// A
// B B
// C C C
// D D D D
// E E E E E 

#include<stdio.h>

void main(){
	int i,j;
	
	for(i='A'; i<='E'; i++){
		for(j='A'; j<=i; j++){
			printf("%c ",i);	
		}
		printf("\n");
	}
}



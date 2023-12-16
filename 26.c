//Write a pattern.
// 1
// A B
// 2 3 4
// C D E F
// 5 6 7 8 9

#include<stdio.h>

void main (){
	int i, j, num=1;
	char c='A';
	
	for(i=1; i<=5; i++){
		for(j=1; j<=i; j++){
			if(i%2==1){
				printf("%d ",num++);
			}else{
				printf("%c ",c++);
			}
		}
		printf("\n");
	}
}

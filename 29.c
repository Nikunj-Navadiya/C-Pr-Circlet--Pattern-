// Write a pattern.
//         5
//       5 4 5
//     5 4 3 4 5
//   5 4 3 2 3 4 5
// 5 4 3 2 1 2 3 4 5 

#include<stdio.h>

void main (){
	int i,j,s,k;
	
	for(i=1; i<=5; i++){
		for(s=2; s<=i; s++){
			printf("  ");
		}
		for(j=5; j>=i; j--){
			printf("%d ",j);
		}
		for(k=i+1; k<=5; k++){
			printf("%d ",k);
		}
		printf("\n");		
	}
	
	for(i=4; i>=1; i--){
		for(s=2; s<=i; s++){
			printf("  ");
		}
		for(j=5; j>=i; j--){
			printf("%d ",j);
		}
		for(k=i+1; k<=5; k++){
			printf("%d ",k);
		}
		printf("\n");		
	}
}

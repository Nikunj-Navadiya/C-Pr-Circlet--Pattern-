// Write a pattern.
// 5 5 5 5 5 5 5 5 5
// 5 4 4 4 4 4 4 4 5
// 5 4 3 3 3 3 3 4 5
// 5 4 3 2 2 2 3 4 5
// 5 4 3 2 1 2 3 4 5 
// 5 4 3 2 2 2 3 4 5
// 5 4 3 3 3 3 3 4 5
// 5 4 4 4 4 4 4 4 5
// 5 5 5 5 5 5 5 5 5

#include <stdio.h>

void main(){
    int i, j;

    for(i=5; i>=1; i--){
        for(j=5; j>i; j--){
            printf("%d", j);
        }
        for(j=1; j<=(i*2-1); j++){
            printf("%d", i);
        }
        for(j=i+1; j<=5; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    
    for(i=1; i<=4; i++){
        for(j=5; j>i; j--){
            printf("%d", j);
        }
        for(j=1; j<=(i*2-1); j++){
            printf("%d", i+1);
        }
        for(j=i+1; j<=5; j++){
            printf("%d", j);
        }
        printf("\n");
    }
}

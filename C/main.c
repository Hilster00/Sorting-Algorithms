#include <stdio.h>
#include "InsertSort.h"

void main(){
    
    int vetor[6];
    for(int i=5;i>=0;i--){
        vetor[5-i]=i;
    }
    printf("vetor:");
    for(int i=0;i<6;i++){
        printf("%i,",vetor[i]);
    }
    InsertSort(&vetor[2],3);
    printf("\nvetor:");
    for(int i=0;i<6;i++){
        printf("%i,",vetor[i]);
    }
}

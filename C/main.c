#include <stdio.h>
#include "InsertSort.h"
#include "QuickSort.h"

void main(){
    
    int vetor1[6],vetor2[6];
    for(int i=5;i>=0;i--){
        vetor1[5-i]=i;
        vetor2[5-i]=i;
    }
    printf("InsertSort\n");
    printf("vetor:");
    for(int i=0;i<6;i++){
        printf("%i,",vetor1[i]);
    }
    InsertSort(&vetor1[0],6);
    printf("\nvetor ordenado:");
    for(int i=0;i<6;i++){
        printf("%i,",vetor1[i]);
    }
    
    printf("\nQuickSort\n");
    printf("vetor:");
    for(int i=0;i<6;i++){
        printf("%i,",vetor2[i]);
    }
    QuickSort(&vetor2[0],0,6);
    printf("\nvetor ordenado:");
    for(int i=0;i<6;i++){
        printf("%i,",vetor2[i]);
    }
}

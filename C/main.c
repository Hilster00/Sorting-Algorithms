#include <stdio.h>
#include "InsertSort.h"
#include "QuickSort.h"
#include "MergeSort.h"
#include "SelectSort.h"

void main(){
    
    int vetor1[6],vetor2[6],vetor3[6],vetor4[6];
    for(int i=5;i>=0;i--){
        vetor1[5-i]=i;
        vetor2[5-i]=i;
        vetor3[5-i]=i;
        vetor4[5-i]=i;
    }
    
    printf("InsertSort\n");
    printf("vetor:");
    for(int i=0;i<6;i++){
        printf("%i,",vetor1[i]);
    }
    InsertSort(&vetor1[0],5);
    printf("\nvetor ordenado:");
    for(int i=0;i<6;i++){
        printf("%i,",vetor1[i]);
    }
    
    printf("SelectSort\n");
    printf("vetor:");
    for(int i=0;i<6;i++){
        printf("%i,",vetor2[i]);
    }
    SelectSort(&vetor2[0],5);
    printf("\nvetor ordenado:");
    for(int i=0;i<6;i++){
        printf("%i,",vetor2[i]);
    }
    
    printf("\nQuickSort\n");
    printf("vetor:");
    for(int i=0;i<6;i++){
        printf("%i,",vetor3[i]);
    }
    QuickSort(&vetor3[0],0,5);
    printf("\nvetor ordenado:");
    for(int i=0;i<6;i++){
        printf("%i,",vetor3[i]);
    }
    
    printf("\nMergeSort\n");
    printf("vetor:");
    for(int i=0;i<6;i++){
        printf("%i,",vetor4[i]);
    }
    MergeSort(&vetor4[0],0,5);
    printf("\nvetor ordenado:");
    for(int i=0;i<6;i++){
        printf("%i,",vetor4[i]);
    }
}

void troca(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}              
void BubbleSort(int *vetor,int inicio,int fim){
    int i,j;
    for(i=fim;i>-1;i--){
        for(j=0;j<i;j++){
            if(*(vetor + j) > *(vetor + j + 1)){
                troca((vetor + j),(vetor + j + 1));
            }
        }
    }
}

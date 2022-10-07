void troca(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
void SelectSort(int *vetor,int inicio,int fim){
    int i,j,menor,posicao;
    for(i=inicio;i<(fim+1);i++){
        menor=*(vetor + i);
        posicao=i;
        for(j=i;j<(fim+1);j++){
            if(menor > *(vetor + j)){
                posicao=j;
                menor=*(vetor + j);
            }
            troca((vetor+i),(vetor+posicao));
        }
        
    }
}

void troca(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}
void BorderSort(int *vetor,int inicio,int fim){
    int i,j,k=0,intervalo=fim+1;
    intervalo/=2;
    int posicao_menor,posicao_maior;
    for(i=inicio;i<intervalo;i++){
        posicao_menor=i;
        posicao_maior=fim-k;
        for(j=i;j<fim+1-k;j++){
            if(*(vetor + j) < *(vetor + posicao_menor)){
                posicao_menor=j;
            }else{
                if(*(vetor + j) > *(vetor + posicao_maior)){
                    posicao_maior=j;
                }
            }
        }
        troca((vetor+i),(vetor+posicao_menor));
        if(i == posicao_maior){
            posicao_maior=posicao_menor;
        }
        troca((vetor+fim-k),(vetor+posicao_maior));
        k+=1;
    }
}

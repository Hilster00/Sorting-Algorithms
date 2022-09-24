
void troca(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void QuickSort(int *vetor,int inicio,int fim){
    if(inicio<fim){
        int i,j=inicio;

        for(i=inicio;i<fim;i++){
            if(*(vetor+i)<=*(vetor+fim-1)){
                troca(vetor+i,vetor+j);
                j++;
            }
        }
        QuickSort(vetor,inicio,j-1);
        QuickSort(vetor,j+1,fim);
    }
}

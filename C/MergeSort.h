void Merge(int *vetor,int inicio,int meio,int fim){
    int temp[(fim+1-inicio)];
    int n=inicio, m=meio+1,i;
    for(i = 0; i < (fim+1-inicio); i++){
        if (n < meio+1 && m < fim+1){
            if(*(vetor + n ) < *(vetor + m )){
                temp[i]=*(vetor + n );
                n++; 
            }
            else{
                temp[i]=*(vetor + m );
                m++; 
            }
        }else{
            if(m < fim +1){
                temp[i]=*(vetor + m );
                m++;
            }else{
                temp[i]=*(vetor + n );
                n++;
            }
        }
    }
    n=inicio;   
    for(i = 0; i < (fim+1-inicio); i++){
        *(vetor + n ) = temp[i];
        n++;
    }
}
void MergeSort(int *vetor,int inicio,int fim){
    if(inicio < fim){
        int meio=(fim+inicio)/2;
        MergeSort(vetor,inicio,meio);
        MergeSort(vetor,meio+1,fim);
        Merge(vetor,inicio,meio,fim);
    }
}

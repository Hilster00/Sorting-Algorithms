void InsertSort(int *vetor,int fim){
    int i,j;
    int *temp,*anterior;
    for(i=1;i<fim;i++){
        j=i;
        temp=vetor+i;
        anterior=temp-1;
        while(j>0 && *temp<*anterior){
            *temp=*temp+*anterior;
            *anterior=*temp-*anterior;
            *temp=*temp-*anterior;
            temp--;
            anterior--;
            j--;
        }
        
    }
}

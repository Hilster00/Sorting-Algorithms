void InsertSort(int *vetor,int fim){
    int i,j;
    int *temp;
    for(i=1;i<fim+1;i++){
        j=i;
        temp=vetor+i;
        while(j>0 && *temp<*(temp - 1)){
            *temp=*temp+*(temp - 1);
            *(temp - 1)=*temp-*(temp - 1);
            *temp=*temp-*(temp - 1);
            temp--;
            j--;
        }
    }
}

def QuickSort(vetor,inicio=0,fim=None):
    if fim == None:
        fim=len(vetor)-1
    if(inicio<fim):
        j=inicio
        for i in range(inicio,fim):
            if vetor[i]<=vetor[fim]:
                vetor[i],vetor[j] = vetor[j],vetor[i]
                j+=1 
        vetor[j],vetor[fim] = vetor[fim],vetor[j]
        QuickSort(vetor,inicio,j-1)
        QuickSort(vetor,j+1,fim)

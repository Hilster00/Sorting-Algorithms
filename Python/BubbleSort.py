def BubbleSort(vetor,inicio=0,fim=None):
    if fim == None:
        fim=len(vetor)-1
    for i in range(fim,-1,-1):
        for j in range(i):
            if vetor[j] > vetor[j+1]:
                vetor[j],vetor[j+1] = vetor[j+1],vetor[j]

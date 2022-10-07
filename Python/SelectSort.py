def SelectSort(vetor,inicio=0,fim=None):
    if fim == None:
        fim=len(vetor)
    for i in range(inicio,fim):
        menor=vetor[i]
        posicao=i
        for j in range(i+1,fim):
            if menor > vetor[j]:
                menor=vetor[j]
                posicao=j
        vetor[i],vetor[posicao] = vetor[posicao],vetor[i]

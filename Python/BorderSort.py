def BorderSort(vetor,inicio=0,fim=None):
    if fim == None:
        fim=len(vetor)-1
    for k,i in enumerate(range(inicio,fim+1)):
        posicao_menor=i
        posicao_maior=fim-k
        for j in range(i,fim+1-k):
            if vetor[j] < vetor[posicao_menor]:
                posicao_menor=j
            elif vetor[j] > vetor[posicao_maior]:
                posicao_maior=j
        vetor[i],vetor[posicao_menor] = vetor[posicao_menor],vetor[i]
        if i == posicao_maior:
            posicao_maior=posicao_menor
        vetor[fim-k],vetor[posicao_maior] = vetor[posicao_maior],vetor[fim-k]

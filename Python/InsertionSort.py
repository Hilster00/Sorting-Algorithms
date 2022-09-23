def InsertionSort(vetor):
    for i in range(0,len(vetor)):
        key=vetor[i]#guarda vetor[i] em uma chave
        
        #move valores > key para a direita
        for j in range(i,-1,-1):
            if key>=vetor[j-1]:#interrompe o laco quando encontra valor menor que key
                break
            vetor[j]=vetor[j-1]#move valor para a direita se vetor[j-1]>key
        
        #coloca valor da chave no local correto
        vetor[j]=key

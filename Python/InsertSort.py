def InsertSort(vetor,inicio=0,fim=None):
    if fim == None:
        fim=len(vetor)
    for i in range(inicio,fim):
        key=vetor[i]#guarda vetor[i] em uma chave
        
        #move valores > key para a direita
        for j in range(i,inicio-1,-1):
            if key>=vetor[j-1]:#interrompe o laco quando encontra valor menor que key
                break
            vetor[j]=vetor[j-1]#move valor para a direita se vetor[j-1]>key
        #coloca valor da chave no local correto
        vetor[j]=key

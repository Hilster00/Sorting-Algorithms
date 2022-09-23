def MergeSort(vetor,inicio=0,fim=None):
    if fim == None:
        fim=len(vetor)-1
    if fim > inicio:
        meio = (inicio + fim) // 2
        MergeSort(vetor,inicio,meio)
        MergeSort(vetor,meio+1,fim)
        Merge(vetor,inicio,meio,fim)
        
def Merge(vetor,inicio,meio,fim):
    temp=[]
    n=inicio
    m=meio+1
    
    for i in range(inicio,fim+1):
        if n < meio+1 and m < fim+1:
            if vetor[n] < vetor[m]:
                temp.append(vetor[n])
                n+=1 
            else:
                temp.append(vetor[m])
                m+=1 
        elif m < fim +1:
            temp.append(vetor[m])
            m+=1 
        else:
            temp.append(vetor[n])
            n+=1 
    
    for i,j in enumerate(range(inicio,fim+1)):
        vetor[j] = temp[i]

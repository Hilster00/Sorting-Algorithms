import random
import QuickSort
import InsertSort
import MergeSort

vetores=[[],[],[]]
tamanho=7

#adiciona valores em ordem aleatoria a lista
for i in range(0,tamanho):
    #adiciona valores as sublistas
    vetores[0].append(random.randint(0,tamanho))
    vetores[1].append(random.randint(0,tamanho))
    vetores[2].append(random.randint(0,tamanho))

#onrdenando vetores

#ordenando sublista 0 pelo metodo InsertionSort
print(f"Vetor desordenado:{vetores[0]}")
InsertSort.InsertionSort(vetores[0])
print(f"Vetor ordenado InsertSort:{vetores[0]}")

#ordenando sublista 0 pelo metodo MergeSort
print(f"Vetor desordenado:{vetores[1]}")
MergeSort.MergeSort(vetores[1])
print(f"Vetor ordenado MergeSort:{vetores[1]}")

#ordenando sublista 0 pelo metodo QuickSort
print(f"Vetor desordenado:{vetores[2]}")
QuickSort.QuickSort(vetores[2])
print(f"Vetor ordenado QuicSort:{vetores[2]}")

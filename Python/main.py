import random
import QuickSort
import InsertSort
import MergeSort
import SelectSort
import BubbleSort

vetores=[[],[],[],[],[]]
tamanho=7

#adiciona valores em ordem aleatoria a lista
for i in range(0,tamanho):
    #adiciona valores as sublistas
    vetores[0].append(random.randint(0,tamanho))
    vetores[1].append(random.randint(0,tamanho))
    vetores[2].append(random.randint(0,tamanho))
    vetores[3].append(random.randint(0,tamanho))
    vetores[4].append(random.randint(0,tamanho))

#onrdenando vetores
print("Metodos de ordenacao")

#ordenando sublista 0 pelo metodo InsertionSort
print(f"\nVetor desordenado:{vetores[0]}")
InsertSort.InsertSort(vetores[0])
print(f"Vetor ordenado InsertSort:{vetores[0]}")

#ordenando sublista 1 pelo metodo SelectSort
print(f"\nVetor desordenado:{vetores[1]}")
SelectSort.SelectSort(vetores[1])
print(f"Vetor ordenado SelectSort:{vetores[1]}")

#ordenando sublista 2 pelo metodo BubbleSort
print(f"\nVetor desordenado:{vetores[2]}")
BubbleSort.BubbleSort(vetores[2])
print(f"Vetor ordenado SelectSort:{vetores[2]}")

#ordenando sublista 3 pelo metodo MergeSort
print(f"\nVetor desordenado:{vetores[3]}")
MergeSort.MergeSort(vetores[3])
print(f"Vetor ordenado MergeSort:{vetores[3]}")

#ordenando sublista 4 pelo metodo QuickSort
print(f"\nVetor desordenado:{vetores[4]}")
QuickSort.QuickSort(vetores[4])
print(f"Vetor ordenado QuicSort:{vetores[4]}")

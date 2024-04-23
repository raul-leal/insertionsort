#include <stdio.h>

#include "insertion_sort.h"

void printArray(Element *array, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        element_print(array[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

void insertionSort(Element* array, int size, bool withTrace){
    int cur = 1;
    while(cur < size){
        int temp = array[cur];
        for(int i=cur; i>0; i--){
            if(i-1 == 0 && array[i-1] > temp){
                array[i] = array[i-1];
                array[i-1] = temp;
                if(withTrace)
                    printArray(array, size);
                break;
            }else if(array[i-1]>temp){
                array[i] = array[i-1];
            } else if(array[i-1] <= temp){
                array[i] = temp;
                if(withTrace)
                    printArray(array, size);
                break;
            }
        }
    cur++;
    }
}

/* NÃO COPIAR ESSA PARTE

int findPartition(Element* array, int size){
    int i = 1;
    for(i; i<size-1; i++){
        if(array[i] < array[0]){
            break;
        }
    }
    return i;
}

void insertionSort(Element *array, int size, bool withTrace){
    //Primeiro elemento da partição não ordenada
    int first = findPartition(array, size);
    while(first < size){
        int temp = array[first];
        for(int i = first-1; i>=0; i--){
            if(array[i] < temp){
                array[i+1] = temp;
                if(withTrace)
                    printArray(array, size);
                break;
            }
            else if(i == 0){
                array[i+1] = array[i];
                array[i] = temp;
                if(withTrace)
                    printArray(array, size);
                break;
            }
            else if(array[i] > temp){
                array[i+1] = array[i];
            }
        }
        first++;
}
*/
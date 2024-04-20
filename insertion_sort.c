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
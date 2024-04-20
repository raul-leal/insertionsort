#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

#include <stdbool.h>

#include "element.h"

void printArray(Element *array, int size);
void insertionSort(Element *array, int size, bool withTrace);

#endif
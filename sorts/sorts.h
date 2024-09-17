//bubble_sort, selection_sort,insertion_sort, shell_sort
//
#ifndef SORT_H
#define SORT_H
#include <iostream>
#include <unistd.h>
void bubbleSort(int* array, int size);
void selectionSort(int* array, int size);
void swap(int &First, int &Second);
#include "sorts.cpp"
#endif
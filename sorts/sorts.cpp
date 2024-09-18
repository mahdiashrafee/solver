//implimentation of array
#include "sorts.h"
void swap(int &First, int &Second){
    int temp = First;
    First = Second;
    Second = temp;
    std::cout<<"Swapping "<<First<<" With " <<Second<<std::endl;//for animation
    usleep(700000);
}

void bubbleSort(int* array, int size){
    std::cout<<"Bubble Sort in Process\n"; //for animation
    usleep(2000000);
    for(int i = 0; i<size; i++){
        for(int i = 0; i<size-1; i++){
            if(array[i]>array[i+1]){
                swap(array[i],array[i+1]);
            }
    }
    }
    std::cout<<"Sorted ";
}
void selectionSort(int* array, int size){
  std::cout<<"Selection Sort in Process\n"; //for animation
  usleep(2000000);

  for(int j = 0; j<size-1; j++){
    int currMinimum = j;
    for(int currPos = j+1 ;currPos<size; currPos++){
        if(array[currMinimum]>array[currPos]){
            currMinimum = currPos;
        }
    }
    swap(array[currMinimum],array[j]);
  } 
  std::cout<<"Sorted ";
}
void insertionSort(int* array, int size){
    std::cout<<"Insertion Sort Here";
}
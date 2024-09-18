//implimentation of array
#include "sorts.h"


void printSorts(){
    std::cout<<"Options: \n";
    std::cout<<" 1. Bubble Sort the Info\n";
    std::cout<<" 2. Selection Sort the Info\n";
    std::cout<<" 3. Insertion Sort the Info\n";
    std::cout<<" 4. Go back\n"; 
    std::cout<<":";    
}
void optionsSorts(int* array){
    char input;
     while(true){
        std::cin>>input;
         switch(input){
            case '1': 
                printArray(array,7);
                bubbleSort(array, 7);
                printArray(array, 7);
                break;
            case '2': 
                printArray(array,7);
                selectionSort(array, 7);
                printArray(array, 7);
                break;
            case '3':
                printArray(array,7);
                insertionSort(array, 7);
                printArray(array, 7);
                break;
            case '4':
                return;   
         }
         printSorts();
     }
}
void swap(int &First, int &Second){
    int temp = First;
    First = Second;
    Second = temp;
    std::cout<<"Swapping "<<First<<" With " <<Second<<std::endl;//for animation
    usleep(700000);
}

void bubbleSort(int* array, int size){
    std::cout<<"Bubble Sort in Process\n"; 
    usleep(2000000);//for animation
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
  std::cout<<"Selection Sort in Process\n";
  usleep(2000000); //for animation

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
    std::cout<<"Insertion Sort in Process\n";
    usleep(2000000); //for animation

    for(int i = 0; i<size-1; i++){
        if(array[i]>array[i+1]){
           for(int j=i; j>=0; j--){
            if(array[j]>array[j+1])
                swap(array[j],array[j+1]);
           }          
        }          
    }
    std::cout<<"Sorted ";
}
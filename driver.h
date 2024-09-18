#include <iostream>

void print(){
     std::cout<<"Options: \n";
     std::cout<<" 1. Display Info\n";
     std::cout<<" 2. Enter Info\n";
     std::cout<<" 3. Bubble Sort the Info\n";
     std::cout<<" 4. Selection Sort the Info\n";
     std::cout<<" 5. Insertion Sort the Info\n";
     std::cout<<" 9. Exit\n";
     std::cout<<":";
}
void printArray(int* array, int size){
    std::cout<<"Array: \n";
    for(int i = 0;i<size; i++)
        std::cout<<array[i]<<" ";
    std::cout<<"\n"; //new line
}
int* getInput(){
    int* array = new int[7];
    for(int i = 0; i< 7; i++){
        std::cin>>array[i];

    }
    return &array[0];
}
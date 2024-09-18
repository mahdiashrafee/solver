#ifndef DRIVER_H
#define DRIVER_H
#include <iostream>

void print(){
     std::cout<<"Options: \n";
     std::cout<<" 1. Display Info\n";
     std::cout<<" 2. Enter Info in an Array\n";
     std::cout<<" 3. Enter Info in a Tree\n";
     std::cout<<" 4. Do Sorts\n";
     std::cout<<" 5. Do Searches\n";
     std::cout<<" 6. Do Advanced Sorts\n";
     std::cout<<" 7. Do Advanced Searches\n";
     std::cout<<" 8. Exit\n";
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
#endif

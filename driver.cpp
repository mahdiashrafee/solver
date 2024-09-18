#include "driver.h"
#include "./sorts/sorts.h"
#include "./advanced_sorts/advanced_sorts.h"
#include "./searches/searches.h"
#include "./advanced_searches/advanced_searches.h"


int main(){
    char input;
    int *array = nullptr;

    while(true){
        print();
        std::cin>>input;

        switch(input){
            case '1':
                if(array)
                    printArray(array,7);
                break;
            case '2':
                array = getInput();
                break;   
            case '3': 
                printArray(array,7);
                bubbleSort(array, 7);
                printArray(array, 7);
                break;
            case '4':
                printArray(array,7);
                selectionSort(array, 7);
                printArray(array, 7);
                break;
            case '5':
                printArray(array,7);
                insertionSort(array, 7);
                printArray(array, 7);
                break;
            case '9':
                return 0;
                break;
            default:
                std::cout<<"Not available Yet\n";    
        }
    
    }
    
    
    
    

}
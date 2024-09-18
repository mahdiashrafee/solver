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
           // case '3'://treeInput
            case '4':
                printSorts();
                optionsSorts(array);  
            //case '6': //Search    
            //case '5': //advancedSorts
            //case '7': //advancedSearch
            
            case '8':
                return 0;
                break;
            default:
                std::cout<<"Not available Yet\n";    
        }
    
    }
    
    
    
    

}
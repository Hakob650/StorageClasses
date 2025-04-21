#include "staticArray.h"
int main(){
        StaticArray arr;
        initArray(&arr,0);
   
        push_back(&arr,5);
        push_back(&arr,2);
        push_back(&arr,8);
        push_back(&arr,1);
        push_back(&arr,2);
        push_back(&arr,7);
  
        printArray(&arr);
  
        sortArray(&arr);
        printf("After sorting");
        printArray(&arr);
  
        printf("index of 7: %d\n",Find(&arr,7));
  
        pop_back(&arr);
        printf("After popping last element");
        printArray(&arr);
  
        Fill(&arr,9);
        printf("After filling");
        printArray(&arr);
  
        return 0;
  }


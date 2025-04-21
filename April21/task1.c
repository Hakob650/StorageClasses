 #include "staticArray.h"
   void initArray(StaticArray *arr,int value){
       arr->size=0;
       arr->maxSize=MAX_SIZE;
       for(size_t i=0;i<MAX_SIZE;++i){
           arr->data[i]=value;
       }
   }
   void push_back(StaticArray *arr,int value){
      if(arr->size<arr->maxSize){
          arr->data[arr->size++]=value;
      }
  }
  void pop_back(StaticArray *arr){
      if(arr->size>0){
          arr->size--;
      }else{
          printf("Array is empty");
      }
  }
  int Find(const StaticArray *arr,int value){
      for(size_t i=0;i<arr->size;++i){
          if(arr->data[i]==value){
              return (int)i;
          }
      }return -1;
  }
  void sortArray(StaticArray *arr){
      for(size_t i=0;i<arr->size-1;++i){
          for(size_t j=0;j<arr->size-i-1;++j){
              if(arr->data[j]>arr->data[j+1]){
                  int tmp=arr->data[j];
                  arr->data[j]=arr->data[j+1];
                  arr->data[j+1]=tmp;   }
          }
      }
  }
  void Fill(StaticArray *arr,int value){
      for(size_t i=0;i<arr->maxSize;++i){
          arr->data[i]=value;
      }arr->size=arr->maxSize;
  }
  void printArray(const StaticArray *arr){
      printf("Array(size=%zu): ",arr->size);
          for(size_t i=0;i<arr->size;++i){
              printf("%d",arr->data[i]);
          }printf("\n");
  }


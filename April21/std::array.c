#include "staticarray.h"

void initArray(StaticArray* arr) {
    arr->size=0;
    arr->maxSize=MAX_SIZE;
}

void push_back(StaticArray* arr,int value){
    if (arr->size<arr->maxSize){
        arr->data[arr->size++]=value;
    } else{
        printf("Array is full.\n");
    }
}

void pop_back(StaticArray* arr){
    if (arr->size>0){
        arr->size--;
    } else{
        printf("Array is empty.\n");
    }
}

int find(const StaticArray* arr,int value){
    size_t i;
    for (size_t i=0;i<arr->size;++i){
        if (arr->data[i]==value){
            return (int)i;
        }
    }
    return -1;
}

void sortArray(StaticArray* arr){
    for (size_t i=0;i<arr->size;++i){
        for (size_t j=0;j<arr->size-i-1;++j){
            if (arr->data[j]>arr->data[j+1]){
                int temp=arr->data[j];
                arr->data[j]=arr->data[j+1];
                arr->data[j+1]=temp;
            }
        }
    }
}

void fill(StaticArray* arr,int value){
    for (size_t i=0;i<arr->maxSize;++i){
        arr->data[i]=value;
    }
    arr->size=arr->maxSize;
}

void printArray(const StaticArray* arr) {
    for (size_t i=0;i<arr->size;++i){
        printf("%d ",arr->data[i]);
    }
    printf("\n");
}


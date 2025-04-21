#ifndef STATIC_ARRAY_H
#define STATIC_ARRAY_H
#include <stdio.h>
#define MAX_SIZE 100
   
typedef struct {
    int data[MAX_SIZE];
    size_t size;
    size_t maxSize;
}StaticArray;
  
void initArray(StaticArray *arr,int value);
void push_back(StaticArray *arr,int value);
void pop_back(StaticArray *arr);
int Find(const StaticArray *arr,int value);
void sortArray(StaticArray *arr);
void Fill(StaticArray *arr,int value);
void printArray(const StaticArray *arr);
  
#endif

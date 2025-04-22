#include "staticarray.h"

int main() {
    StaticArray arr;
    initArray(&arr);

    push_back(&arr,5);
    push_back(&arr,2);
    push_back(&arr,8);
    push_back(&arr,1);
    push_back(&arr,2);
    push_back(&arr,7);

    printf("Initial array:\n");
    printArray(&arr);

    sortArray(&arr);
    printf("After sorting:\n");
    printArray(&arr);

    printf("Index of 7:%d\n",find(&arr,7));

    pop_back(&arr);
    printf("After popping last element:\n");
    printArray(&arr);

    fill(&arr, 9);
    printf("After filling:\n");
    printArray(&arr);

    return 0;
}


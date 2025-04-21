#include <stdio.h>
void printCallCount(){
    static int count=0;
    count++;
    if(count==1){
        printf("Function has been called %d time.\n",count);
    }else{
        printf("Function has benn called %d times.\n",count);
    }
}
int main(){
    printCallCount();
    printCallCount();
    printCallCount();

    return 0;
}

#include <stdio.h>
int isPrime(int num){
    if(num<=1){
        return 0;
    }for(int i=2;i*i<=num;++i){
        if(num%i==0){
            return 0;
        }
    }return 1;
}
int NextPrime(){
    static int current=1;
    current++;

    while(!isPrime(current)){
        current++;
    }
    return current;
}
int main(){
    printf("%d\n",NextPrime());
    printf("%d\n",NextPrime());
    printf("%d\n",NextPrime());
    printf("%d\n",NextPrime());
    printf("%d\n",NextPrime());
    printf("%d\n",NextPrime());
    printf("%d\n",NextPrime());
    printf("%d\n",NextPrime());
    printf("%d\n",NextPrime());
    printf("%d\n",NextPrime());
    printf("%d\n",NextPrime());
    printf("%d\n",NextPrime());
    printf("%d\n",NextPrime());
    printf("%d\n",NextPrime());
    printf("%d\n",NextPrime());
    printf("%d\n",NextPrime());
    printf("%d\n",NextPrime());
    printf("%d\n",NextPrime());

}
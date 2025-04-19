#include <stdio.h>
int var1=10;
static int var2=100;
static int var3;
void func(){
        int var4=200;
        printf("Address of global variable: %p\n",&var1);
        printf("Address of static initialaized variable: %p\n",&var2);
        printf("Address of static uninitialized variable: %p\n",&var3);
        printf("Address of local variable: %p\n",&var4);
}
int main(){
        func();
        return 0;
}

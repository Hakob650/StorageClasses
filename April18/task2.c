#include <stdio.h>
extern int x;
void func(){
         int y=1;
         static int z=1;
         printf("y=%d\n",y);
         printf("z=%d\n",z);
         y++;
         z++;
}
int main(){
        func();
        func();
        func();
        printf("x=%d\n",x);
        return 0;
}

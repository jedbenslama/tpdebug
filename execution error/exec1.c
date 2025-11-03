#include <stdio.h>

int main() {
    int a = 2;
    int b = 0;
    if(b!=0){
        int c = a / b;
        printf("%d\n", c);
    }else{
        printf("division par zero impossible");
    }
    return 0;
}

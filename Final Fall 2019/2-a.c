#include <stdio.h>
void func(int x);
int main(){
    func(3);
    return 0;
}

void func(int x){
    if(x==1) return;
    else {
        printf("%d", x);
        func(x-1);
        printf("%d", x);
    }
}
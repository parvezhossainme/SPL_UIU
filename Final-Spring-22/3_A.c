#include <stdio.h>

int countDigit(int num ){
    int sum = 0;
    while ( num != 0 ) {    
        int rem = num%10;
        num = num / 10;
        sum = sum+rem;
    }
    return sum;
}

int main(){
    int num;
    scanf("%d", &num);
    int res = countDigit(num);
    printf("%d\n",res);
    return 0;
}
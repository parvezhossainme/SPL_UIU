#include <stdio.h>

int digitSum(int number){
    int sum = 0;
    while (number != 0){
        int rem = number %10;
        sum = sum + rem;
        number = number / 10;
    }
    return sum;
}

int main(){
    
    int num;
    scanf("%d", &num);
    int ans = digitSum(num);
    // idk whats digitPosition on qn ;
    printf("%d", ans);
    return 0;
}
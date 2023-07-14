#include <stdio.h>

// a user define function
void perform_operation(int num1,int num2, float *sum,float *sub, float *mul, float *div){
    sum = num1+num2;
    sub = num1-num2;
    mul = num1*num2;
    div = num1/num2;
}

int main(){
    
    int num1,num2;
    scanf("%d%d",&num1, &num2);
    
    float sum,sub,mul,div;
    perform_operation(num1,num2,&sum,&sub,&mul,&div);
    printf("\nSum:%.2f\nSub:%.2f\nMul:%.2f\nDiv:%.2f\n",sum,sub,mul,div);
    return 0;
}


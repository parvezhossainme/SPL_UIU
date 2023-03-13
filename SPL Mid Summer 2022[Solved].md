

# 1 -> (a)
```
#include <stdio.h>
void main() {
    int num1 = 5, num2;
    char chr = 'q';
    scanf("%d", &num2);
    num1 = num2 % chr;
    printf("Result is = %d ", num1);
}
```
# 1 -> (b)
```
largest_val = valid
smallest-val = Invalid due to hyphen
while = Invalid due to reserved for c
2ndNum = Invalid due to started with digit
!New = Invalid due to use of special character
avg marks = Invalid due to space
val9 = valid
```
# 1 -> (c)
```
float a=5*(5/2) = 10(float) = 10.000000
int b=5*(5/2) = 10(int) = 10
float c=5*(5.0/2) = 12.500000
int d=5*(5.0/2) = 12.5(int) = 12
```

# 2 -> (a)
```
Input: num=1
Output:
            i = 12 , j = 5, sum = 12

Input: num=3
Output:
            i = 0 , j = 0,  sum = 0          [no break to default]
```

# 2 -> (b)
```
int sum=0, i, a = 1, b, x = 1, y = 1;
for(i=1; i<=5; i++) {
    sum = sum + a;
    b = 6*x + 1;
    a = a + b;
    y++;
    x = x + y;
}

// Ans:
i == 1 :
            sum = 0+1 = 1
            b = 6*1+1 = 7
            a = 1 + 7 = 8
            y = 2
            x = 1 + 2 = 3
i == 2 :
            sum = 1+8 = 9
            b = 6*3+1 = 19
            a = 8+19 = 27
            y = 3
            x = 3+3 = 6
i == 3 :
            sum = 
            b = 
            a = 
            y = 
            x = 
i == 4 :
            sum = 
            b = 
            a = 
            y = 
            x = 
i == 5 :
            sum = 
            b = 
            a = 
            y = 
            x = 
```
# 3 -> (a)
```
#include<stdio.h>
void main() {
    int n = 3, i, j, sum = 0;
    i=0;
    do {
        j=0;
        do {
            if(i == j) sum += i + j;
            else if(i > j) sum += i + n;
            else sum += n – j;
            j++;
        } while(j <= i);
        i++;
    } while(i < n);
}
```
# 3 -> (b)
```
#include<stdio.h>
int main(){
    float count=0,sum=0,avg;
    while(69){
        int num;
        scanf("%d",&num);
        if(num > 0) {
            sum = sum + num;
            count++;
            printf("Online average: %f\n",sum/count);
        } else if (num == 0) break;
    }
    printf("Average: %f\n",sum/count);
    return 0;
}
```
# 4 -> (a)
```
int F[6] = {0};
int i, n;
n = 3;
for(i = 0; i<6 ; i++){
    F[i] = n+i;
    if(F[i]%2 == 0){
        F[i] *= 2;
    }
}
// Manual Trace:
i == 0: F[0] = 3 ; if(false)
i == 1 : F[1] = 4 ; if(true) F[1]=4*2=8
i == 2 : F[2] = 5 ; if(false)
i == 3 : F[3] = 6 ; if(true) = F[3]=6*2=12
i == 4 : F[4] = 7 ; if(false)
i == 5 : F[5] = 8 ; if(true) = F[5] = 8*2=16

```
# 4 -> (b)
```
#include<stdio.h>
int main(){
    int myarr[100];
    int n;
    scanf("%d",&n);
    
    // input
    for(int i = 0; i < n ; i++){
        scanf("%d",&myarr[i]);
    }

    int oddavg,oddsum=0,oddcount;

    printf("Index\tValue\n");
    printf("-----\t-----\n");
    for(int i = 0; i < n ; i++){
        printf("%d\t\t%d\n",i,myarr[i]);

        // for avg at odd indices
        if(i%2==1){
            oddsum = oddsum + myarr[i];
            oddcount++;
        }
    }
    printf("\nAvg of odd number indices: %d",oddsum/oddcount);
    return 0;
}
```
# 5 -> (a)
```
#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    for(int i = 1 ; i <= n ;i++){
        if(i%2==1) sum = sum+ i;
        else sum = sum -i;
    }

    printf("%d\n",sum);
    return 0;
}
```
# 5 -> (b)
```
#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    for(int i = 1 ; i <=n ; i++){
        for(int j = n ; j >= i ; j--){
            printf("%d  ",2*j);
        }
        printf("\n");
    }
    return 0;
}
```



























































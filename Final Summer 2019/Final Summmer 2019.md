# 1-> (A)
```
    str1[7] --- str2[4]
    str1=CSE
    str2=UIU
    Loop : str1 = CSEUIU

    Output: CSEUIU      [using puts(str1)]
               UIUESC       [strrev used] 
```

# 1 -> (B)
```
#include <stdio.h>
int main(){
    
    int n;
    scanf("%d", &n);
    int nums[n][n];

    // Input nums
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &nums[i][j]);
        }
    }

    // Display even column wise check
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if( nums[j][i] % 2 == 0 ) printf("%d ",nums[j][i]);
        }
        printf("\n");
    }
    return 0;
}
```
# 2 -> A
```
    //a=11,b=25 [Global]
    Output: 11 25
    // a = call func(5.5)
        b=25+11=36
        Output: 5.500000
        // call func2(5,4.5)
            Output: 5 4.500000
            return; 
        return (b=36);
    a = 36
    // call func2(12,15.0)
        Output: 12 15.000000
        return
    Output: 36 36
```
# 2 -> b
```
#include <stdio.h>

int digitPosition(int number){
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
    int ans = digitPosition(num);
    printf("%d", ans);
    return 0;
}
```
# 3 -> A 
```
    // Recursive code for sum of digit in number
    Output: 12
               17
---------OR--Like--Summer-19F--------
    // i = 4 : sum = 50
    FileWrite: 50 50
    // i = 3 : sum = 50+40=90
    FileWrite: 40 90
    // i = 2 : sum = 90+30=120
    FileWrite: 30 120
    // i = 1 : sum = 120+20=140
    FileWrite: 20 120
    // i = 0 : sum = 140+10
    FileWrite: 10 150

```
# 3 -> B
```
#include <stdio.h>
int main(){
    
    FILE *fp;
    fp = fopen("check.txt","r");
    int numbers[10];
    for(int i=0;i<10;i++){
        fscanf(fp,"%d",&numbers[i]);
    }
    int max = numbers[0];
    for(int i=0;i<10;i++){
        // printf("%d ", numbers[i]);
        if( numbers[i] > max ) max = numbers[i];
    }
    printf("\n\tMax Value: %d\n", max);
    return 0;
}
```
# 5 -> A
```
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *a,*b,*sum;

    // Allocating memory for the pointers
    a = (int*) malloc(sizeof(int));
    b = (int*) malloc(sizeof(int));
    sum = (int*) malloc(sizeof(int));

    scanf("%d%d", a,b);

    *sum = *a+*b;
    printf("Sum: %d\n", *sum);

    free(a); free(b); free(sum);    // free heap memory
    return 0;
}
```
# 5 -> (b)
```
    // here x copy by referecee and y copy by value
    Output:10 20
              21 20
```
# 5 -> (b) 0r
```
    // A[5]={10, 20, 30, 40, 50};
    Output: 50 40 30 20 10
    // call func(A,5)
        // A[]=b[]= {10,42,96,172,270}
    Output: 10 42 96 172 270
```
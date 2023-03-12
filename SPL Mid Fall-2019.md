
## It's not 100% Correct! Just my ways to solve these -parvezhossainme
--------------------------------------------------------------------
--------------------------------------------------------------------

# 1 -> (a)
```
#include<stdio.h>
int main(){
    float a, b;
    float div;
    scanf(“%f%f”, &a, &b);
    div=a/b;
    printf(“%d”, div);
    return 0;
}
```
# 1 -> (b)
```
Sum val = Not valid [ Reason: No Space allowed]
Sum_val = Valid 
$Sumval = Not Valid [ $ not allowed]
Sum9val = Valid, 
9Sumval = Not Valid [ Reason: Can not start with digit] 
sum val = Not Valid [ No Space Allowed ]
```

# 1 -> (c)
```
int a=39/2;            [Ans: 19]
int b=39.0/2;         [And: 19]
float c=39.0/2;       [Ans: 19.500000]
float d=39/2;          [Ans: 19.000000]
int e=39%4;          [Ans: 3]
float f= (float) (4%39);  [ Ans: 4.000000]
```
# 2 -> (a)
```
Input: 4
Output: Start
           Hello
           Stop

Input: 5
Output: Start
           Hello
           Stop

Input: 10
Output: Start
           World
           Stop

Input: 12
Output: Start
           World
           Stop
```
# 2 -> (b)
```
#include<stdio.h>
int main(){
    int choice;
    switch(choice){
        case 1:
                printf("CSE\n");
                break;
        case 2:
                printf("CSE\n");
                break;
        case 3:
                printf("UIU\n");
                break;
        default:
                printf("Bye");
                // For input positive integers! 
    }
    return 0;
}
```
# 3 -> (a)  [ FlowChart]
```
\\ Code of Flowchart:
#include<stdio.h>
int main(){
    int sum = 0;
    for(int i = 2 ; i <=100 ;i=i+2)
        sum = sum + i;
    printf("%d\n",sum);
}
```

# 3 -> (b)
```
#include<stdio.h>
int main(){
    float avg,sum=0;
    int i = 1;
    while(i <= 4){
        printf("num= ");
        float num;
        scanf("%f",&num);
        if(num > 0.0){
            sum = sum + num;
            printf("Average=%.1f\n",sum/i);
            i++;
        }
    }
}
```
#  4 -> (a)
```
i==3:
        j==1,2,3: 3 5 7
i==2: 
        j==1,2: 3 5
i==1:
        j==1: 3

Code Output:
    357
    35
    3
```

# 4 -> (b)
```
#include<stdio.h>
int main(){
    int parv[500];
    int n,sum=0;
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&parv[i]);
        if(i%2==1) sum = sum+ parv[i];
    }
    printf("%d\n",sum);   // (iii)

    // Display (iv)
    for(int i = 0 ; i < n ; i++)
        printf("%d ",parv[i]);
    return 0;
}
```

# 5 -> (a)
```
#include <stdio.h>
int main()
{
    char str1[7] = {'\0'};
    char str2[7] = {'0'};
    strcpy(str1, "CSE");    // str1 == CSE
    strcpy(str2, "UIU");    // str2 == UIU
    strcat(str2, str1);       // str2 == UIUCSE
    strrev(str2);             // str2 = ESCUIU
    puts(str2);
    printf("\n");
    puts(str1);               // Ouput like printf("%s",str1);
    int i = strlen(str2);   // str2 has 6 char
    printf("\nThe length of % s is = % d", str2, i);
}

Output:
-------
ESCUIU

CSE

The length of ESCUIU is =  6
```

# 5 -> (b)
```
#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int A[n][n];

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            scanf("%d",&A[i][j]);
        }
    }

    // find max value in i-th row [ row starts from 0]
    scanf("%d",&i);
    int max = A[i][0];
    for(int j = 0 ; j < n ; j++){
        if(A[i][j] > max) max = A[i][j];
    }

    printf("%d\n",max);

    return 0;
}
```

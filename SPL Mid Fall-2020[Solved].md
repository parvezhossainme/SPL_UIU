## It's not 100% Correct! Just my ways to solve these -parvezhossainme
--------------------------------------------------------------------
--------------------------------------------------------------------
# 1 -> (a)
```
// ID: 0112230072
// Last 3 Digit: 072

// int a = LAST_THREE_DIGIT_OF_YOUR_STUDENT_ID %5;
    a == 2 [Remainder]
// int b = LAST_THREE_DIGIT_OF_YOUR_STUDENT_ID /5;
    b == 14  
// float c = LAST_THREE_DIGIT_OF_YOUR_STUDENT_ID /5;
    c == 14.000000
// float d = (float) LAST_THREE_DIGIT_OF_YOUR_STUDENT_ID/5;
    d == 14.400000
// float e = a*b-d/c;
    e == 26.971428
```
# 1 -> (b)
```
// ID: 0112230072
// Last 3 Digit: 072

i) Input: 72
    Output: 
                BEGIN
                NICE
                END
ii) Input: 72+11 = 83
    Output: 
                BEGIN
                CSE
                END              
iii) Input: 72+21 = 93
    Output: 
                BEGIN
                NICE
                END     
```

# 2 -> (a)
```
// My ID: 0112230072
a == 72%2 + 3 == 3
b == 2
c == 4

Output:
        START
        6  4  12    //no_Break
        4  4  7
        STOP
```

# 2 -> (b)
```
#include<stdio.h>
int main(){
    int a = 072;
    int b = 2+3;
    a++;
    b--;
    if(a < b ) printf("Division not possible");
    else{
        if(a%b==0){
            printf("%d %d %d\n",a,b,a/b);
        } else {
            printf("%d %d %d %d\n",a,b,a/b,a%b);
        }
    }
    return 0;
}
```
# 3 -> (a)
```
// n = 072
// i = 070

Output:
            70   70
            71    141
            72   213 //broke
            73   213
```

# 3 -> (b)
```
// a == 072
// a == 2+2 == 4
#include<stdio.h>
int main(){
    int sum = 0,a = 72 ,i = 4;
    for(int j = 0 ; j < 11 ; j++){
        sum = sum + ( a + j*i );
    }
    printf("%d",sum);
    return 0;
}
```
# 4 -> (a)
```
// a = 73, b = 74, c = 75, d = 76
Output:
            A[3]=76
            A[1]=74
```
# 4 -> (b)
```
#include<stdio.h>
int main(){
    int A[10];
    int a = 072, i = 2+2;
    for(int j = 0; j <10 ; j++){
        A[j] = a + j*i;
    }

    //Display
    for(int i = 9; i >=0 ; i--){
        printf("%d ",A[i]);
    }
    return 0;
}
```




















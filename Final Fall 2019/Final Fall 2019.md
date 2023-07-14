# 1 -> (a)
```
    // a, b = global variable ;
    // for manual trace or output first mark the output function
    
    Output: 25 11   //b,a from : a=11,b=25

    // call func1(5.5)
        // b = 25*11=275
        Output: 5.500000
        // call func2(5,4.5)
            Output: 5 4.500000
            return;
        return (275-1)
    // a = 274
    // call func2(12,15.0)
        Output: 12 15.000000
        return;
    Output: 274 275 //a,b

```

# 1 -> (b)
```
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
```

# 2 -> (a)
```
    // NB: Recursion of func(int x)
    // call func(3) : from main
    Output: 3
    // call func(3-1)
        Output: 2
        // call func(2-1)
            return : for base condition on resursive function
        Output: 2
    Output: 3

    //---------------
    // Total Output as no newLine here
    Output: 3223
```

# 2-> (b)       ****
```
#include <stdio.h>

int add_All(int my_arr[], int size){
    // Base case: when there is only one element left in the array
    if (size == 1) {
        return my_arr[0];
    }
    // Recursive case: add the first element to the sum of the rest
    else {
        return my_arr[0] + add_All(my_arr + 1, size - 1);
    }
}

int main(){
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int oneD[size];
    printf("Enter %d integers for the array:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &oneD[i]);
    }
    int result = add_All(oneD, size);
    printf("The sum of the array elements is: %d\n", result);
    return 0;
}

```
# 3 ( 8 Marks )
```
#include <stdio.h>

typedef struct {
    char name[20];
    int id;
    float marks;
} Student;

int main(){

    Student students[4];
    for(int i=0;i<4;i++){
        gets(students[i].name);
        scanf("%d", &students[i].id);
        getchar();
        scanf("%f", &students[i].marks);
        getchar();
    }

    for(int i=0;i<4;i++){
        printf("%s\t%d\t%.1f\n",students[i].name,students[i].id,students[i].marks);
    }

    int min_In = 0,max_In=0;
    for(int i=0;i<4;i++){
        if( students[i].marks < students[min_In].marks ) 
            min_In = i;
        if( students[i].marks > students[max_In].marks ) 
            max_In = i;
    }

    printf("Minimum marks holder student: %s %d\n",students[min_In].name,students[min_In].id);
    printf("Maximum Marks holder student: %s %d\n",students[max_In].name,students[max_In].id);
        
    return 0;
}
```
# 4 -> (a)
```
    // It will output in the dest.txt file

    // i = 4 : if(T) => sum = 50
    FileWrite: 50

    // i = 2 : if(T) => sum = 50+30=80
    FileWrite: 30

    // i = 0 : if(T) => sum = 80+10=90
    FileWrite: 10

    // Outof Loop:
    FileWrite: 90
------dest.txt------
50
30
10
90

```
# 4 -> (b)
```
#include <stdio.h>

int main() {

    float num1, num2, sum;
    
    FILE *fp;
    fp = fopen("input.txt", "r");
    
    if (fp != NULL) {
        fscanf(fp, "%f", &num1);
        fscanf(fp, "%f", &num2);
        fclose(fp);
        sum = num1 + num2;
        printf("The sum of %.2f and %.2f is %.2f.\n", num1, num2, sum);
    } else {
        printf("Error opening the file.\n");
    }

    return 0;
}
```
# 5 -> (a)
```
#include <stdio.h>

void change( int *x, int *y){
    *x = *x+10;     // a = 15
    *y=*y-3;    // b = 6
    return;
}

int main(){

    int a=5,b=9;
    printf("%d %d\n",a,b);          // Output: 5 9
    change(&a,&b);
    printf("%d %d\n",a,b);          // Output: 16 6
    return 0;
}
```
# 5 -> (b)
```
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
```
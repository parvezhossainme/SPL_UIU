# 1
```
    a = 0072%39=33
    b = call func1(a=33)
        param: x = a = 33
        c = x+a = 66
        call func2(&c,b)
            c = 66*2=132 
            y = 33
            return;
        return 132 to b
    b = 132
    call func2(&a,b)
        a = 33*2=66
        y=66        
```

# 2
```
    a = 0072%5=2
    b = 0072%4=0
    c = 0072%6=0

    my_str = "Steve Wozniak" ; arr[2]
    my_str[0] = toupper(mystr[0]); // no change
    my_str = "Steve Wozniak" 
    temp_str = ""; // empy as c=0 ta char copy
    strcat(my_str,temp_str); // no change
    Final : "Steve Wozniak"
```
# 3
```
    a =0072;
    num[]={72,2,12,12,32};
    FileWrite: Hello Vaxxers! (\n)
    FileWrite: 32 (\n) 12 (\n) 12 (\n) 2 (\n) 72

test.txt
-------
Hello Vaxxers!
32
12
12
2
72 
```
# 4
```
    b = 72%11=6
    a[5]= { 7,8,9,10,11}
    
    p1 = a // 7 er memory address p te gese
    t = 7 then *p1=8
    u = 8
    v = 8 ; p1 point to 2nd element
    w = 9
```
# 5
```
#include <stdio.h>
#define SIZE 4
#define student_ID 72
int idValues[SIZE];

// Qn-e : Function Prototype
void initialValues();
void takeInput();
int elementProd(int arr[],int size);

int main(){

    // QN-a -> check initial
    initialValues();
    for(int i=0;i<SIZE;i++){
        printf("%d ", idValues[i]);
    }

    // QN-b ->takeInput
    takeInput(idValues);
    for(int i=0;i<SIZE;i++){
        printf("%d ", idValues[i]);
    }

    // Qn-c
    int mul_Result; 
    mul_Result = elementProd(idValues,SIZE);
    printf("All Elements Multiply Result: %d\n", mul_Result);
        
    return 0;
}

void initialValues(){
    for(int i=0;i<SIZE;i++){
        idValues[i] = student_ID%11+3*i;
    }
}

void takeInput(){
    for(int i=0;i<SIZE;i++){
        scanf("%d", &idValues[i]);
    }
}

int elementProd(int arr[],int size) {
    int pp = 1;
    for(int i=0;i<4;i++){
        pp = pp * arr[i];
    }
    return pp;
}
```
# 6
```
#include <stdio.h>
#include <string.h>

int main(){

    char str_a[36] = "MD Parvez Hossain,0112230072";
    gets(str_a);
    char str_b[strlen(str_a)];

    int x = 0;
    for(int i=0 ; str_a[i];i++){
        if(str_a[i]>='0' && str_a[i] <= '9'){
            str_b[x] = str_a[i];
            x++;
        }
    }
    if (x == 0 ) strcpy(str_b,"0");
    printf("%s\n",str_b);
    
    return 0;
}
```
# 7
```
#include <stdio.h>
typedef struct {
    char student_ID[15];
    char student_Name[20];
    float marks[5];
} Student_Info;

// mydefault value -> Can be also done witin main : Its just new way to know
Student_Info student = {
    .student_ID = "0112230072",
    .student_Name = "Parvez Hossain",
    .marks = {0, 0, 0, 0, 0}
};


int main(){

    Student_Info students[16];
    for(int i=0;i<16;i++){
        gets(students[0].student_Name);
        gets(students[0].student_ID);
        int x =0;
        for(int i=0;i<5;i++){
            scanf("%d", &students[0].marks[x]);
            x++;
        }
    }
    
    return 0;
}
```

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



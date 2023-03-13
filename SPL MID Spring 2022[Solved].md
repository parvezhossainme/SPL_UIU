

# 1 -> (a)
```
// % require two integer operands
#include<stdio.h>
#include<math.h>
int main (){
    int n_, m = 5;
    scanf("%d", &n_);
    float p = (n_%m)/sqrt(6);
    printf("%f", p);
}
```
# 1-> (b)
```
_Num1   = Valid
1time   = Invalid [Can not start with digit]
$VALUE  = Invalid [ Can not start with special character] 
“myValue”   = Invalid [ Can not be enclosed with quotation mark ] 
num6    = Valid
first_name  = Valid 
last-name   = Invalid [can not contain hyphen or special character ]
f1x     = Valid
```
# 1 -> (c)
```
int a = 10.0/3*10;  == 3.333*10 == 33.33 (int) == 33
float b = (int)23.0%11; == 1 (float) = 1.000000
int c = (10 > 9 && 21 <= 19)*5; == ( 1 && 0)*5 == 0*5==0
float d = 7/2; == 3 (float) = 3.000000
```

# 2 -> (a)
```
Input: 4
Output: 
            Begin
            CSE
            END

Input: 5,10,12
Output: 
            Begin
            UIU
            END
```
# 2 -> (b)
```
[ Solved by Chatgpt ! As its every instructions is  commented better for understanding]
#include <stdio.h>

int main() {
    char category;
    int years_of_experience, num_family_members;
    float total_income;

    // Prompt the user for input
    printf("Enter employee category (X, Y, or Z): ");
    scanf("%c", &category);
    printf("Enter years of work experience: ");
    scanf("%d", &years_of_experience);
    printf("Enter number of family members: ");
    scanf("%d", &num_family_members);
    printf("Enter total family income per month (in BDT): ");
    scanf("%f", &total_income);

    // Check if the employee is eligible for the bonus
    if ((years_of_experience >= 12 && num_family_members > 5) || total_income < 1000.50) {
        printf("Congratulations, you are eligible for the bonus!\n");
    } else if ((category == 'Y' || category == 'Z') && num_family_members > 8 && total_income < 1100.78) {
        printf("Congratulations, you are eligible for the bonus!\n");
    } else if (category == 'X' && num_family_members > 6) {
        printf("Congratulations, you are eligible for the bonus!\n");
    } else {
        printf("Sorry, you are not eligible for the bonus.\n");
    }

    return 0;
}
```
# 3 -> (a)
```
int n = 5, sum = 0, a = 3, sign = 1;

Loop:
    i == 1 : 
                sum = 0 + 3*1 = 3
                a = a + 4 = 3 + 4 = 7
                sign = -1
    i == 2 : 
                sum = 3 + 7*-1 = -4
                a = a + 6 = 7 + 6 = 13
                sign = 1
    i == 3 : 
                sum = -4 + 13*1 = 9
                a = a + 4 = 13 + 4 = 17
                sign = -1
    i == 4 :
                sum = 9 + 17*-1 = -8
                a = a + 6 = 17 + 6 == 23
                sign = 1
    i == 5 :
                sum = -8 + 23*1 = 15
                a = a +4 = 23 + 4 = 27
                sign = -1
Out of Loop:
    15
```
# 3 -> (b)
```
#include<stdio.h>
int main(){
    int num,factorsum=0;
    scanf("%d",&num);
    for(int i = 1 ; i <= num ; i++){
        if(num%i==0) factorsum += i;
    }

    if(factorsum < num*2) printf("Deficient Number!");
    else printf("Not Defiecient Number");

    return 0;    
}
```
# 4 -> (a)
```
F[0]=1;
F[1]=1;
F[2] = 1+1 = 2
F[3] = 2+1 = 3
F[4] = 3+2 = 5
F[5] = 5+3 = 8

Output:
Within Loop: 
            1   1   2
            1   2   3
            2   3   5
            3   5   8
Out of Loop:
            5   8   13
```
# 4 -> (a)
```
#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int myarr[size];
    
    //input
    for(int i = 0 ; i < size ; i++){
        scanf("%d",&myarr[i]);
    }
    int max = myarr[0], inmax = 0, min = myarr[0], inmin = 0;

    for(int i = 0; i < size ; i++){
        if(myarr[i] > max){
            max = myarr[i];
            inmax = i;
        } 

        if(myarr[i] < min){
            min = myarr[i];
            inmin = i;
        }
    }

    printf("Max: %d, Index: %d\nMin: %d, Index: %d",max,inmax,min,inmin);
    
    return 0;
}
```
# 5 -> (a) [ Flowchart ]
```
#include <stdio.h>

int main() {
    char choice;

    // Always displays indicates us to use do-while loop
    do {
        printf("Enter 1 to display \"SPL is fun!\"\n");
        printf("Enter 2 to display \"(On campus) University life is the Best!\"\n");
        printf("Enter q to quit.\n");

        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                printf("SPL is fun!\n");
                break;
            case '2':
                printf("(On campus) University life is the Best!\n");
                break;
            case 'q':
                printf("Quitting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 'q');

    return 0;
}

```
# 5 -> (b)
```
#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);

    for(int i = 0 ; i < size ; i++){
        for(int j = 0; j < size ; j++){
            if(i==j || i+j == size-1){
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
```
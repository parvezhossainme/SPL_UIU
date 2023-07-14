# 1 -> A
```
    SIZE = 4
    
    // first scan loop
    21 24 27 30
    33 36 39 42
    45 48 51 54
    57 60 63 66

    // second loop
    21 21 23 27
    33 36 30 33
    45 48 51 36
    57 60 63 66

    // 3rd loop
    ai loop a 0.0 ar 3.3 bade sob jog kore i.j te save hobe

    // then all print



```






# 1-> B
```
#include <stdio.h>
#define SIZE 4
int main(){
    int matrix[SIZE][SIZE],sum=0;
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            scanf("%d", &matrix[i][j]);
            sum = sum + matrix[i][j];
        }
    }
    printf("Sum: %d\n", sum);
    return 0;
}
```
# 2 -> A
```
    // main()
    g_int a=6, b=0 , c=0 ;
    func3(6):
        int c = 2
        g_int a = 6*2 = 12
        return -> no capt
    Output : 12 0 0

    g_int b = func1(12)
        int p = 12
        g_int c = 12+12
        return c=24;
    g_int b = 24
    Output: 12 24 24

    func2(12,24)
        int x = 24
        int b = func3(24)
            int c = 2
            g_int a = 12*2 = 24
            return 24*2
        int b = 48
    
    Output: 24 24 24

    // Remark: Every output is Global variable [g_int]

```
# 2 -> B
```
#include <stdio.h>

void additems( int items[] , int add[], int n ) {
    for(int i=0;i<n;i++){
        items[i] = items[i] + add[i];
    }
}

void openDoor(char password[]){
    if (password = "Narnia") printf("Door to Narmia is open.\n");
    else printf("There is no door.\n");
}

int main(){
    
    int items[1000],add[1000];

    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &items[i]);
    }
    
    for(int i=0;i<n;i++){
        scanf("%d", &add[i]);
    }

    additems(items,add,n);

    char pass[20];
    scanf("%s",&pass);
    openDoor(pass);
    
    return 0;
}
```
# 3 -> A
```
#include <stdio.h>
#include <string.h>

// “Hello World”, “Programming is fun”
int main(){
    char str1[100],str2[100], str3[100];
    gets(str1); // str1 = Hello World
    scanf("%s",str2); // str2 = Programming
    strncpy(str3,str1,8); // str3 = Hello Wo
    strncat(str2,str3,4); // str2=ProgrammingHell
    strcpy(str3,str2); // str3= ProgrammingHell
    strncat(str3,str1, 3); // str3 = ProgrammingHellHell

    if (strcmp(str2,str3)>0) // \0 < H return -1;   // HE < HELLO
        strncpy(str1,str3,2);
    else 
        strncpy(str2,str3,2);   // str2 = ProgrammingHell

    // strncpy will replace Pr of str2 from Pr of str3 = same  result
    // printf("%s\n",str2);
    
    return 0;
}
```
# 3 -> B
```
    Substring check code
```

# 4 
```
#include <stdio.h>

typedef struct {
    char name[20];
    int id;
    int ct_marks[5];
    int total_marks; // for calculation add
} student_info;

void printHighest(student_info abc[]) {
    
    for ( int ct = 0; ct < 5; ct++){

        int each_ct = abc[0].ct_marks[ct] , h_ind=0;
        for(int i=0;i<50;i++){
            if( abc[i].ct_marks[ct] > each_ct){
                each_ct = abc[i].ct_marks[ct];
                h_ind = i;
            }
        }
        printf("Highest mark got : %s\n",abc[h_ind].name);

    }



}

int main(){

    student_info students[50];

    // input
    for(int i=0;i<50;i++){
        gets(students[i].name);
        scanf("%d", &students[i].id);
        for(int j=0;j<5;j++){
            scanf("%d", &students[i].ct_marks[j]);
        }
    }

    // display
    for(int i=0;i<50;i++){
        int total = 0;
        for(int j=0;j<5;j++){
            total = total + students[i].ct_marks[j];
        }
        students[i].total_marks = total;
    }

    // display each ct highest marks for each CT
    printHighest(students);
    
    return 0;
}
```

# 5 -> A
```
    array contains 6 values passed to f1 function

    f1 function check each value serially wtih the condition " if number is not divisible by 2 then print =>
    the ( value+index*2) \n

    Ans:
    5
    13
    19
```

# 5 -> B
```
#include <stdio.h>
int main(){
    
    FILE *fptr;
    fptr = fopen("sample.txt","r");

    int array[100],size=0;
    while( (fscanf(fptr,"%d",&array[size]) != EOF )){   
        size++;
    }
    fclose(fptr);

    FILE *writeF;
    writeF = fopen("Output.txt","w");
    for(int i=0;i<size;i++){
        if(array[i] % 2 == 0) 
             fprintf(writeF,"%d\n",array[i]);
        // printf("%d\n",array[i]);
       
    }
    fclose(writeF);

    return 0;
}
```

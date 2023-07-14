# 1-> A
```
#include <stdio.h>

#define MAX_SIZE 100

int isUT(int matrix[3][3], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != 0) {
                return 0; // Not upper triangular
            }
        }
    }
    return 1; // Upper triangular
}

int calculateDiagonalResult(int matrix[3][3], int n, int isUpperTriangular) {
    int result = 0;
    if (isUpperTriangular) {
        result = 1;
        for (int i = 0; i < n; i++) {
            result *= matrix[i][i];
        }
    } else {
        for (int i = 0; i < n; i++) {
            result += matrix[i][i];
        }
    }
    return result;
}

int main() {
    int n;
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int isUpperTri = isUT(matrix, n);
    int result = calculateDiagonalResult(matrix, n, isUpperTri);

    if (isUpperTri) {
        printf("Product of the main diagonal entries: %d\n", result);
    } else {
        printf("Sum of the main diagonal entries: %d\n", result);
    }

    return 0;
}
```
# 1 -> B
```
        int arr[][3] = { {4, 1, 7}, {5, 6, 12}, {3, 10, 11} };

        i = 0 ; j = 0  =>  
                            value=4
                            if2(true) [0][0] = 4*2=8
        i = 0 ; j = 1   =>
                            value = 1
                            if1(T) [0][1] = 1+1=2
                
                Final: { { 8,2,14} , {6,12,24} , {4,20,12}}
```

# 2 -> A
```
#include <stdio.h>
int main(){
    
    char str[100];
    gets(str);

    for(int i=0;str[i];i++){
        if( str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
        else if ( str[i] >= 'a' && str[i] <= 'z' ) str[i] -= 32;
    }

    printf("%s\n",str);
    return 0;
}
```
# 2 -> B
```
char str1[100] = "Hello";
char str2[100] = "Bonjour";
int i, k;
strncat(str1, "Maria", 2);
strncpy(str2, "Federick", 3);
i=strlen(str1);
for(k=0; str2[k] !='\0'; k++)
str1[i+k] = str2[k];
str1[i + k] = '\0';
puts(str2);
printf("\n");
puts(str1);
printf("\n");
strrev(str1);
puts(str1);
```
# 3 -> B
```
#include <stdio.h>

int countDigit(int num ){
    int sum = 0;
    while ( num != 0 ) {    
        int rem = num%10;
        num = num / 10;
        sum = sum+rem;
    }
    return sum;
}

int main(){
    int num;
    scanf("%d", &num);
    int res = countDigit(num);
    printf("%d\n",res);
    return 0;
}
```

# 3 -> B
```
    arr[] = {5, 10, 13, 17, 23};
    fun2(arr,5) : 
        Output: 5 10 13 17 23 \n
        arr[] = {9, 14, 17, 21, 27};
        fun1(arr,5) : 
            Output: 9 14 17 21 27 \n
            arr[] = { 7,12,15,19,25}
    
    fun(arr,5) :
        Output: 7 12 15 19 25\n
        arr[] = { 5,10,13,17,23 }
```

# 4 -> A
```
#include <stdio.h>
int main(){
    
    FILE *fptr;
    fptr = fopen("sample.txt","r");

    int num, sum = 0 , i = 0;
     
    // fscanf return 1 as it read 1 value [%d]
    while ( fscanf(fptr,"%d",&num ) == 1){
        sum = sum+num;
        i++;
    }
    fclose(fptr);

    printf("Average: %d\n",sum/i);
    return 0;
}
```

# 4 -> B
```
    name[50] = "Abu Sayeed Shiblu"; len=17
    function(name, 'A', 0);        
            Output: A,
            int num = 65%17=14
            if(false)
            function(name,'b',1)      //str[14] = 'b' = 98
                Output: b,
                num = 98 % 17=13
                if(false:1>4)
                function(name,'i',2):
                    Output: i,
                    num=105%17=3   // i = 105
                    if(false:2>4)
                    function(name,' ',3):
                        Output: ,
                        num = 32%17= 15         // space er ascii value: 32
                        function(name,'l',4)
                            Output: l
                            num = 108%17 =6 // l=108
                            if(false:4>4)
                            function(name,'y',5):
                                Output: y,
                                if(5>4) True return
                            return
                        return
                    return
                return
            return
        return
    
    Output: A, b, i,  , l, y,
```
# 5 
```
#include <stdio.h>

typedef struct {
    char name[20];
    int id;
    int salary;
} worker_info;

char checkStatus ( int salary ){
    if ( salary> 1600 ) return 'A';
    else return 'B';
}

int main(){
    
    int N;
    scanf("%d", &N);

    // etai direct structure a input neya ; pore eta alada array te niye structure a copy marte hobe
    // eta pore thik korbone

    worker_info workers[N];
    for(int i=0;i<N;i++){
        gets(workers[i].name);
    }

    for(int i=0;i<N;i++){
        scanf("%d",&workers[i].id);
    }
    
    for(int i=0;i<N;i++){
        scanf("%d",&workers[i].salary);
    }

    printf("Information Stored Successfully.\n");
    printf("Please write the name of the person you want to know about: ");

    char nam[20];
    gets(nam);
    int found = 0;

    for(int i=0;i<N;i++){
        if( workers[i].name == nam ) {
            found = 1;
            printf("Name: %s\n",workers[i].name);
            // search_in = i;
            printf("%d\n",workers[i].id);
            printf("Status: %c\n",checkStatus(workers[i].salary));
            break;
        }
    }

    if(!found) printf("The person is not in the directory.");

    // printf("ID: %d\n",)
    
    return 0;
}
```

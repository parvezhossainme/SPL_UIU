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

/* Sample Input:
parvez
10
85.0
Saiham 
20 
85.4
Sabera
15
82.8
Farhan
18
80.0
*/
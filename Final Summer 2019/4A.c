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
    float total = 0;
    for(int i=0;i<4;i++){
        printf("%s\t%d\t%.1f\n",students[i].name,students[i].id,students[i].marks);
        total = total+students[i].marks;
    }

    printf("\nAverage:%.1f\n",total/4);


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
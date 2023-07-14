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

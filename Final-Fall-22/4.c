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
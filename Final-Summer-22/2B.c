#include <stdio.h>

void inputData(int goals[], int mins[], int n) {
    for(int i=0;i<n;i++){
        scanf("%d", &goals[i]);
    }

    for(int i=0;i<n;i++){
        scanf("%d", &mins[i]);
    }
}
int countOfHAttricks(int goals[],int n){
    int hat = 0;
    for(int i=0;i<n;i++){
        if(goals[i] >= 3 ) hat++;
    }
    return hat;
}
int main(){
    
    int n;
    scanf("%d", &n);
    int goals[n];
    int mins[n];
    inputData(goals,mins,n);

    int hatrics = countOfHAttricks(goals,n);
    printf("Number of hatrics on total matches: %d\n", hatrics);

    return 0;
}
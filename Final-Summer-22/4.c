#include <stdio.h>

typedef struct {
    int tot_WT ;
    int tot_Match;
    int tot_Run;
    char name[20];
    char country[20];
    int avg;
} bowler_info;

void showMaxAvg( bowler_info bowlers[]){
    int maxAvg = bowlers[0].avg, max_in = 0;
    for(int i=0;i<100;i++){
        if(bowlers[i].avg > maxAvg){
            maxAvg = bowlers[i].avg;
            max_in = i;
        }
    }
    // print everyting own
    printf("\n Maxxxx: %s\n",bowlers[max_in]);
}

int main(){

    bowler_info bowlers[100];
    for(int i=0;i<100;i++){
        scanf("%d%d%d",&bowlers[i].tot_WT,&bowlers[i].tot_Run,&bowlers[i].tot_Match);
        getchar();
        gets(bowlers[i].name);
        gets(bowlers[i].country);

        bowlers[i].avg = bowlers[i].tot_Run/bowlers[i].tot_WT;
    }

    showMaxAvg(bowlers);
    
    return 0;
}
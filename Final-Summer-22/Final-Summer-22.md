# 1 -> A
```
// Manual Trace = Mid Topic
#include <stdio.h>
void main(){
    int i, j, data[5][5] = {0};
    for (i = 0; i < 5; i++){
        for (j = i + 1; j < 5; j++)
            scanf("%d", &data[i][j]);
    }
    for (i = 0; i < 5; i++){
        for (j = i; j < 5; j++)
            printf("%d_", data[i][j]);
        printf("\n");
    }
}
```
# 1 -> B
```
    Mid Topic
```

# 2 -> A
```
    printf( call func(2) )
        Output: 3\n [n=3]
        else call func(3+1) : 
            Output: 4\n [n=4]
            else if call func(4+2) :
                Output: 6\n
                else if call func(6+2):
                evabei => 10\n 12\n 14\n
                if(14%7==0) True : return 2
            no catch return
    // same output last er printf
    Output:12 \n 10 \n 8 \n 6 \n 4 \n 3 \n 2
```

# 2 -> B
```
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
```
# 3 -> A
```
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void rmvRepeat(char sentence[] ){
    char corrected[strlen(sentence)];
    int x=0;
    for(int i = 0 ; i < strlen(sentence) ; i++ ){
        corrected[x++] = sentence[i];
        if( isVowel(sentence[i])){
            while( sentence[i] == sentence[i+1] && i<strlen(sentence)-1 ){
                i++;
            }
        }
    }
    corrected[x] = '\0';
    printf("\n%s\n",corrected);
}

int main(){
    char sentence[100];
    gets(sentence);
    rmvRepeat(sentence);
    // printf("%s",sentence);
    return 0;
}
```

# 4
```
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
```
# 5 -> A
```
    analyzed: jegulo jor na sesob ( value + index*2 )
    -5-
    -13-
    -19-
```
# 5 -> B
```
#include <stdio.h>
int main(){
    FILE *fp;
    fp = fopen("numbers.txt","r");
    int i = 0,arr[100];
    while( fscanf(fp,"%d",&arr[i]) == 1 ){
        i++;
    }
    fclose(fp);
    printf("%d ", arr[i/2-1]);
    return 0;
}

```
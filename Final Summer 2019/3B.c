#include <stdio.h>
int main(){
    
    FILE *fp;
    fp = fopen("3B.txt","r");
    int numbers[10];
    for(int i=0;i<10;i++){
        fscanf(fp,"%d",&numbers[i]);
    }
    int max = numbers[0];
    for(int i=0;i<10;i++){
        // printf("%d ", numbers[i]);
        if( numbers[i] > max ) max = numbers[i];
    }
    printf("\n\tMax Value: %d\n", max);
    return 0;
}
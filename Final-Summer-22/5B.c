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
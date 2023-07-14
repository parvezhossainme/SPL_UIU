#include <stdio.h>
int main(){
    
    FILE *fptr;
    fptr = fopen("sample.txt","r");

    int num, sum = 0 , i = 0;

    while ( fscanf(fptr,"%d",&num ) == 1){
        sum = sum+num;
        i++;
    }
    fclose(fptr);

    printf("Average: %d\n",sum/i);
    return 0;
}
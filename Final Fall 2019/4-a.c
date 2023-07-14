#include <stdio.h>
int main(){
    FILE *fp1;
    int i,sum;
    int num[5]={10,20,30,40,50};
    fp1 = fopen("dest.txt","w");
    sum = 0;
    for(i=4; i >= 0 ; i--){
        if(i%2==0){
            sum = sum+num[i];
            fprintf(fp1,"%d\n",num[i]);
        }
    }
    fprintf(fp1,"%d",sum);
    fclose(fp1);
    return 0;
}
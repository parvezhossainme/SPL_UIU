#include <stdio.h>
int main(){
    
    FILE *fptr;
    fptr = fopen("sample.txt","r");

    int array[100],size=0;
    while( (fscanf(fptr,"%d",&array[size]) != EOF )){   
        size++;
    }
    fclose(fptr);

    FILE *writeF;
    writeF = fopen("Output.txt","w");
    for(int i=0;i<size;i++){
        if(array[i] % 2 == 0) 
             fprintf(writeF,"%d\n",array[i]);
        // printf("%d\n",array[i]);
       
    }
    fclose(writeF);

    return 0;
}
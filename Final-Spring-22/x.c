#include <stdio.h>
int main(){
    char str[100];
    gets(str);
    for(int i=0;str[i]!='\0';i++){
        for(int j=i+1;str[i]!='\0';j++){
            if(str[i]>str[j]){
                char temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
        
    }
    printf("%s",str);
    return 0;
}
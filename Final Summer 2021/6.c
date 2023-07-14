#include <stdio.h>
#include <string.h>

int main(){

    char str_a[36] = "MD Parvez Hossain,0112230072";
    gets(str_a);
    char str_b[strlen(str_a)];

    int x = 0;
    for(int i=0 ; str_a[i];i++){
        if(str_a[i]>='0' && str_a[i] <= '9'){
            str_b[x] = str_a[i];
            x++;
        }
    }
    if (x == 0 ) strcpy(str_b,"0");
    printf("%s\n",str_b);
    
    return 0;
}
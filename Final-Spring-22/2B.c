#include <stdio.h>
#include <string.h>

int main(){
    
    char str1[100] = "Hello";
    char str2[100] = "Bonjour";
    int i, k;
    strncat(str1, "Maria", 2);      // str1 = HelloMa
    strncpy(str2, "Federick", 3);   // str2 = Fedjour
    // strcpy(str2, "Fed"); // str2 = Fed
    i=strlen(str1); // i = 7
    for(k=0; str2[k] !='\0'; k++)
        str1[i+k] = str2[k];  // HelloMaFedjour
    str1[i + k] = '\0';     // // HelloMaFedjour\0

    puts(str2);     // Output: Fedjour
    printf("\n");
    puts(str1);     // Output: HelloMaFedjour
    printf("\n");
    strrev(str1);   // ro
    puts(str1);
    return 0;
}
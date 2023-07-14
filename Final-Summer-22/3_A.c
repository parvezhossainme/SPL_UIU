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
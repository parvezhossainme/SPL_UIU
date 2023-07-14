#include <stdio.h>

void additems( int items[] , int add[], int n ) {
    for(int i=0;i<n;i++){
        items[i] = items[i] + add[i];
    }
}

void openDoor(char password[]){
    if (password = "Narnia") printf("Door to Narmia is open.\n");
    else printf("There is no door.\n");
}

int main(){
    
    int items[1000],add[1000];

    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &items[i]);
    }
    
    for(int i=0;i<n;i++){
        scanf("%d", &add[i]);
    }

    additems(items,add,n);

    char pass[20];
    scanf("%s",&pass);
    openDoor(pass);
    
    return 0;
}
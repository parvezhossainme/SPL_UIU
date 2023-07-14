#include <stdio.h>

typedef struct {
    char name[20];
    int id;
    int salary;
} worker_info;

char checkStatus ( int salary ){
    if ( salary> 1600 ) return 'A';
    else return 'B';
}

int main(){
    
    int N;
    scanf("%d", &N);

    // etai direct structure a input neya ; pore eta alada array te niye structure a copy marte hobe
    // eta pore thik korbone

    worker_info workers[N];
    for(int i=0;i<N;i++){
        gets(workers[i].name);
    }

    for(int i=0;i<N;i++){
        scanf("%d",&workers[i].id);
    }
    
    for(int i=0;i<N;i++){
        scanf("%d",&workers[i].salary);
    }

    printf("Information Stored Successfully.\n");
    printf("Please write the name of the person you want to know about: ");

    char nam[20];
    gets(nam);
    int found = 0;

    for(int i=0;i<N;i++){
        if( workers[i].name == nam ) {
            found = 1;
            printf("Name: %s\n",workers[i].name);
            // search_in = i;
            printf("%d\n",workers[i].id);
            printf("Status: %c\n",checkStatus(workers[i].salary));
            break;
        }
    }

    if(!found) printf("The person is not in the directory.");

    // printf("ID: %d\n",)
    
    return 0;
}
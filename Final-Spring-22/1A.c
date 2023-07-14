#include <stdio.h>
int main(){
    
    int n;
    n = 3;
    int array[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &array[i][j]);
        }
    }

    // upper triangular = entries below the main diagonal are all zero
    int uppTri = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if( array[i][j] == 0 ) {
                uppTri = 0;
                break;
            }
        }
    }


    if( uppTri == 1 ) {
        int res = 1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j) res*=array[i][j];
            }
        }
        printf("%d\n",res);
    } else {
        
        int res = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j) res+=array[i][j];
            }
        }
        printf("%d\n",res);
    }

    return 0;
}
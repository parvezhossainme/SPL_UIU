#include <stdio.h>
int main(){
    
    int n;
    scanf("%d", &n);
    int nums[n][n];

    // Input nums
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &nums[i][j]);
        }
    }

    // Display even column wise check
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if( nums[j][i] % 2 == 0 ) printf("%d ",nums[j][i]);
        }
        printf("\n");
    }
    return 0;
}
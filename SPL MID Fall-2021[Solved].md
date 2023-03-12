

# 1 -> (a)
```
#include<stdio.h>
    int main(){
    int a, b, sum;
    scanf("%d%d", a, b);
    sum =+ a;
    printf(“%d”, &sum);
    return 0;
}
```
# 1 -> (b)
```
Input: x = 3
Output: MorningHello

Input: x = 10
Output: Invalid answer

Input: x = 17
Output: Best

Input: x = 21
Output: Wishes!Invalid answer

```
# 1 -> (c)
```
#include<stdio.h>
int main(){
    int teamAGoals,teamBGoals;
    scanf("%d%d",&teamAGoals,&teamBGoals);
    if(teamAGoals > teamBGoals) printf("Team A wins!");
    else if ( teamAGoals < teamBGoals ) printf("Team B wins!");
    else printf("Draw!");
    return 0;
}
```

# 2 -> (a)
```
#include<stdio.h>
void main(){
    float sum=0;
    for(int i=10, j=1; i>0; i=i+2, j++){
        sum += i-j;
    }
}
i=10,j=1, sum = 0 + 10-1 = 9
i=12,j=2, sum = 9 + 12-2 = 19
i=14,j=3, sum = 19 + 14-3 = 30
// infinity loop as i > 0 and i = i+2
```

# 2 -> (b)
```
// Codes of flowchart
#include<stdio.h>
#include<math.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    for(int i = 1 ; i <=n ; i++){
        sum = sum + pow(-1,i-1)*i*i;
    }
    printf("%d",sum);
    return 0;
}
```
```
// Another way:
#include<stdio.h>
#include<math.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    for(int i = 1 ; i <=n ; i++){
        if(i%2==1) sum = sum + i*i;
        else sum = sum - i*i;
    }
    printf("%d",sum);
    return 0;
}
```
# 2 -> (c)
```
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n ; i++){
        char mychar = 'A';
        for(int j = n-1 ; j>=i ; j--){
            printf("%c",mychar);
            mychar++;
        }
        printf("\n");
    }
    return 0;
}
```
# 3 -> (a) -> (i)
```
First,before looping n and m initialized with 0.
On nested loop when arr1[i] and arr2[j] are equal ; n gets increased by 1 and m is assigned to arr1[i]
When the if condition is true for every loop it gets the below value sequentially:
i=0,j=0,arr1[i]==arr2[j] true : n=1;
                                          m = arr1[i] = 1;

        // Now write own :)
```
# 3 -> (a) -> (ii)
```
1 : 
2 : 
3 : 
4 : 
5 : 
5 : 
4 : 
3 : 
2 : 
1 : 
```
# 3 -> (b)
```
#include<stdio.h>
int main(){
    int size = 5;
    int parvez[size];
    for(int i = 0 ; i < size ; i++){
        scanf("%d",&parvez[i]);
    }

    int max = parvez[0] , in_max = 0;
    for(int i = 0 ; i < size ; i++){
        if(parvez[i] > max){
            max = parvez[i];
            in_max = i;
        }
    }
    printf("Max element is %d at %d index",max,in_max);
    return 0;
}
```
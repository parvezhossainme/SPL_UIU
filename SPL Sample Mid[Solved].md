
# 1 
```
#include<stdio.h>
int main(){
	float a, b;
	float div;
	scanf(“%f%f”, &a, &b);
	div=a/b;
	printf(“%f”, div);
	return 0;
}
```
# 2
```
#include<stdio.h>
int main(){
	float a, b;
	float div;
	scanf(“%f%f”, &a, &b);
	div=a/b;
	printf(“%f”, div);
	return 0;
}
```
# 3
```
a = 2 ;
b = 3;
c = 3.000000
d = 3.400000
e = 12
```
# 4
```
Input: 4
Output: 
    Begin
	CSE
	END

Input: 5,10,12
Output: 
    Begin
	UIU
	END

```
# 5
```
#include<stdio.h>
int main(){
	int choice;
	scanf("%d",&choice);
	if(choice == 1 ) printf("CSE\nUIU\n");
	else if(choice == 2 ) printf("UIU\n");
	else if(choice == 3 ) printf(“BYE”);
	else printf(“EXIT”);
	return 0;
}
```
# 6
```
[Remark: i = i + 2]
i = 2 : sum = 2
	Output: 2	2

i = 4 : sum = -2
	Output: 4	-2

i = 6 : sum = 4
	Output: 6	4
Output: 4
```
# 7
```
#include<stdio.h>
int main(){
	int times;
    	float sum=0;
	scanf("%d",&times);
	int count = 0;
	while(count < times ) {
		float num;
		scanf("%f",&num);
		if(num > 0.0 ){
			sum = sum + num;
			count++;
		}
	}
	printf("Output: %.f",sum);
	return 0;
}
```
# 8
```
i=2
-------
2  1
2  2
2  3(Inner Loop break)

i=1
---
1 1
1 2
0 2  (Outer Loop break)
```
# 9
```
#include<stdio.h>
int main(){
    int A[100];
    int n;
    scanf("%d",&n);

    for(int i = 0 ; i < n; i++){
        scanf("%d",&A[i]);
    }

    int min = A[0], in_min = 0;
    for(int i = 0 ; i < n; i++){
        if(A[i] < min){
            min = A[i];
            in_min = i;
        }
    }

    printf("Output Minimum: %d\n",min);
    printf("Output Index Number(s) in Array A: ");
    for(int i = 0 ; i < n ; i++){
        if(min == A[i]) printf("%d ",i);
    }

	return 0;
}
```
# 10
```
within loop (
	1  1  2
	1  2  3
	2  3  5
	3  5  8
)
	5  8 13
```
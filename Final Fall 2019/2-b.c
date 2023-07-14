#include <stdio.h>

// Recursive function to add array elements
int sumArray(int arr[], int n) {
    // Base case: when there is only one element left
    if (n == 1) {
        printf("Base:%d\n",arr[0]);
        return arr[0];
    }
    // Recursive case: add the first element to the sum of the rest
    else {
        int x = arr[0] + sumArray(arr + 1, n - 1);
        printf("Recuss:%d\n",x);
        return x;       
    }
}

int main() {
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers for the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = sumArray(arr, n);
    printf("The sum of the array elements is: %d\n", sum);
    return 0;
}

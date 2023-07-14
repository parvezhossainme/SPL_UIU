#include <stdio.h>

int main() {

    float num1, num2, sum;
    
    FILE *fp;
    fp = fopen("input.txt", "r");
    
    if (fp != NULL) {
        fscanf(fp, "%f", &num1);
        fscanf(fp, "%f", &num2);
        fclose(fp);
        sum = num1 + num2;
        printf("The sum of %.2f and %.2f is %.2f.\n", num1, num2, sum);
    } else {
        printf("Error opening the file.\n");
    }

    return 0;
}

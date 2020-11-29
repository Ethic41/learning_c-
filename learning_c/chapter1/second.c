#include <stdio.h>

int main(void) {
    int integer1;
    int integer2;
    int sum;
    //takes in the first integer
    printf("Enter the first integer:\n");
    scanf("%d", &integer1);

    //takes in the second integer
    printf("Enter the second integer:\n");
    scanf("%d", &integer2);

    //perform the summation
    sum = integer1 + integer2;

    printf("the sum is %d\n", sum);

}

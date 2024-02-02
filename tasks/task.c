#include <stdio.h>
#include <stdlib.h>

/**
 * argv[1] - num1
 * argv[2] - num2
 */

int main(int argc, char *argv[]) {

    if (argc != 3){
        printf("Usage: ./task <num1> <num2>\n");
        return 0;
    }

    int num1, num2;
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    if (num1 <= 0 || num2 <= 0) {
        printf("Usage: ./task <num1> <num2>\n");
        return 0;
    }

    // Calculate and print the sum
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}

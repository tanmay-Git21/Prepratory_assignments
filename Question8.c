#include <stdio.h>

void printBinary(int num) {
    int binary[64];  // Array to store binary digits
    int i = 0;

    if (num == 0) {
        printf("0");
        return;
    }

    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    // Print binary in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int num;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Print number representations
    printf("\nBinary: ");
    printBinary(num);
    
    printf("\nOctal: %o", num);
    printf("\nHexadecimal: %X\n", num);

    return 0;
}

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int uppercase = 0, lowercase = 0, digits = 0, others = 0;
    
    // Taking input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Checking each character
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i]))
            uppercase++;
        else if (islower(str[i]))
            lowercase++;
        else if (isdigit(str[i]))
            digits++;
        else if (str[i] != '\n') // Ignoring newline character from input
            others++;
    }

    // Display results
    printf("\nUppercase Letters: %d", uppercase);
    printf("\nLowercase Letters: %d", lowercase);
    printf("\nDigits: %d", digits);
    printf("\nOther Characters: %d\n", others);

    return 0;
}

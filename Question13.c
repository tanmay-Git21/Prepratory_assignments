#include <stdio.h>
#include <string.h>

int main() {
    char *words[] = { "tanmay","ashok","ramteke","ashok","vijay","ramteke","trupti","ashok","ramteke", NULL };
    int size = 0;

    // Finding the number of elements (since NULL-terminated)
    while (words[size] != NULL) {
        size++;
    }

    int checked[size]; // Array to track printed duplicates
    for (int i = 0; i < size; i++) {
        checked[i] = 0; // Initialize as not printed
    }

    printf("Duplicate words: \n");

    // Compare each string with every other string
    for (int i = 0; i < size; i++) {
        if (checked[i] == 1) continue; // Skip if already printed

        for (int j = i + 1; j < size; j++) {
            if (strcmp(words[i], words[j]) == 0) {
                printf("%s\n", words[i]);
                checked[j] = 1; // Mark as printed
                break; // Avoid printing duplicates multiple times
            }
        }
    }

    return 0;
}

#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("new1.txt", "r"); // Open file in read mode

    if (fptr == NULL) {  
        printf("Error: File not found!\n");
        return 1; 
    }

    char ch;
    printf("File content:\n");

    // Read and print character by character until EOF
    while ((ch = fgetc(fptr)) != EOF) {
        printf("%c", ch);
    }

    fclose(fptr); // Close the file
    return 0;
}

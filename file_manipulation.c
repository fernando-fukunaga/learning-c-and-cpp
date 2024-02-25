/*
Exercise: File Manipulation

Write a C program that performs the following tasks:

    File Creation: Create a new text file named "numbers.txt" and
    write integers from 1 to 10, each on a new line.

    File Reading: Open the "numbers.txt" file, read the integers,
    and calculate the sum and average of the numbers. Display the sum and average on the console.

    File Appending: Open the same "numbers.txt" file in append
    mode and add the square of each number (1^2, 2^2, ..., 10^2) on a new line after the original numbers.

    File Reading (again): Reopen the "numbers.txt" file,
    read all the numbers (original and squares), and display them on the console.

Ensure proper error handling for file operations.
*/
#include <stdio.h>

int main() {
    FILE *fileptr = fopen("numbers.txt", "a+");

    char numbers[20] = "1\n2\n3\n4\n5\n6\n7\n8\n9\n10";
    fwrite(numbers, 20*sizeof(char), 1, fileptr);

    fclose(fileptr);
}
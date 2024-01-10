#include <stdio.h>
#include "file_operations.h"

int main() {
    // Create files
    createFile("file1.txt");
    createFile("file2.txt");

    // Write content to files
    writeFile("file1.txt", "This is file 1.");
    writeFile("file2.txt", "This is file 2.");

    // Read and display file content
    char content1[256];
    char content2[256];

    readFile("file1.txt", content1, sizeof(content1));
    readFile("file2.txt", content2, sizeof(content2));

    printf("Content of file1.txt: %s\n", content1);
    printf("Content of file2.txt: %s\n", content2);

    // Update file content
    updateFile("file1.txt", "Updated content for file 1.");

    // Read and display updated content
    readFile("file1.txt", content1, sizeof(content1));
    printf("Updated content of file1.txt: %s\n", content1);

    // Delete files
    deleteFile("file1.txt");
    deleteFile("file2.txt");

    return 0;
}

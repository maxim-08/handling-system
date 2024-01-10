#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "file_operations.h"

void createFile(const char* filename) {
    FILE* file = fopen(filename, "w");
    fclose(file);
}

void writeFile(const char* filename, const char* content) {
    FILE* file = fopen(filename, "w");
    if (file != NULL) {
        fprintf(file, "%s", content);
        fclose(file);
    }
}

void readFile(const char* filename, char* buffer, size_t bufferSize) {
    FILE* file = fopen(filename, "r");
    if (file != NULL) {
        fgets(buffer, bufferSize, file);
        fclose(file);
    }
}

void updateFile(const char* filename, const char* content) {
    FILE* file = fopen(filename, "w");
    if (file != NULL) {
        fprintf(file, "%s", content);
        fclose(file);
    }
}

void deleteFile(const char* filename) {
    remove(filename);
}

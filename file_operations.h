#ifndef FILE_OPERATIONS_H
#define FILE_OPERATIONS_H

void createFile(const char* filename);
void writeFile(const char* filename, const char* content);
void readFile(const char* filename, char* buffer, size_t bufferSize);
void updateFile(const char* filename, const char* content);
void deleteFile(const char* filename);

#endif // FILE_OPERATIONS_H

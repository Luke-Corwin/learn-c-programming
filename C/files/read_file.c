#include <stdio.h>

int main() {

    FILE *pFile = fopen("input.txt", "r"); // r is to read files. NULL is returned if the file can't be read. Add file path if its outside of folder
    char buffer[1024] = {0}; //specify the size in bytes 1024 is one KB. Buffer makes program more efficient if it's the right size

    if(pFile == NULL){
        printf("Could not open file\n");
        return 1;
    }

    while(fgets(buffer, sizeof(buffer), pFile) != NULL){
        printf("%s", buffer);
    }

    fclose(pFile);

    return 0;
}
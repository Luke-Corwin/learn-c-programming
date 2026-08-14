#include <stdio.h>

int main(){

    FILE *pFile = fopen("output.txt", "w"); // w is for write r is for read. Paste file path infromt of file your writing to to write it in file exlorer etc.

    char text[] = "ROCK ROCK ROCK\nROCKING EVERYWHERE!";

    if(pFile == NULL){
        printf("Error opening file");
        return 1;
    }

    fprintf(pFile, "%s", text); //file what format youre writing in and what yours writing

    printf("File was written successfully");

    fclose(pFile); // close a file everytime you're done making edits

    return 0;
}
#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>


int main(){

    time_t rawtime = 0; // time_t hold a really large number. Jan 1 1970 (Epoch)
    struct tm *pTime = NULL; //this struct comes from time.h
    bool isRunning = true;

    printf("DIGITAL CLOCK\n");

    while(isRunning){

        time(&rawtime);

        pTime = localtime(&rawtime);

        printf("\r%d:%d:%d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec); // backslash r is how you can go back and overwrite instead of a new line

        sleep(1);
    }

    return 0;
}
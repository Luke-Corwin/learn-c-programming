#include <stdio.h>

int main() {

    char numpad[][3] = {{'1', '2', '3'},
                        {'4', '5', '6'},
                        {'7', '8', '9'},
                        {'*', '0', '#'}};

    for(int i = 0; i < 4; i++){ //rows for loop
        for(int j = 0; j < 3; j++){ //columns for loop
            printf("%c ", numpad[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

/* int numbers[][3] = {{1, 2, 3},
                        {4, 5, 6}, 
                        {7, 8, 9}}; //need to declare maximum # of columns in second [] */

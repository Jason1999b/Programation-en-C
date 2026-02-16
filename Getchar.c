#include <stdio.h>

int main(void) {
    int random; 

    while ((random = getchar()) != EOF) {
        putchar(random); 
    }

}
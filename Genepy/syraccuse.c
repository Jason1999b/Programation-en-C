#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[argc+1]) {

if (argc < 2) {
        printf("%s\n", argv[0]);
        return 1;
    }
    
long argument = atoi(argv[1]);

printf("%ld", argument);


while (argument > 1) {
        if (argument % 2 == 0) {
            argument = argument / 2;
        } else {
            argument = 3 * argument + 1;
        }
printf(" %ld", argument);
    }

}
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void a_function(void) {
    puts("Try to have this function called by overriding the saved RIP on the stack.");
}

void intermediate(int ac, char **av) {
    int an_int = 1;
    char a_string[8] = "BBBBBBB";
    char user_input[8] = {};

    if (ac != 2) {
        printf("Please give an argument\n");
        exit(1);
    }
    strcpy(user_input, av[1]);
    printf("%i, %s, %s\n", an_int, a_string, user_input);
}


int main(int ac, char **av) {
    intermediate(ac, av);
}
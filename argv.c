#include <stdio.h>

void printInfos(int argc, char **argv) {
     {
     printf("%s\n", argv[0]);
     printf("%s\n", argv[1]);
     printf("%s\n", argv[2]);
    }
}

int main(int argc, char **argv) {
    printInfos(argc, argv);
    return 0;
}
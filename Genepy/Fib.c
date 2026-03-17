#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    if (argc != 2) {
        return 1;
    }

    int n = atoi(argv[1]);

    if (n < 0) return 1;
    if (n == 0 || n == 1) {
        printf("1\n");
        return 0;
    }

    long long nbr1 = 1;
    long long nbr2 = 1;
    long long suivant = 0;

    for (int i = 2; i <= n; i++) {
        suivant = nbr1 + nbr2;
        nbr1 = nbr2;
        nbr2 = suivant;
    }

    printf("%lld\n", suivant);

    return 0;
}

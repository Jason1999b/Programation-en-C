#include <stdio.h>

int main() {
    long long nombre = 20;
    int trouve = 0;

while (!trouve) {
    trouve = 1;

    for (int i = 1; i <= 20; i++) {
        if (nombre % i != 0) {
            trouve = 0;
            break;
        }
    }

    if (!trouve) {
        nombre += 20;
    }
}

printf("Résultat : %lld\n", nombre);
return 0;

}

// Résultat : 232792560
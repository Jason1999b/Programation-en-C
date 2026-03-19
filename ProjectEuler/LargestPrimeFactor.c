#include <stdio.h>

int main() {
    long long n = 600851475143;
    long long largest = 0;

    while (n % 2 == 0) {
        largest = 2;
        n = n / 2;
    }

    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largest = i;
            n = n / i;
        }
    }

    if (n > 2) {
        largest = n;
    }

    printf("%lld\n", largest);
    return 0;
}

// Réponse: 6857
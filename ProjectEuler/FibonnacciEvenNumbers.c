#include <stdio.h>

void main () {

    int x, y, z, sum;
    x = y = z = 1;
    sum = 0;

    for (z = 1; z <= 4000000; z = x + y) {
        if (z % 2 == 0) {
            sum += z;
        }
        x = y;
        y = z;
    }
    printf("Sum of even Fibonacci numbers: %d\n", sum);

}

// Sum of even Fibonacci numbers: 4613732
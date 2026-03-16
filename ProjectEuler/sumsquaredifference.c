#include <stdio.h>

int main(void)
{
    long sum = 0;
    long sum_of_squares = 0;

    for (int i = 1; i <= 100; i++)
    {
        sum += i;
        sum_of_squares += i * i;
    }

    long square_of_sum = sum * sum;
    long difference = square_of_sum - sum_of_squares;

    printf("%ld\n", difference);
    return 0;
}


// Difference = 25164150
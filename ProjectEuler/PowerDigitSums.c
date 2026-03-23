#include <stdio.h>

int main(void) {
    int digits[400] = {0};
    int length = 1;
    digits[0] = 1;

    for (int i = 0; i < 1000; i++) {
        int carry = 0;
        for (int j = 0; j < length; j++) {
            int temp = digits[j] * 2 + carry;
            digits[j] = temp % 10;
            carry = temp / 10;
        }
        while (carry) {
            digits[length++] = carry % 10;
            carry /= 10;
        }
    }

    int sum = 0;
    for (int i = 0; i < length; i++)
        sum += digits[i];

    printf("%d\n", sum);
    return 0;
}

// résultat : 1366
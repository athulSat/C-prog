#include <stdio.h>

int count_zeroes(int number) {
    int count = 0;
    while (number > 0) {
        if (number % 10 == 0) {
            count++;
        }
        number /= 10;
    }
    return count;
}

int main() {
    int total_zeroes = 0;
    for (int i = 0; i <= 1000; i++) {
        total_zeroes += count_zeroes(i);
    }
    printf("The number of zeroes between 0 and 1000 is: %d\n", total_zeroes);
    return 0;
}

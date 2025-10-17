#include <stdio.h>
#include <math.h>

int main() {
    int n, i, is_prime;
    for (n = 2; n <= 100; n++) {
        is_prime = 1;
        for (i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime)
            printf("%d ", n);
    }
    return 0;
}

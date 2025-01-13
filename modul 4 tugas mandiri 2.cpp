#include <stdio.h>

int main() {
    int N;

    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    if (N > 50) {
        N = N - 25;
    } else {
        N = N + 19;
    }

    printf("Nilai akhir N adalah: %d\n", N);

    return 0;
}


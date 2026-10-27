#include <stdio.h>

int main(void) {
    int N, i;
    printf("inserisci un numero:");
    scanf("%d", &N);
    i = 1;

    printf("i numeri pari in sequenza sono:\n");
    while (i <= N) {
        printf("%d\n", i * 2);
        i++;
    }


    i = 1;
    printf("i numeri dispari in sequenza sono:\n");
    while (i <= N) {
        printf("%d\n", (i * 2) - 1);
        i++;
    }
    return 0;
}
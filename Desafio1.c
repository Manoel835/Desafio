#include <stdio.h>

int main() {
    int INDICE = 12, SOMA = 0, K = 1;

    for ( K = K + 1; K < INDICE; K++ ) {
        SOMA = SOMA + K;
    }

    printf("SOMA = %d\n", SOMA);

    return 0;

}
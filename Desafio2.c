#include <stdio.h>
#include <limits.h>

int main() {
    double faturamento[365] = {100, 200, 0, 300, 0, 150, 400, 0, 350, 100, /* ... outros valores do ano ... */};

    double soma = 0.0;
    int diasComFaturamento = 0;
    double menorFaturamento = INT_MAX;
    double maiorFaturamento = INT_MIN;

    for (int i = 0; i < 365; i++) {
        if (faturamento[i] > 0) {
            soma += faturamento[i];
            diasComFaturamento++;
            if (faturamento[i] < menorFaturamento) {
                menorFaturamento = faturamento[i];
            }
            if (faturamento[i] > maiorFaturamento) {
                maiorFaturamento = faturamento[i];
            }
        }
    }

    double media = soma / diasComFaturamento;

    int diasAcimaDaMedia = 0;
    for (int i = 0; i < 365; i++) {
        if (faturamento[i] > 0 && faturamento[i] > media) {
            diasAcimaDaMedia++;
        }
    }

    printf("Menor faturamento: %.2lf\n", menorFaturamento);
    printf("Maior faturamento: %.2lf\n", maiorFaturamento);
    printf("Dias com faturamento acima da media: %d\n", diasAcimaDaMedia);

    return 0;
}

#include <stdio.h>

int main() {
    int valores[]={13, 8, 23, 95, 47, 14, 10, 45, 165};
    int n;
    int soma = 0;

    for (n=0; n<=9; n++) {
        soma+=valores[n];
    }

    printf("A soma dos valores do array é: %d\n",soma);

    return 0;
}
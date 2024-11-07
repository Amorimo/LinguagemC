#include <stdio.h>
// Saí da pasta e entrei na mesma pasta do "calculos.h"
#include "../lib/calculos.h"

int main(){
    int valores[]={56,24,4,66,34,7,89,3};
    printf("O resultado da soma é %d\n",somaArray(valores,8));
    printf("O resultado da média é %d\n",mediaArray(valores,8));
    printf("O maior valor é %d\n",maiorValor(valores,8));
    return 0;
}
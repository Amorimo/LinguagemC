// Este progama obtem um número do usuario e diz se é par, exibindo uma mensagem na tela
#include <stdio.h>
int main(){
    int n;
    printf("Digite um número e tecle Enter\n");
    scanf("%d",&n);
    if (n % 2 == 0)
    {
     printf("O valor de %d é Par\n",n);   
    }
    return 0;
}
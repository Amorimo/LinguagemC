#include <stdio.h>
int main(){
    char nome[20];
    printf("Digite seu nome e tecle Enter\n");
    // Foi necessario usar o colchetes para que o comando scanf receba toda a cadeia de caracteres
    // O elemento ^ foi usado para indicar onde começa o primeiro caracter
    // E o \n está sendo usado para ler o espaço aplicado
    // Ao final é utilizado o caracter s (string)
    scanf("%[^\n]s",&nome);
    printf("Olá, %s. Seja bem vindo\n",nome);
    return 0;
}
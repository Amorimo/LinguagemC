#include <stdio.h>
int main(){
    FILE *arquivo;
    arquivo=fopen("files/texto.txt","a");
    // w -> Write (Escrever)
    // r -> Read (Ler)
    // a -> append (Adicionar)
    fprintf(arquivo,"odeio a Pará lanches\n");
    fclose(arquivo);
    printf("Criamos o arquivo\n");
    return 0;
}
#include <stdio.h>

int main() {
  int ano;
  printf("==========ANO BISSEXTO==========\n");
  printf("Digite o ano: \n");
  scanf("%d", &ano);
  
  if (ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0)) {
    printf("Ano bissexto.\n");
  
  }
  
  else {
    printf("Ano não bissexto.\n");
  
  }

}
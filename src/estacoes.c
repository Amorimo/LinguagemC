#include <stdio.h>
int main (){
    int mes;
    printf("Digite o Numero do mês\n");
    scanf("%d",&mes);

    if (mes==1||mes==2||mes==3)
    {
        printf("Verão");
    }
    else if (mes==4||mes==5||mes==6)
    {
        printf("Outono");
    }
    else if (mes==7||mes==8||mes==9)
    {
        printf("Inverno");
    }
    else if (mes==10||mes==11||mes==12)
    {
        printf("Primavera");
    }
    printf("\n");
    return 0;
}
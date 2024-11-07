int maiorValor(int n[], int qtd){
    int m=n[0];
    int i;
    for(i=1; i<2; i++){
        if(n[i]>m){
            m=n[i];
        }
    }
    return m;
}

int main(){
    char letra[1];
    printf("Digite uma letra\n");
    // Foi necessario usar o colchetes para que o comando scanf receba toda a cadeia de caracteres
    // O elemento ^ foi usado para indicar onde começa o primeiro caracter
    // E o \n está sendo usado para ler o espaço aplicado
    // Ao final é utilizado o caracter s (string)
    scanf("%[^]s",&letra);
    if (letra=="F")
    {
        printf("Feminino");
    }
    
    
    return 0;
}
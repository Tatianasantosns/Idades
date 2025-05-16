#include <stdio.h>
#include <string.h>

void ler_texto(char *buffer, int length){
fgets(buffer, length,stdin);
strtok(buffer,"\n");
}

int main()
{
    char nome1[50], nome2[50];
    int idade1, idade2;
    double media;

    printf("\nDados da Primeira Pessoa\n");
    printf("\nNome: ");
    ler_texto(nome1,50);
    printf("Idade: ");
    scanf("%d", &idade1);

    printf("\nDados da Primeira Pessoa\n");
    printf("Nome: ");
    ler_texto(nome1,50);
    printf("Idade: ");
    scanf("%d", &idade2);

    media = (double)(idade1 + idade2)/2
    return 0;
}

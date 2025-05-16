#include <stdio.h>
#include <string.h>

void ler_texto(char *buffer, int length)
     fgets(buffer, length, stdin);
     strtok(buffer, "\n");
}
void limpar_entrada(){
    char c;
    while((c = getchar()) != '\n' && c != EOF){}
}
int main()
{
    char nome1[50], nome2[50];
    int idade1, idade2;
    double media;

    printf("Dados da Primeira Pessoa:\n");
    printf("Nome: \n");
    ler_texto(nome1,50,stdin);
    printf("Idade: \n");
    scanf("%d", &idade1);

    printf("Dados da Segunda Pessoa:\n");
    printf("Nome: );
    fseek(stdin, 0, SEEK_END)
    ler_texto(nome2,50,stdin);
    printf("\nIdade: \n");
    scanf("%d", &idade1);

    media = (double)(idade1 + idade2)/ 2

    printf("A idade media de %s e %s eh de %.1lf anos", nome1, nome2, media);
return 0;
}

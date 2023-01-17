#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct aluno{
        char nome[200];
        char celular[40];
        char email[200];
        int idade;
    }alunos[3];

    for(int i=0; i<3; i++) {

        printf("\nNome do aluno %d: ", i);
        gets(alunos[i].nome);
        printf("Celular do aluno %d: ", i);
        gets(alunos[i].celular);
        printf("Idade do aluno %d: ", i);
        scanf("%d", &alunos[i].idade);
        setbuf(stdin, NULL);

        printf("\nNome: %s", alunos[i].nome);
        printf("\nCelular: %s", alunos[i].celular);
        printf("\nIdade: %d \n", alunos[i].idade);
    }

    return 0;
}

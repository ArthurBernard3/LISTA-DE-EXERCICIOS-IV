#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[20];
    int idade;
    float nota;
};

int main() {
    struct Aluno a[5];
    int i, op;

    for(i = 0; i < 5; i++) {
     printf("\nAluno %d\n", i+1);

     printf("Nome: ");
     scanf("%s", a[i].nome);

     printf("Idade: ");
     scanf("%d", &a[i].idade);

        printf("Nota: ");
        scanf("%f", &a[i].nota);
    }

    printf("\n Alunos Cadastrados \n");
    for(i = 0; i < 5; i++) {
        printf("%d - %s (nota: %.1f)\n", i+1, a[i].nome, a[i].nota);
    }

    printf("\nEscolha o aluno para atualizar (1 a 5): ");
    scanf("%d", &op);

    if(op < 1 || op > 5) {
        printf("Opcao invalida!\n");
        return 0;
    }

    op--; 

    printf("Nova nota para %s: ", a[op].nome);
    scanf("%f", &a[op].nota);

    printf("\n--- Dados Atualizados ---\n");
    printf("Nome: %s\n", a[op].nome);
    printf("Idade: %d\n", a[op].idade);
    printf("Nota: %.1f\n", a[op].nota);

    return 0;
}
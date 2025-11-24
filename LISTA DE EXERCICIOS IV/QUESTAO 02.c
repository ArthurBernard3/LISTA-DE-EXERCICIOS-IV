#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[20];
    int idade;
    float nota;
};

int main() {
  struct Aluno a[5];
  int i;

  for(i = 0; i < 5; i++) {
    printf("\nAluno %d\n", i+1);

    printf("Nome: ");
    scanf("%s", a[i].nome);

    printf("Idade: ");
    scanf("%d", &a[i].idade);

    printf("Nota: ");
    scanf("%f", &a[i].nota);
    }

    printf("\n--- Lista de Alunos ---\n");
    for(i = 0; i < 5; i++) {
        printf("\nAluno %d\n", i+1);
        printf("Nome: %s\n", a[i].nome);
        printf("Idade: %d\n", a[i].idade);
        printf("Nota: %.1f\n", a[i].nota);
    }

    return 0;
}
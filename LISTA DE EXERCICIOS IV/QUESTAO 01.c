#include <stdio.h>
#include <string.h>

struct Aluno {
 char nome[20];
 int idade;
 float nota;
};

int main() {
  struct Aluno a = {"Ana", 17, 8.5};

  printf("Nome: %s\n", a.nome);
  printf("Idade: %d\n", a.idade);
  printf("Nota: %.1f\n", a.nota);

    return 0;
}
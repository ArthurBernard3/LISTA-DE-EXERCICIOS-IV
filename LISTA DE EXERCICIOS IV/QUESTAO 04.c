#include <stdio.h>

struct Aluno { char nome[20]; int idade; float nota; };

void mostrar(struct Aluno a) {
    printf("Nome: %s\nIdade: %d\nNota: %.1f\n", a.nome, a.idade, a.nota);
}

struct Aluno novo() {
    struct Aluno a;
    printf("Nome: ");  scanf("%19s", a.nome);
    printf("Idade: "); scanf("%d", &a.idade);
    printf("Nota: ");  scanf("%f", &a.nota);
    return a;
}

void remover(struct Aluno v[], int *t, int p) {
    int i;
    if(p < 0 || p >= *t) return;
    for(i = p; i < *t - 1; i++) v[i] = v[i+1];
    (*t)--;
}

int main() {
    struct Aluno a[4];
    int t = 0, op, p, i;

    while(1) {
        printf("\n1-Novo\n2-Mostrar\n3-Remover\n4-Sair\nOpcao: ");
        scanf("%d", &op);

        if(op == 1) {
        if(t < 4) {
             a[t] = novo();
            t++;
        printf("Aluno cadastrado\n");
     } else printf("Limite atingido\n");
     }
        else if(op == 2) {
            if(t == 0) printf("Nenhum aluno\n");
            else {
                i = 0;
             while(i < t) {
              printf("\nAluno %d\n", i+1);
               mostrar(a[i]);
               i++;
          }
     }
  }
     else if(op == 3) {
         if(t == 0) printf("Nada para remover\n");
         else {
          printf("Posicao (1 a %d): ", t);
        scanf("%d", &p);
            if(p >= 1 && p <= t) {
                  remover(a, &t, p-1);
                 printf("Removido\n");
                } else printf("Invalido\n");
            }
        }
        else if(op == 4) break;
        else printf("Opcao invalida\n");
    }

    return 0;
}
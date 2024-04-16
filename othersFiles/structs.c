#include <stdio.h>
#include <string.h>
#include <locale.h>

#define SIZE 3

struct personType {
  char name[50];
  int age;
  float weight;
};

typedef struct personType personType;

int main() {
  setlocale(LC_ALL, "Portuguese");
  personType list[SIZE];

  int i;

  for(i=0; i<SIZE; i++) {
    printf("____________Pessoa %d_____________\n", i + 1);
    puts("Digite o nome: ");
    scanf("%50[^\n]s", &list[i].name);
    fflush(stdin);

    puts("Digite a idade: ");
    scanf("%d", &list[i].age);
    fflush(stdin);


    puts("Digite o peso: ");
    scanf("%f", &list[i].weight);    
    fflush(stdin);
  }

  puts("_________________________\n");

  system("cls");

  for(i=0; i<SIZE; i++) {
    printf("____________Pessoa %d_____________\n", i + 1);
    printf("Nome: %s\n", list[i].name);
    printf("Idade: %d\n", list[i].age);
    printf("Peso: %.2f\n", list[i].weight);
  }
  puts("_________________________\n");
  return 0;
}
#include "structs_functions.h"
#include <stdio.h>

#define N 100

struct materia;

typedef struct {
    char* nome;
    int idade;
    int ra;
    struct materia* materia_atual;  
} aluno;

typedef struct {
    char* professor;
    int num_alunos;
    char* departamento;
    aluno* alunos;  
} materia;

int main(void) {
    printf("Hello world! %d\n", N);
    return 0;
}
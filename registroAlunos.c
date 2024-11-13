// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct tipoAluno{
    char mat[8], nome[40];
    float cr;
};
typedef struct tipoAluno aluno;

void preencheVetor(aluno *vet, int n){
    for(int i = 0; i < n; i++){
        printf("\n\nDigite o nome do aluno %d: ", i + 1);
        scanf("%s", &vet[i].nome);
        printf("\nDigite agora a matrícula do mesmo aluno: ");
        scanf("%s", &vet[i].mat);
        printf("\nDigite, por fim, o C.R. de tal aluno: ");
        scanf("%f", &vet[i].cr);
        
        printf("\n%s registrado(a) com sucesso!\n---------------------------------", vet[i].nome);
    }
}

int conta120(aluno *vet, int n){
    char aux[4];
    int count = 0;
    
    for(int i = 0; i < n; i++){
        strncpy(aux, vet[i].mat, 3);
        if(atoi(aux) == 120)
            count++;
    }
    return count;
}

int main() {
    aluno *vetorAlunos;
    int numAlunos;
    
    printf("Digite o número de alunos que deseja registrar: ");
    scanf("%d", &numAlunos);
    vetorAlunos = malloc(numAlunos * sizeof(aluno));
    
    preencheVetor(vetorAlunos, numAlunos);
    
    printf("\n\nO número de alunos matriculados no primeiro semestre de 2020 é de: %d", conta120(vetorAlunos, numAlunos));

    return 0;
}

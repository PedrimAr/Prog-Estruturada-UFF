#include <stdio.h>

void preencheVetor(int *vet, int tamanho) {
    for(int i = 0; i < tamanho; i++){
        printf("\nDigite a matrícula do aluno %d de Prog-1: ", i + 1);
        scanf("%d", &vet[i]);
    }
}


int contaIrregulares(int *vet, int tamanho1, int tamanho2) {
    int alunoAtual, contaIrregulares = 0;
    for(int i = 0; i < tamanho2; i++){
        printf("\nDigite agora a matrícula do aluno %d de Prog-2: ", i + 1);
        scanf("%d", &alunoAtual);
        for(int j = 0; j < tamanho1; j++){
            if(alunoAtual == vet[j]){
                contaIrregulares++;
            }
        }
    }
    
    return contaIrregulares;
}


int main() {
    int tam1, tam2;
    
    printf("Digite o tamanho da turma de Prog-1: ");
    scanf("%d", &tam1);
    int turma[tam1];
    
    printf("Digite agora o tamanho da turma de Prog-2: ");
    scanf("%d", &tam2);
    
    preencheVetor(turma, tam1);
    printf("\n\nO número de alunos irregulares é: %d\n\n", contaIrregulares(turma, tam1, tam2));

    return 0;
}

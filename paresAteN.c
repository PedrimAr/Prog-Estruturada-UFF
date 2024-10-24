#include <stdio.h>

void print(int a){
    if(a != 0){
        print(a - 2);
        printf(" %d", a);
    }
}


int main() {
    int n;
    
    printf("Digite n, para verificar todos os números pares menores ou iguais a n: ");
    scanf(" %d", &n);
    printf("\n");
    
    if(n % 2 != 0)
        n--;
    
    print(n);

    return 0;
}

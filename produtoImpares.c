#include <stdio.h>

int produto(int num){
    if(num % 2 == 0)
        num--;

    if(num == 1)
        return 1;
    else
        return(produto(num - 2) * num);
}


int main(void){
    int n, p;

    printf("\nDigite n, para calcular o produto de todos os ímpares positivos até n: ");
    scanf("%d", &n);

    p = produto(n);
    printf("\n\nO produto é: %d\n\n", p);

    return 0;
}

#include <stdio.h>

int soma(int a, int b){
    if(a == b)
        return a;
    else
        return a + soma(a + 1, b);
}


int main() {
    int a, b, c;
    
    printf("Digite 2 números para saber a soma de todos os números entre eles, inclusive (separados por um espaço): ");
    scanf(" %d %d", &a, &b);
    
    if(a > b){
        c = a;
        a = b;
        b = c;
    }
    
    printf("A soma é: %d", soma(a, b));

    return 0;
}

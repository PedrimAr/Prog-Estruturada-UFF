#include <stdio.h>

int resultado(int base, int expoente){
    if(expoente == 0)
        return 1;
    else
        return(resultado(base, expoente - 1) * base);
}


int main(void){
    int x, n;
    printf("\nDigite a base: ");
    scanf(" %d", &x);

    do{
        printf("\nDigite um exponte >= 0: ");
        scanf(" %d", &n);
    } while(n < 0);
        printf("\n %d elevado a %d = %d\n\n", x, n, resultado(x, n));

    return 0;
}

#include<stdio.h>
#include<locale.h>

main() {
    setlocale(LC_ALL, "Portuguese");
    intervalNumbers();
    return;
}

void vaiCorinthians() {
    for(int cont; cont <= 1;) {
        printf("%i - VAI CORINTHIANS!!!\n", cont);
    }
}

void numeroNatural() {
    for(int i; i <= 9; i++) {
        printf("%i\n", i);
    }
}

void dobroNumero() {
    int number;
    for (int i; i <= 10; i++) {
        printf("Digite um número: ");
        scanf("%i", &number);
        printf("O dobro de %i é %i\n\n", number, number*2);
    }
}

void tabuada() {
    int numero;

    printf("Digite um número: ");
    scanf("%i", &numero);

    for(int i = 1; i <= 10; i++) {
        printf("%i x %i = %i\n", numero, i, numero * i);
    }
}

void verificaNumero() {
    int numero;

    for (int i; i <= 10; i++) {
        printf("Digite um  número: ");
        scanf("%i", &numero);

        if (numero > 0) printf("\n%i é positivo\n", numero);
        else if (numero < 0) printf("\n%i é negativo\n", numero);
        else printf("\n%i é nulo\n", numero);
    }
}

void intervalNumbers() {
    int startInterval, endInterval;

    printf("Digite o começo do intervalo: ");
    scanf("%i", &startInterval);

    printf("Digite o final do intervalo: ");
    scanf("%i", &endInterval);

    printf("Os números entre %i e %i são: ", startInterval, endInterval);
    for(int intervalNumber = startInterval; intervalNumber <= endInterval; intervalNumber++) {
        printf("%i, ", intervalNumber);
    }
}

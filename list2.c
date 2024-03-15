#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "portuguese");
    aumentoSalario();
    return;
}

void negativoOuPositivo() {
    int n1;

    printf("Digite um n�mero: ");
    scanf("%i", &n1);

    if (n1 < 0) printf("%i � um n�mero negativo.", n1);
    else printf("%i � um n�mero positivo", n1);
    return;
}

void faixa0a9() {
    int n1;
    printf("Digite um n�mero: ");
    scanf("%i", &n1);

    if (n1 >= 0 && n1 <= 9) printf("O n�mero %i se encontra na faixa de 0 a 9", n1);
    else printf("O n�mero %i n�o se encontra na faixa de 0 a 9", n1);
    return;
}

void divisao() {
    float n1, n2;
    printf("Digite um n�mero: ");
    scanf("%f", &n1);

    printf("Digite outro n�mero: ");
    scanf("%f", &n2);

    if (n2 == 0) printf("N�o � poss�vel dividir por 0");
    else printf("O resultado da divis�o � %.2f", n1 / n2);

    return;
}

void mediaAluno() {
    float p1, p2, media;

    printf("Digite a nota da primeira prova: ");
    scanf("%f", &p1);

    printf("Digite a nota da segunda prova: ");
    scanf("%f", &p2);

    media = (p1 + p2) / 2;

    if (media >= 5) printf("Sua m�dia foi %.2f - Aprovado!", media);
    else printf("Sua m�dia foi %.2f - Reprovado! Faltou %.2f pontos para atingir a m�dia", media, 5 - media);
    return;
}

void maiorNumero() {
    int n1, n2;

    printf("Digite um n�mero: ");
    scanf("%i", &n1);

    printf("Digite outro n�mero: ");
    scanf("%i", &n2);

    if (n1 > n2) printf("O maior n�mero � %i", n1);
    else printf("O maior n�mero � %i", n2);
    return;
}

void ordemCrescente() {
    int n1, n2;

    printf("Digite um n�mero: ");
    scanf("%i", &n1);

    printf("Digite outro n�mero: ");
    scanf("%i", &n2);

    if (n1 < n2) printf("%i, %i", n1, n2);
    if (n1 > n2) printf("%i, %i", n2, n1);
    return;
}


void aumentoSalario() {
    float salario;

    printf("Digite seu sal�rio: ");
    scanf("%f", &salario);

    if (salario < 1000.00) {
        float novoSalario = salario + (1000 * 5) / 100;
        printf("Seu novo sal�rio � %.2f", novoSalario);
    } else {
        float novoSalario = salario + (1000 * 7) / 100;
        printf("Seu novo sal�rio � %.2f", novoSalario);
    }
}

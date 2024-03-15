#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "portuguese");
    aumentoSalario();
    return;
}

void negativoOuPositivo() {
    int n1;

    printf("Digite um número: ");
    scanf("%i", &n1);

    if (n1 < 0) printf("%i é um número negativo.", n1);
    else printf("%i é um número positivo", n1);
    return;
}

void faixa0a9() {
    int n1;
    printf("Digite um número: ");
    scanf("%i", &n1);

    if (n1 >= 0 && n1 <= 9) printf("O número %i se encontra na faixa de 0 a 9", n1);
    else printf("O número %i não se encontra na faixa de 0 a 9", n1);
    return;
}

void divisao() {
    float n1, n2;
    printf("Digite um número: ");
    scanf("%f", &n1);

    printf("Digite outro número: ");
    scanf("%f", &n2);

    if (n2 == 0) printf("Não é possível dividir por 0");
    else printf("O resultado da divisão é %.2f", n1 / n2);

    return;
}

void mediaAluno() {
    float p1, p2, media;

    printf("Digite a nota da primeira prova: ");
    scanf("%f", &p1);

    printf("Digite a nota da segunda prova: ");
    scanf("%f", &p2);

    media = (p1 + p2) / 2;

    if (media >= 5) printf("Sua média foi %.2f - Aprovado!", media);
    else printf("Sua média foi %.2f - Reprovado! Faltou %.2f pontos para atingir a média", media, 5 - media);
    return;
}

void maiorNumero() {
    int n1, n2;

    printf("Digite um número: ");
    scanf("%i", &n1);

    printf("Digite outro número: ");
    scanf("%i", &n2);

    if (n1 > n2) printf("O maior número é %i", n1);
    else printf("O maior número é %i", n2);
    return;
}

void ordemCrescente() {
    int n1, n2;

    printf("Digite um número: ");
    scanf("%i", &n1);

    printf("Digite outro número: ");
    scanf("%i", &n2);

    if (n1 < n2) printf("%i, %i", n1, n2);
    if (n1 > n2) printf("%i, %i", n2, n1);
    return;
}


void aumentoSalario() {
    float salario;

    printf("Digite seu salário: ");
    scanf("%f", &salario);

    if (salario < 1000.00) {
        float novoSalario = salario + (1000 * 5) / 100;
        printf("Seu novo salário é %.2f", novoSalario);
    } else {
        float novoSalario = salario + (1000 * 7) / 100;
        printf("Seu novo salário é %.2f", novoSalario);
    }
}

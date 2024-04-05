#include<stdio.h>
#include<locale.h>

void main() {
    setlocale(LC_ALL, "portuguese");
    quantityOfPositiveAndNegativeNumbers();
}

void media() {
    int numberOfNumbers;
    float receiveNumber, sum = 0, media;

    printf("Digite a quantidade de números que você deseja informar: \n");
    scanf("%i", &numberOfNumbers);

    for(int i = 1;i <= numberOfNumbers;i++) {
        printf("Digite o número: ");
        scanf("%f", &receiveNumber);

        sum += receiveNumber;
    }

    media = sum / numberOfNumbers;

    printf("A média aritmética dos números digitados é %f", media);
}

void quantityOfPositiveAndNegativeNumbers() {
    float receiveNuumber;
    int positives = 0, negatives = 0, null = 0;

    for(int i; i <= 10; i++) {
        printf("Digite o número: ");
        scanf("%f", &receiveNuumber);

        if(receiveNuumber < 0) {
            negatives++;
        } else if (receiveNuumber > 0) {
            positives++;
        } else null++;
    }

    printf("Você digitou %i números positivos, %i números negativos e %i números zero", positives, negatives, null);
}

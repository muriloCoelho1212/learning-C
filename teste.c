#include<stdio.h>
#include<locale.h>

void main() {
    setlocale(LC_ALL, "portuguese");
    quantityOfPositiveAndNegativeNumbers();
}

void media() {
    int numberOfNumbers;
    float receiveNumber, sum = 0, media;

    printf("Digite a quantidade de n�meros que voc� deseja informar: \n");
    scanf("%i", &numberOfNumbers);

    for(int i = 1;i <= numberOfNumbers;i++) {
        printf("Digite o n�mero: ");
        scanf("%f", &receiveNumber);

        sum += receiveNumber;
    }

    media = sum / numberOfNumbers;

    printf("A m�dia aritm�tica dos n�meros digitados � %f", media);
}

void quantityOfPositiveAndNegativeNumbers() {
    float receiveNuumber;
    int positives = 0, negatives = 0, null = 0;

    for(int i; i <= 10; i++) {
        printf("Digite o n�mero: ");
        scanf("%f", &receiveNuumber);

        if(receiveNuumber < 0) {
            negatives++;
        } else if (receiveNuumber > 0) {
            positives++;
        } else null++;
    }

    printf("Voc� digitou %i n�meros positivos, %i n�meros negativos e %i n�meros zero", positives, negatives, null);
}

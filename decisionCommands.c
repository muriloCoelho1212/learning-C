#include<stdio.h>
#include<locale.h>
#include<math.h>

main() {
    setlocale(LC_ALL, "portuguese");
    calculator();
}

void positivoNegativoNulo() {
    int primaryNumber;
    printf("Digite um número: ");
    scanf("%i", &primaryNumber);

    if (primaryNumber > 0) printf("Positivo!");
    else if (primaryNumber < 0) printf("Negativo!");
    else printf("Nulo!");
}

void intervalBetweenTwoValues() {
    int initialInterval;
    int finalInterval;
    int primaryNumber;

    printf("Digite dois números: ");
    scanf("%i%i", &initialInterval, &finalInterval);

    printf("Digite um número: ");
    scanf("%i", &primaryNumber);

    if (primaryNumber > initialInterval && primaryNumber < finalInterval)
        printf("Número dentro do intervalo");
    else if (primaryNumber == initialInterval || primaryNumber == finalInterval)
        printf("Número está em uma das extremidades");
    else printf("Número fora do intervalo");
}

void calculateIMC() {
    float heigth;
    float weigth;
    double imc;

    printf("Informe seu peso e sua altura: ");
    scanf("%f%f", &weigth, &heigth);

    imc = weigth / pow(heigth, 2);

    if (imc < 18.5) printf("Abaixo do peso");
    else if (imc < 25.0) printf("Saudável");
    else if (imc < 30.0) printf("Sobrepeso");
    else if (imc < 35.0) printf("Obesidade Grau I");
    else if (imc < 40.0) printf("Obesidade Grau II (severa)");
    else printf("Obesidade Grau III (mórbida)");
}

void repeatNumber() {
    int firstNumber, secondNumber, thirdNumber;

    printf("Digite três números: ");
    scanf("%i%i%i", &firstNumber, &secondNumber, &thirdNumber);

    if (firstNumber == secondNumber || firstNumber == thirdNumber)
        printf("O número %i está repetido", firstNumber);
    else if (secondNumber == thirdNumber)
        printf("O número %i está repetido", secondNumber);
}

void higherNumber() {
    int firstNumber, secondNumber, thirdNumber;

    printf("Digite três números: ");
    scanf("%i%i%i", &firstNumber, &secondNumber, &thirdNumber);

    if (firstNumber > secondNumber && firstNumber > thirdNumber)
        printf("%i é o maior número", firstNumber);
    else if (secondNumber > thirdNumber)
        printf("%i é o maior número", secondNumber);
    else printf("%i é o maior número", thirdNumber);
}

void calculator() {
    float firstNumber, secondNumber;
    int operation;

    printf("Qual operação deseja fazer?\n(1) para adição\n(2) para subtração\n(3) para multiplicação\n(4) para divisão\n");
    scanf("%i", &operation);

    if (operation < 1 || operation > 4) {
        printf("Operação inválida");
        return;
    }

    printf("Digite dois números: ");
    scanf("%f%f", &firstNumber, &secondNumber);

    if (operation == 1)
        printf("%f + %f = %f", firstNumber, secondNumber, firstNumber + secondNumber);
    else if (operation == 2)
        printf("%f - %f = %f", firstNumber, secondNumber, firstNumber - secondNumber);
    else if (operation == 3)
        printf("%f * %f = %f", firstNumber, secondNumber, firstNumber * secondNumber);
    else if (secondNumber == 0)
        printf("Não é possível dividir por zero");
    else printf("%f / %f = %f", firstNumber, secondNumber, firstNumber / secondNumber);
}

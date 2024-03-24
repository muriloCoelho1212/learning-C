#include<stdio.h>
#include<locale.h>
#include<math.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    calculator();
    return 0;
}

void positivoNegativoNulo() {
    int primaryNumber;
    printf("Digite um n?mero: ");
    scanf("%i", &primaryNumber);

    if (primaryNumber > 0) printf("Positivo!");
    else if (primaryNumber < 0) printf("Negativo!");
    else printf("Nulo!");
}

void intervalBetweenTwoValues() {
    int initialInterval;
    int finalInterval;
    int primaryNumber;

    printf("Digite dois n?meros: ");
    scanf("%i%i", &initialInterval, &finalInterval);

    printf("Digite um n?mero: ");
    scanf("%i", &primaryNumber);

    if (primaryNumber > initialInterval && primaryNumber < finalInterval)
        printf("N?mero dentro do intervalo");
    else if (primaryNumber == initialInterval || primaryNumber == finalInterval)
        printf("N?mero est? em uma das extremidades");
    else printf("N?mero fora do intervalo");
}

void calculateIMC() {
    float heigth;
    float weigth;
    double imc;

    printf("Informe seu peso e sua altura: ");
    scanf("%f%f", &weigth, &heigth);

    imc = weigth / pow(heigth, 2);

    if (imc < 18.5) printf("Abaixo do peso");
    else if (imc < 25.0) printf("Saud?vel");
    else if (imc < 30.0) printf("Sobrepeso");
    else if (imc < 35.0) printf("Obesidade Grau I");
    else if (imc < 40.0) printf("Obesidade Grau II (severa)");
    else printf("Obesidade Grau III (m?rbida)");
}

void repeatNumber() {
    int firstNumber, secondNumber, thirdNumber;

    printf("Digite tr?s n?meros: ");
    scanf("%i%i%i", &firstNumber, &secondNumber, &thirdNumber);

    if (firstNumber == secondNumber || firstNumber == thirdNumber)
        printf("O n?mero %i est? repetido", firstNumber);
    else if (secondNumber == thirdNumber)
        printf("O n?mero %i est? repetido", secondNumber);
}

void higherNumber() {
    int firstNumber, secondNumber, thirdNumber;

    printf("Digite tr?s n?meros: ");
    scanf("%i%i%i", &firstNumber, &secondNumber, &thirdNumber);

    if (firstNumber > secondNumber && firstNumber > thirdNumber)
        printf("%i ? o maior n?mero", firstNumber);
    else if (secondNumber > thirdNumber)
        printf("%i ? o maior n?mero", secondNumber);
    else printf("%i ? o maior n?mero", thirdNumber);
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

    return;
}

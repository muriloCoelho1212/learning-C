#include <stdio.h>
#include <locale.h>
#include <math.h>

void doubleANumber() {
    int num1;
    printf("Receber um n�mero, calcular seu dobro e exibir o resultado.\n");
    printf("Digite um n�mero: ");
    scanf("%i", &num1);
    printf("O dobro desse n�mero � %i", num1 * 2);
}

void average() {
    float num1, num2;
    printf("============\n");
    printf("Receber dois valores, calcular sua m�dia aritm�tica e exibir o resultado.\n");
    printf("Digite o primeiro n�mero: ");
    scanf("%f", &num1);
    printf("Digite o segundo n�mero: ");
    scanf("%f", &num2);
    printf("A m�dia aritm�tica de %f e %f � %.2f", num1, num2, (num1 + num2) / 2);
}

void convertToCentimeter() {
    float metros;
    printf("============\n");
    printf("Receber um comprimento em metros, convert�-lo para cent�metros e mostrar o resultado.\n");
    printf("Digite o valor em metros: ");
    scanf("%f", &metros);
    printf("%.2fm equivalem a %.2fcm", metros, metros * 100);
}

void calculateDaysOfLife() {
    int anoNascimento;
    printf("============\n");
    printf("Receber o ano de nascimento de uma pessoa e mostrar aproximadamente quantos dias de vida ela tem.\n");
    printf("Qual o ano do seu nascimento: ");
    scanf("%i", &anoNascimento);
    printf("Voc� tem %i dias de vida", (2024 - anoNascimento) * 365);
}

void divisionAndRestDivision() {
    int num1, num2;
    printf("============\n");
    printf("Criar um programa em Linguagem C que receba dois n�meros inteiros e retorne: o valor da divis�o e o resto da divis�o.\n");
    printf("Digite o primeiro n�mero: ");
    scanf("%i", &num1);
    printf("Digite o segundo n�mero: ");
    scanf("%i", &num2);

    if (num2 == 0) {
        printf("N�o � poss�vel dividir por zero.");
    } else {
        printf("A divis�o de %i por %i � %i e seu resto � %i", num1, num2, num1 / num2, num1 % num2);
    }
}

void areaOfTriangle() {
    float base, heigth;
    printf("============\n");
    printf("Receber base e altura de um tri�ngulo, calcular sua �rea e exibir o valor calculado.\n");
    printf("Informe a base do tri�ngulo: ");
    scanf("%f", &base);
    printf("Informe a altura do tri�ngulo: ");
    scanf("%f", &heigth);
    printf("A �rea desse tri�ngulo �: %.2f", (base * heigth) / 2);
}

void convertFahrenheitToCelsius() {
    int fahrenheitNumber;
    printf("============\n");
    printf("Receber uma temperatura em Fahrenheit e convert�-la para Celsius atrav�s da seguinte f�rmula: Celsius = (Fahrenheit - 32) / 1.8. Exibir o valor em Celsius.\n");
    printf("Informe a temperatura em Fahrenheit: ");
    scanf("%i", &fahrenheitNumber);
    printf("A temperatura em Celsius �: %.2f�C", (fahrenheitNumber - 32) / 1.8);
}

void calculatePerimeterOfCircle() {
    const float PI = 3.14;
    float ray;
    printf("============\n");
    printf("Calcular e exibir o per�metro de uma circunfer�ncia recebendo seu raio. A f�rmula para o c�lculo � C = 2 * * r (utilizar = 3.14).\n");
    printf("Informe o raio da circunfer�ncia: ");
    scanf("%f", &ray);
    printf("O per�metro da circunfer�ncia �: %.3f", 2 * PI * ray);
}

void calculatesSquareRootAndEighthPower() {
    int num;
    printf("============\n");
    printf("Receber um n�mero e calcular o valor de sua raiz quadrada e sua oitava pot�ncia. Utilize as fun��es pow(base,expoente) e sqrt(num) da biblioteca <math.h>. Mostrar os valores obtidos.\n");
    printf("Informe um n�mero: ");
    scanf("%i", &num);
    printf("A raiz quadrada de %i � %.3f\n", num, sqrt(num));
    printf("A oitava pot�ncia de %i � %i", num, pow(num, 8));
}

void averageFuelConsumption() {
    float distance, spentFuel;
    printf("============\n");
    printf("Calcular e exibir o consumo m�dio de combust�vel de um ve�culo recebendo a dist�ncia percorrida e a quantidade de combust�vel gasto. Consumo m�dio = dist�ncia percorrida (km) / combust�vel gasto (l).\n");
    printf("Informe a dist�ncia percorrida (em km): ");
    scanf("%f", &distance);
    printf("Informe a quantidade de combust�vel gasto: ");
    scanf("%f", &spentFuel);
    printf("O consumo m�dio dessa viagem foi %.2fKm/L", distance / spentFuel);
}

void calculateAverageSpeed() {
    float distance, time;
    printf("============\n");
    printf("A velocidade m�dia de um ve�culo em um percurso � dada atrav�s da dist�ncia percorrida pelo tempo, ou seja, Vm = DeltaS / ?=Deltat. Calcular e exibir a velocidade m�dia do ve�culo em uma estrada recebendo esses dois dados do percurso.\n");
    printf("Informe a dist�ncia percorrida pelo ve�culo (em km): ");
    scanf("%f", &distance);
    printf("Informe o tempo para completar o percurso: (em horas): ");
    scanf("%f", &time);;
    printf("A velocidade m�dia do ve�culo foi: %.2fKm/h", (distance / time) * 3.6);
}

void calculateSalary() {
    const int priceNormalHourWorked = 10;
    const int priceExtraHourWorked = 15;
    int normalHourWorked, extraHourWorked;
    printf("============\n");
    printf("Uma empresa paga R$ 10.00 por hora normal trabalhada e R$ 15.00 por hora extra. Receber o total de horas normais e o total de horas extras trabalhadas por um empregado no m�s. Calcular e exibir o sal�rio dele.\n");
    printf("Informe a quantidade de horas normais trabalhadas no m�s: ");
    scanf("%i", &normalHourWorked);
    printf("Informe a quantidade de horas extras trabalhadas no m�s: ");
    scanf("%i", &extraHourWorked);
    printf("O seu sal�rio nesse m�s ser� R$%i", (normalHourWorked * priceNormalHourWorked) + (extraHourWorked * priceExtraHourWorked));
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    doubleANumber();
    average();
    convertToCentimeter();
    calculateDaysOfLife();
    divisionAndRestDivision();
    areaOfTriangle();
    convertFahrenheitToCelsius();
    calculatePerimeterOfCircle();
    calculatesSquareRootAndEighthPower();
    averageFuelConsumption();
    calculateAverageSpeed();
    calculateSalary();
    return 0;
}

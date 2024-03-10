#include <stdio.h>
#include <locale.h>
#include <math.h>

void doubleANumber() {
    int num1;
    printf("Receber um número, calcular seu dobro e exibir o resultado.\n");
    printf("Digite um número: ");
    scanf("%i", &num1);
    printf("O dobro desse número é %i", num1 * 2);
}

void average() {
    float num1, num2;
    printf("============\n");
    printf("Receber dois valores, calcular sua média aritmética e exibir o resultado.\n");
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    printf("A média aritmética de %f e %f é %.2f", num1, num2, (num1 + num2) / 2);
}

void convertToCentimeter() {
    float metros;
    printf("============\n");
    printf("Receber um comprimento em metros, convertê-lo para centímetros e mostrar o resultado.\n");
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
    printf("Você tem %i dias de vida", (2024 - anoNascimento) * 365);
}

void divisionAndRestDivision() {
    int num1, num2;
    printf("============\n");
    printf("Criar um programa em Linguagem C que receba dois números inteiros e retorne: o valor da divisão e o resto da divisão.\n");
    printf("Digite o primeiro número: ");
    scanf("%i", &num1);
    printf("Digite o segundo número: ");
    scanf("%i", &num2);

    if (num2 == 0) {
        printf("Não é possível dividir por zero.");
    } else {
        printf("A divisão de %i por %i é %i e seu resto é %i", num1, num2, num1 / num2, num1 % num2);
    }
}

void areaOfTriangle() {
    float base, heigth;
    printf("============\n");
    printf("Receber base e altura de um triângulo, calcular sua área e exibir o valor calculado.\n");
    printf("Informe a base do triângulo: ");
    scanf("%f", &base);
    printf("Informe a altura do triângulo: ");
    scanf("%f", &heigth);
    printf("A área desse triângulo é: %.2f", (base * heigth) / 2);
}

void convertFahrenheitToCelsius() {
    int fahrenheitNumber;
    printf("============\n");
    printf("Receber uma temperatura em Fahrenheit e convertê-la para Celsius através da seguinte fórmula: Celsius = (Fahrenheit - 32) / 1.8. Exibir o valor em Celsius.\n");
    printf("Informe a temperatura em Fahrenheit: ");
    scanf("%i", &fahrenheitNumber);
    printf("A temperatura em Celsius é: %.2f°C", (fahrenheitNumber - 32) / 1.8);
}

void calculatePerimeterOfCircle() {
    const float PI = 3.14;
    float ray;
    printf("============\n");
    printf("Calcular e exibir o perímetro de uma circunferência recebendo seu raio. A fórmula para o cálculo é C = 2 * * r (utilizar = 3.14).\n");
    printf("Informe o raio da circunferência: ");
    scanf("%f", &ray);
    printf("O perímetro da circunferência é: %.3f", 2 * PI * ray);
}

void calculatesSquareRootAndEighthPower() {
    int num;
    printf("============\n");
    printf("Receber um número e calcular o valor de sua raiz quadrada e sua oitava potência. Utilize as funções pow(base,expoente) e sqrt(num) da biblioteca <math.h>. Mostrar os valores obtidos.\n");
    printf("Informe um número: ");
    scanf("%i", &num);
    printf("A raiz quadrada de %i é %.3f\n", num, sqrt(num));
    printf("A oitava potência de %i é %i", num, pow(num, 8));
}

void averageFuelConsumption() {
    float distance, spentFuel;
    printf("============\n");
    printf("Calcular e exibir o consumo médio de combustível de um veículo recebendo a distância percorrida e a quantidade de combustível gasto. Consumo médio = distância percorrida (km) / combustível gasto (l).\n");
    printf("Informe a distância percorrida (em km): ");
    scanf("%f", &distance);
    printf("Informe a quantidade de combustível gasto: ");
    scanf("%f", &spentFuel);
    printf("O consumo médio dessa viagem foi %.2fKm/L", distance / spentFuel);
}

void calculateAverageSpeed() {
    float distance, time;
    printf("============\n");
    printf("A velocidade média de um veículo em um percurso é dada através da distância percorrida pelo tempo, ou seja, Vm = DeltaS / ?=Deltat. Calcular e exibir a velocidade média do veículo em uma estrada recebendo esses dois dados do percurso.\n");
    printf("Informe a distância percorrida pelo veículo (em km): ");
    scanf("%f", &distance);
    printf("Informe o tempo para completar o percurso: (em horas): ");
    scanf("%f", &time);;
    printf("A velocidade média do veículo foi: %.2fKm/h", (distance / time) * 3.6);
}

void calculateSalary() {
    const int priceNormalHourWorked = 10;
    const int priceExtraHourWorked = 15;
    int normalHourWorked, extraHourWorked;
    printf("============\n");
    printf("Uma empresa paga R$ 10.00 por hora normal trabalhada e R$ 15.00 por hora extra. Receber o total de horas normais e o total de horas extras trabalhadas por um empregado no mês. Calcular e exibir o salário dele.\n");
    printf("Informe a quantidade de horas normais trabalhadas no mês: ");
    scanf("%i", &normalHourWorked);
    printf("Informe a quantidade de horas extras trabalhadas no mês: ");
    scanf("%i", &extraHourWorked);
    printf("O seu salário nesse mês será R$%i", (normalHourWorked * priceNormalHourWorked) + (extraHourWorked * priceExtraHourWorked));
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    // doubleANumber();
    // average();
    // convertToCentimeter();
    // calculateDaysOfLife();
    // divisionAndRestDivision();
    // areaOfTriangle();
    // convertFahrenheitToCelsius();
    // calculatePerimeterOfCircle();
    // calculatesSquareRootAndEighthPower();
    // averageFuelConsumption();
    // calculateAverageSpeed();
    calculateSalary();
    return 0;
}

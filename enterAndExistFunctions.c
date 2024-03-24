#include <stdio.h>
#include <locale.h>
#include <math.h>

void doubleANumber() {
    int num1;
    printf("Receber um nðmero, calcular seu dobro e exibir o resultado.\n");
    printf("Digite um nðmero: ");
    scanf("%i", &num1);
    printf("O dobro desse nðmero ð %i", num1 * 2);
}

void average() {
    float num1, num2;
    printf("============\n");
    printf("Receber dois valores, calcular sua mðdia aritmðtica e exibir o resultado.\n");
    printf("Digite o primeiro nðmero: ");
    scanf("%f", &num1);
    printf("Digite o segundo nðmero: ");
    scanf("%f", &num2);
    printf("A mðdia aritmðtica de %f e %f ð %.2f", num1, num2, (num1 + num2) / 2);
}

void convertToCentimeter() {
    float metros;
    printf("============\n");
    printf("Receber um comprimento em metros, convertð-lo para centðmetros e mostrar o resultado.\n");
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
    printf("Vocð tem %i dias de vida", (2024 - anoNascimento) * 365);
}

void divisionAndRestDivision() {
    int num1, num2;
    printf("============\n");
    printf("Criar um programa em Linguagem C que receba dois nðmeros inteiros e retorne: o valor da divisðo e o resto da divisðo.\n");
    printf("Digite o primeiro nðmero: ");
    scanf("%i", &num1);
    printf("Digite o segundo nðmero: ");
    scanf("%i", &num2);

    if (num2 == 0) {
        printf("Nðo ð possðvel dividir por zero.");
    } else {
        printf("A divisðo de %i por %i ð %i e seu resto ð %i", num1, num2, num1 / num2, num1 % num2);
    }
}

void areaOfTriangle() {
    float base, heigth;
    printf("============\n");
    printf("Receber base e altura de um triðngulo, calcular sua ðrea e exibir o valor calculado.\n");
    printf("Informe a base do triðngulo: ");
    scanf("%f", &base);
    printf("Informe a altura do triðngulo: ");
    scanf("%f", &heigth);
    printf("A ðrea desse triðngulo ð: %.2f", (base * heigth) / 2);
}

void convertFahrenheitToCelsius() {
    int fahrenheitNumber;
    printf("============\n");
    printf("Receber uma temperatura em Fahrenheit e convertð-la para Celsius atravðs da seguinte fðrmula: Celsius = (Fahrenheit - 32) / 1.8. Exibir o valor em Celsius.\n");
    printf("Informe a temperatura em Fahrenheit: ");
    scanf("%i", &fahrenheitNumber);
    printf("A temperatura em Celsius ð: %.2fðC", (fahrenheitNumber - 32) / 1.8);
}

void calculatePerimeterOfCircle() {
    const float PI = 3.14;
    float ray;
    printf("============\n");
    printf("Calcular e exibir o perðmetro de uma circunferðncia recebendo seu raio. A fðrmula para o cðlculo ð C = 2 * * r (utilizar = 3.14).\n");
    printf("Informe o raio da circunferðncia: ");
    scanf("%f", &ray);
    printf("O perðmetro da circunferðncia ð: %.3f", 2 * PI * ray);
}

void calculatesSquareRootAndEighthPower() {
    int num;
    printf("============\n");
    printf("Receber um nðmero e calcular o valor de sua raiz quadrada e sua oitava potðncia. Utilize as funððes pow(base,expoente) e sqrt(num) da biblioteca <math.h>. Mostrar os valores obtidos.\n");
    printf("Informe um nðmero: ");
    scanf("%i", &num);
    printf("A raiz quadrada de %i ð %.3f\n", num, sqrt(num));
    printf("A oitava potðncia de %i ð %i", num, pow(num, 8));
}

void averageFuelConsumption() {
    float distance, spentFuel;
    printf("============\n");
    printf("Calcular e exibir o consumo mðdio de combustðvel de um veðculo recebendo a distðncia percorrida e a quantidade de combustðvel gasto. Consumo mðdio = distðncia percorrida (km) / combustðvel gasto (l).\n");
    printf("Informe a distðncia percorrida (em km): ");
    scanf("%f", &distance);
    printf("Informe a quantidade de combustðvel gasto: ");
    scanf("%f", &spentFuel);
    printf("O consumo mðdio dessa viagem foi %.2fKm/L", distance / spentFuel);
}

void calculateAverageSpeed() {
    float distance, time;
    printf("============\n");
    printf("A velocidade mðdia de um veðculo em um percurso ð dada atravðs da distðncia percorrida pelo tempo, ou seja, Vm = DeltaS / ?=Deltat. Calcular e exibir a velocidade mðdia do veðculo em uma estrada recebendo esses dois dados do percurso.\n");
    printf("Informe a distðncia percorrida pelo veðculo (em km): ");
    scanf("%f", &distance);
    printf("Informe o tempo para completar o percurso: (em horas): ");
    scanf("%f", &time);;
    printf("A velocidade mðdia do veðculo foi: %.2fKm/h", (distance / time) * 3.6);
}

void calculateSalary() {
    const int priceNormalHourWorked = 10;
    const int priceExtraHourWorked = 15;
    int normalHourWorked, extraHourWorked;
    printf("============\n");
    printf("Uma empresa paga R$ 10.00 por hora normal trabalhada e R$ 15.00 por hora extra. Receber o total de horas normais e o total de horas extras trabalhadas por um empregado no mðs. Calcular e exibir o salðrio dele.\n");
    printf("Informe a quantidade de horas normais trabalhadas no mðs: ");
    scanf("%i", &normalHourWorked);
    printf("Informe a quantidade de horas extras trabalhadas no mðs: ");
    scanf("%i", &extraHourWorked);
    printf("O seu salðrio nesse mðs serð R$%i", (normalHourWorked * priceNormalHourWorked) + (extraHourWorked * priceExtraHourWorked));
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

#include <stdio.h>

int maiorNumero(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
    int a, b;
    printf("Digite dois números: ");
    scanf("%d %d", &a, &b);
    int maior = maiorNumero(a, b);
    printf("O maior número é: %d\n", maior);
    return 0;
}


#include <stdio.h>

void imprimirMes(int numero) {
    char *meses[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    if (numero >= 1 && numero <= 12) {
        printf("%s\n", meses[numero - 1]);
    } else {
        printf("Número de mês inválido!\n");
    }
}

int main() {
    int numero;
    printf("Digite um número de 1 a 12: ");
    scanf("%d", &numero);
    imprimirMes(numero);
    return 0;
}

#include <stdio.h>

float fahrenheitParaCelsius(float fahrenheit) {
    return (fahrenheit - 32.0) * (5.0 / 9.0);
}

int main() {
    float fahrenheit, celsius;
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = fahrenheitParaCelsius(fahrenheit);
    printf("A temperatura em graus Celsius é: %.2f\n", celsius);
    return 0;
}

#include <stdio.h>

#define PI 3.141592

float volumeCilindro(float altura, float raio) {
    return PI * raio * raio * altura;
}

int main() {
    float altura, raio, volume;
    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);
    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);
    volume = volumeCilindro(altura, raio);
    printf("O volume do cilindro é: %.2f\n", volume);
    return 0;
}



#include <stdio.h>

#define PI 3.141592

float volumeEsfera(float raio) {
    return (4.0 / 3.0) * PI * raio * raio * raio;
}

int main() {
    float raio, volume;
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
    volume = volumeEsfera(raio);
    printf("O volume da esfera é: %.2f\n", volume);
    return 0;
}

#include <stdio.h>

float calcularIMC(float peso, float altura) {
    return peso / (altura * altura);
}

int main() {
    float peso, altura, imc;
    printf("Digite o peso (em quilos): ");
    scanf("%f", &peso);
    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);
    imc = calcularIMC(peso, altura);
    printf("Seu IMC é: %.2f\n", imc);
    return 0;
}
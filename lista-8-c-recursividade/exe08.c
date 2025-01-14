#include <stdbool.h>
#include <stdio.h>
#include <locale.h>
#include "global.h"

#define MAX_EXERCISES 19
#define MAX 100

bool getExitChoice(void);
void executeExercise(int choice);
int displayMenuAndGetChoice(void);

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    bool exitProgram = false;

    do {
        int choice = displayMenuAndGetChoice();

        if (choice >= 1 && choice <= MAX_EXERCISES) {
            executeExercise(choice);
        } else {
            printf("Invalid option!\n");
        }
        exitProgram = getExitChoice();
    } while (!exitProgram);
    printf("Thank you for using this program!\n");
    return 0;
}

int exercise01(void) {

    /*
     1. Escreva um algoritmo iterativo em C para avaliar a * b usando a adição, onde a e b são
     inteiros não negativos.
     */

    int a, b, result;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    result = somaIterativa(a, b);

    printf("%d * %d = %d", a, b, result);
    putchar('\n');

    return 0;
}

int exercise02(void) {

    /*
     2. Escreva uma definição recursiva para o cálculo de a * b e em seguida escreva um algoritmo
    recursivo para o calculo de a * b, onde a e b são inteiros não-negativos.
     */

    int a, b, result;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    result = multiplicacaoRecursiva(a, b);

    printf("%d * %d = %d", a, b, result);
    putchar('\n');

    return 0;
}

int exercise03(void) {

    /*
     3. Faça uma função recursiva em C que calcula o elemento máximo em um vetor.
     */

    printf("digite o tamanho do vetor:");
    int n, v[MAX];

    scanf("%d", &n);

    preencherVetor(v, n);

    int maximo = max(v, n);

    printf("elemento maximo: %d", maximo);
    putchar('\n');

    return 0;
}

int exercise04(void) {

    /*
     4. Faça uma função recursiva em C que calcula o elemento mínimo em um vetor.
     */

    printf("digite o tamanho do vetor:");
    int n;

    scanf("%d", &n);
    int v[n];

    preencherVetor(v, n);

    int minimo = min(v, n);

    printf("elemento minimo: %d", minimo);
    putchar('\n');

    return 0;
}

int exercise05(void) {

    /*
     5. Faça uma função recursiva em C que calcula a média dos elementos de um vetor.
     */

    printf("digite o tamanho do vetor:");
    int n, v[MAX];

    scanf("%d", &n);

    preencherVetor(v, n);

    float mediaVetor = media(v, n);

    printf("media dos elementos do vetor: %.2f", mediaVetor);
    putchar('\n');

    return 0;
}

int exercise06(void) {

    /*
     6. Faça uma representação da memória do computador considerando as chamadas das funções
    recursivas abaixo (vistas em aula). Faça um modelo passo a passo como nos exemplos visto
    em sala de aula:
    • fatorial(6)
    • fibonacci(5)
     */

    long fat, fib;
    fat = 6;
    fib = 5;

    long fatorial = fatorialRecursivo(fat);
    printf("%ld! = %ld", fat, fatorial);
    putchar('\n');

    int fibonacci = fibonacciRecursivo(fib);
    printf("fibonacci(%ld) = %d", fib, fibonacci);
    putchar('\n');
    return 0;
}

int exercise07(void) {

    /*
    7. Determine o que a seguinte definição recursiva para uma função f calcula. A definição da
    função f é dada abaixo:
    • Se n == 0 retorne 0.
    • Se n > 0 retorne n + f(n menos 1).
     */

    int n;

    printf("digite o valor de n: ");

    scanf("%d", &n);

    int result = f(n);

    printf("f(%d) = %d", n, result);
    putchar('\n');

    return 0;
}

int exercise08(void) {

    /*
    8. Execute a função ff abaixo com os argumentos 7 e 0.
    int ff(int n, int ind) {
    int i;
    for (i = 0; i < ind; i++)
    printf(‘‘ ");
    printf ("ff (%d, %d) \n", n, ind);
    if (n == 1)
    return 1;
    if (n % 2==0)
    return ff(n/2, ind + 1);
    return ff((n-1)/2, ind +1) + ff((n+1)/2, ind +1);
    }
    */

    int n = 7;
    int ind = 0;

    int result = ff(n, ind);

    printf("ff(%d, %d) = %d", n, ind, result);
    putchar('\n');

    return 0;
}

int exercise09(void) {

    /*
     9. Escreva uma função recursiva que calcule blg nc, ou seja, o piso do logaritmo de n na base 2.
     */

    long n;

    printf("digite o valor de n: ");
    scanf("%ld", &n);

    long result = logaritmo(n);

    printf("blg(%ld) = %ld", n, result);
    putchar('\n');


    return 0;
}

int exercise10(void) {

    /*
     10. Escreva uma função recursiva para a busca sequencial em um vetor.
     */

    printf("digite o tamanho do vetor:");
    int n, v[MAX], elemento, posicao;

    scanf("%d", &n);

    preencherVetor(v, n);

    printf("digite o elemento a ser buscado: ");
    scanf("%d", &elemento);

    posicao = buscaSequencial(v, n, elemento);

    printf("vetor[%d] = %d", posicao, elemento);
    putchar('\n');

    return 0;
}

int exercise11(void) {

    /*
     11. Escreva uma função recursiva para a busca binária em um vetor.
     */

    printf("digite o tamanho do vetor:");
    int n, v[MAX], elemento, posicao;

    scanf("%d", &n);
    preencherVetor(v, n);

    printf("digite o elemento a ser buscado: ");
    scanf("%d", &elemento);

    posicao = buscaBinaria(v, n, elemento);

    printf("vetor[%d] = %d", posicao, elemento);
    putchar('\n');

    return 0;
}

int exercise12(void) {

    /*
     12. Escreva uma função recursiva para o cálculo do máximo divisor comum de dois números
    inteiros não negativos. Lembre-se que
    • mdc(x,y) = x se y é zero,
    • mdc(x,y) = mdc(y,x%y) caso contrário.
     */

    int x, y, result;

    printf("digite o valor de x: ");
    scanf("%d", &x);

    printf("digite o valor de y: ");
    scanf("%d", &y);

    result = mdc(x, y);

    printf("mdc(%d, %d) = %d", x, y, result);
    putchar('\n');

    return 0;
}

int exercise13(void) {

    /*
     13. Suponha que uma matriz binária quadrada M represente a ligação entre um conjunto de n
     cidades. Desta forma M[i, j] = 1 indica que existe uma estrada da cidade i para a cidade
     j, e M[i, j] = 0 caso contrário. Por exemplo, na matriz abaixo temos que a cidade 0 possui
     estradas para 1 e 2, já a cidade 1 possui estrada apenas para 2. Note que existe estrada
     de 0 para 1, mas não de 1 para 0, pois só há estradas de 2 e 3 para 0.

     0 1 1 0
     0 0 1 0
     1 1 0 1
     1 0 1 0

     Escreva uma função recursiva que dada uma matriz M e uma cidade i determina todas as
    cidades que podem ser alcançadas a partir de i.
     */

    int M[][MAX] = {
            {0, 1, 1, 0},
            {0, 0, 1, 0},
            {1, 1, 0, 1},
            {1, 0, 1, 0}
    };

    int n = 4;
    int cidadeInicial = 0;

    int visitadas[MAX] = {0};
    cidadesAlcancaveis(M, n, cidadeInicial, visitadas);

    printf("Cidades alcancaveis a partir da cidade %d:\n", cidadeInicial);
    for (int i = 0; i < n; i++) {
        if (visitadas[i])
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}

int exercise14(void) {
    return 0;
}

int exercise15(void) {

    /*
    * 1 - Dado um vetor v de inteiro de tamanho tam, devemos caluclar a soma dos seus elementso da posição 0 até tam - 1
    * 2 - Como podemos descrever este problema de forma recurstiva ? Isto é, como podemos descrever este problema em função de si mesmo?
    * 3 - Vamos denotar por S(n) a soma dos elementos das posições 0 até n do vetor, e portanto devemos achar S(tam - 1)
    * 4 - O Valor de S(n) é dado por S(n) = v[n] + S(n - 1), onde S(0) = v[0]

     Se n = 0 então a somaElementosVetorInt S(o) é igual a v[0]
     */

    int v[] = {1, 2, 3, 4, 5};
    int tam = sizeof v / sizeof v[0];

    int somaVetor = somaElementosVetorInt(v, tam - 1);

    printf("Soma dos elementos do vetor: %d\n", somaVetor);
    return 0;
}

int exercise16(void) {

    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int tam = sizeof(v) / sizeof(v[0]);

    imprimeVetorIntEmOrderRecursivo(v, 0, tam);
    putchar('\n');

    return 0;
}

int exercise17(void) {

    /*
     como calcular potencia de x elevado a n para n inteiro positivo de forma recursiva
     */

    long x, n;

    printf("digite o valor de x: ");
    scanf("%ld", &x);

    printf("digite o valor de n: ");
    scanf("%ld", &n);

    long potencia = potenciaRecursiva(x, n);

    printf("%ld^%ld = %ld", x, n, potencia);
    putchar('\n');

    return 0;
}

int exercise18(void) {

    printf("Deseja descobrir o fatorial de qual numero ?");
    long n;

    scanf("%ld", &n);

    long fatorial = fatorialRecursivo(n);

    printf("%ld! = %ld", n, fatorial);
    putchar('\n');

    return 0;
}

int exercise19(void) {

    int vet[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int tam = sizeof(vet) / sizeof(vet[0]);
    int chave = 3;

    printf("Posicao da chave = %d", bb_rec(vet, 0, tam - 1, chave));
    putchar('\n');

    return 0;
}

bool getExitChoice(void) {
    int exitChoice;
    do {
        printf("Do you want to exit?\n"
               "Enter (1) for Yes or (0) for No: ");
        scanf("%d", &exitChoice);
    } while (exitChoice != 0 && exitChoice != 1);
    return exitChoice;
}

void executeExercise(int choice) {
    switch (choice) {
        case 1:
            exercise01();
            break;
        case 2:
            exercise02();
            break;
        case 3:
            exercise03();
            break;
        case 4:
            exercise04();
            break;
        case 5:
            exercise05();
            break;
        case 6:
            exercise06();
            break;
        case 7:
            exercise07();
            break;
        case 8:
            exercise08();
            break;
        case 9:
            exercise09();
            break;
        case 10:
            exercise10();
            break;
        case 11:
            exercise11();
            break;
        case 12:
            exercise12();
            break;
        case 13:
            exercise13();
            break;
        case 14:
            exercise14();
            break;
        case 15:
            exercise15();
            break;
        case 16:
            exercise16();
            break;
        case 17:
            exercise17();
            break;
        case 18:
            exercise18();
            break;
        case 19:
            exercise19();
            break;
        default:
            printf("Invalid option!\n");
            break;
    }
}

int displayMenuAndGetChoice(void) {
    printf("Exercise 01:\n");
    printf("Exercise 02:\n");
    printf("Exercise 03:\n");
    printf("Exercise 04:\n");
    printf("Exercise 05:\n");
    printf("Exercise 06:\n");
    printf("Exercise 07:\n");
    printf("Exercise 08:\n");
    printf("Exercise 09:\n");
    printf("Exercise 10:\n");
    printf("Exercise 11:\n");
    printf("Exercise 12:\n");
    printf("Exercise 13:\n");
    printf("Exercise 14:\n");
    printf("Exercise 15:\n");
    printf("Exercise 16:\n");
    printf("Exercise 17:\n");
    printf("Exercise 18:\n");
    printf("Exercise 19:\n");
    printf("Enter the number of the exercise you want to execute: ");

    int choice;
    scanf("%d", &choice);
    return choice;
}
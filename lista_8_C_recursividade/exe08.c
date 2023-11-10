#include <stdbool.h>
#include <stdio.h>
#include <locale.h>
#include "global.h"

#define MAX_EXERCISES 11

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
     1. Escreva um algoritmo iterativo em C para avaliar a * b usando a adi��o, onde a e b s�o
    inteiros n�o negativos.
     */

    return 0;
}

int exercise02(void) {

    /*
     2. Escreva uma defini��o recursiva para o c�lculo de a * b e em seguida escreva um algoritmo
    recursivo para o calculo de a * b, onde a e b s�o inteiros n�o-negativos.
     */

    return 0;

}

int exercise03(void) {

    /*
     3. Fa�a uma fun��o recursiva em C que calcula o elemento m�ximo em um vetor.
     */

    return 0;
}

int exercise04(void) {

    /*
     * 4. Fa�a uma fun��o recursiva em C que calcula o elemento m�nimo em um vetor.
     */

    return 0;
}

int exercise05(void) {

    /*
     * 5. Fa�a uma fun��o recursiva em C que calcula a m�dia dos elementos de um vetor.
     */

    return 0;
}

int exercise06(void) {

    /*
     * 6. Fa�a uma representa��o da mem�ria do computador considerando as chamadas das fun��es
    recursivas abaixo (vistas em aula). Fa�a um modelo passo a passo como nos exemplos visto
    em sala de aula:
    � fatorial(6)
    � fibonacci(5)
     */

    return 0;
}

int exercise07(void) {

    /*
     * 7. Determine o que a seguinte defini��o recursiva para uma fun��o f calcula. A defini��o da
    fun��o f � dada abaixo:
    � Se n == 0 retorne 0.
    � Se n > 0 retorne n + f(n menos 1).
     */

    return 0;
}

int exercise08(void) {

    /*

     8. Execute a fun��o ff abaixo com os argumentos 7 e 0.
    int ff(int n, int ind) {
    int i;
    for (i = 0; i < ind; i++)
    printf(�� ");
    printf ("ff (%d, %d) \n", n, ind);
    if (n == 1)
    return 1;
    if (n % 2==0)
    return ff(n/2, ind + 1);
    return ff((n-1)/2, ind +1) + ff((n+1)/2, ind +1);
    }
    */

    return 0;
}

int exercise09(void) {

    /*
     * 9. Escreva uma fun��o recursiva que calcule blg nc, ou seja, o piso do logaritmo de n na base 2.
     */
    return 0;
}

int exercise10(void) {

    /*
     * 10. Escreva uma fun��o recursiva para a busca sequencial em um vetor.
     */

    return 0;
}

int exercise11(void) {

    /*
     * 11. Escreva uma fun��o recursiva para a busca bin�ria em um vetor.
     */

    return 0;
}

int exercise12(void) {

    /*
     12. Escreva uma fun��o recursiva para o c�lculo do m�ximo divisor comum de dois n�meros
    inteiros n�o negativos. Lembre-se que
    � mdc(x,y) = x se y � zero,
    � mdc(x,y) = mdc(y,x%y) caso contr�rio.
     */
    return 0;
}

int exercise13(void) {

    /*
     13. Suponha que uma matriz bin�ria quadrada M represente a liga��o entre um conjunto de n
     cidades. Desta forma M[i, j] = 1 indica que existe uma estrada da cidade i para a cidade
     j, e M[i, j] = 0 caso contr�rio. Por exemplo, na matriz abaixo temos que a cidade 0 possui
     estradas para 1 e 2, j� a cidade 1 possui estrada apenas para 2. Note que existe estrada
     de 0 para 1, mas n�o de 1 para 0, pois s� h� estradas de 2 e 3 para 0.

     0 1 1 0
     0 0 1 0
     1 1 0 1
     1 0 1 0

     Escreva uma fun��o recursiva que dada uma matriz M e uma cidade i determina todas as
    cidades que podem ser alcan�adas a partir de i.
     */
    return 0;
}

int exercise14(void) {
    return 0;
}

int exercise15(void) {
    /*Soma dos elementos de um vetor*/

    /*
    * 1 - Dado um vetor v de inteiro de tamanho tam, devemos caluclar a soma dos seus elementso da posi��o 0 at� tam - 1
    * 2 - Como podemos descrever este problema de forma recurstiva ? Isto �, como podemos descrever este problema em fun��o de si mesmo?
    * 3 - Vamos denotar por S(n) a soma dos elementos das posi��es 0 at� n do vetor, e portanto devemos achar S(tam - 1)
    * 4 - O Valor de S(n) � dado por S(n) = v[n] + S(n - 1), onde S(0) = v[0]

     Se n = 0 ent�o a somaElementosVetorInt S(o) � igual a v[0]
     */

    int v[] = {1, 2, 3, 4, 5};
    int tam = 5;

    int somaVetor = somaElementosVetorInt(v, tam - 1);

    printf("Soma dos elementos do vetor: %d\n", somaVetor);
    return 0;
}

int exercise16(void) {

    /*
     *
     */

    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int tam = sizeof(v) / sizeof(v[0]);

    imprimeVetorIntEmOrderRecursivo(v, 0, tam);
    putchar('\n');

    return 0;
}

int exercise17(void) {
    return 0;
}

int exercise18(void) {
    return 0;
}

int exercise19(void) {
    return 0;
}

int exercise20(void) {
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
        case 20:
            exercise20();
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
    printf("Enter the number of the exercise you want to execute: ");

    int choice;
    scanf("%d", &choice);
    return choice;
}
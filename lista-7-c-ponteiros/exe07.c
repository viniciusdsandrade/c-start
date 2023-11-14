#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include "global.h"

#define MAX_EXERCISES 30

int displayMenuAndGetChoice(void);
bool getExitChoice(void);
void executeExercise(int choice);

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    bool exitProgram = false;

    do {
        int choice = displayMenuAndGetChoice();

        if (choice >= 1 && choice <= MAX_EXERCISES)
            executeExercise(choice);
        else
            printf("Invalid option!\n");

        exitProgram = getExitChoice();
    } while (!exitProgram);
    printf("Thank you for using the program!\n");
    return 0;
}

int exercise01(void) {

    /*
    1 - Considere que tenha sido executado as seguintes instru��es (assuma que o endere�o de x
    � 1000 e de y � 1004):
    int x = 10, y=20;
    int* p1;
    int* p2;
    p1 = &x;
    p2 = &y;
    (*p1)++;
    Determine o valor especificado em cada item abaixo:
    (a) x
    (b) y
    (c) &x
    (d) &y
    (e) p1
    (f) p2
    (g) *p1 + *p2
    (h) *(&x)
    (i) &(*p2)
     */
    return 0;
}

int exercise02(void) {



    /*
    2 - O que ser� impresso pelo programa abaixo?
    Considere que a seja inicializada com a soma
    dos 3 primeiros d�gitos do seu RA e b seja inicializada com a soma dos demais d�gitos. Por
    exemplo, se RA=123456 ent�o a recebe inicialmente 6 enquanto que b recebe inicialmente 15.

    Vinicius dos Santos Andrade
    RA: 2760482311026
    #include <stdio.h>
    int main(){
    int a=Soma 3 primeiros d�gitos, b=Soma dos demais d�gitos, *c, *d;
    c = &a;
    d = c;
    c = &b;
    if(*d % 2 == 0)
    *d = *d - 10;
    else
    *c = 2 * (*c);

    printf("a = %d, b = %d\n", a, b);
    }
    */

    int a = 15, b = 36, *c, *d;

    c = &a;
    d = c;
    c = &b;

    if (*d % 2 == 0)
        *d = *d - 10;
    else
        *c = 2 * (*c);

    printf("a = %d, b = %d\n", a, b);

    return 0;
}

int exercise03(void) {

    /*
     3 - O que ser� impresso pelo programa abaixo?
     #include <stdio.h>
     void f1(int v[], int n, int *a){
     int i;
     *a = v[0];
     for(i=1; i<n; i++){
     if(v[i]%2==0 && (*a) < v[i])
     *a = v[i];
     }
     }
     int main(){
     int v[] ={14, 7, 8, 51, 13, 20, 2};
     int h = 15;
     f1(v, 7, &h);
     printf("h = %d\n", h);
     }
     */

    int v[] = {14, 7, 8, 51, 13, 20, 2};
    int h = 15;
    f1(v, 7, &h);
    printf("h = %d\n", h);

    return 0;
}

int exercise04(void) {

    /*
    4 - Escreva uma fun��o que recebe um valor inteiro positivo n como par�metro e dois ponteiros
    para inteiros b e k. A fun��o deve encontrar um valor inteiro b0 tal que b0k0
    = n para algum
    inteiro k0, e b0 seja o menor poss�vel. A fun��o deve retornar no endere�o apontado por b
    (respectivamente k) o valor de b0 (respectivamente k0) encontrado. O prot�tipo da fun��o
    deve ser:

    void menor_base_log(int n, int *b, int *k);
    */

    return 0;
}

int exercise05(void) {

    /*
     5. Escreva uma fun��o chamada primo que recebe como par�metro um inteiro n e dois outros
    ponteiros para inteiros p1 e p2. A fun��o deve retornar no endere�o apontado por p1 o
    maior n�mero primo que � menor do que n e deve retornar no endere�o apontado por p2
    o menor n�mero primo que � maior do que m. O prot�tipo da fun��o deve ser:

    int primo(int n, int *p1, int *p2);
     */

    return 0;
}

int exercise06(void) {

    /*
    6. Escreva uma fun��o chamada media que recebe um vetor de double, um inteiro n que
    indica o tamanho do vetor, e um ponteiro para inteiro i. A fun��o deve retornar a m�dia
    dos n elementos no vetor e no endere�o apontado por i deve retornar a posi��o do elemento
    que tem o valor mais pr�ximo da m�dia.
    O prot�tipo da fun��o deve ser:

    double media(double vet[], int n, int *i);
    */

    return 0;
}

int exercise07(void) {

    /*
     * 7. Escreva uma fun��o que recebe como par�metro um vetor de inteiros, um inteiro n que
    indica o tamanho do vetor e dois ponteiros para inteiro f1 e f2. A fun��o deve devolver no
    endere�o apontado por f1 o elemento do vetor de menor frequ�ncia (que possui o menor
    n�mero de ocorr�ncias) e no endere�o apontado por f2 o elemento do vetor de maior
    frequ�ncia.
    O prot�tipo da fun��o deve ser:

    void frequencias(int v[], int n, int *f1, int *f2);
     */

    return 0;
}

int exercise08(void) {

    int *variable;
    int a = 90;
    variable = &a;

    printf("%d", *variable);
    putchar('\n');

    return 0;
}

int exercise09(void) {

    int b;
    int *c;

    b = 10;
    c = &b;
    *c = 11;

    printf("%d", b);
    putchar('\n');

    return 0;
}

int exercise10(void) {
    int num, q = 1;
    int *p;

    num = 100;
    p = &num;
    q = *p;

    printf("%d", q);
    putchar('\n');

    return 0;
}

int exercise11(void) {
    int a, b;
    int *c;

    b = 10;
    c = &a;
    *c = 13;

    printf("%d", b);
    putchar('\n');

    return 0;
}

int exercise12(void) {

    int b, a;
    int *c;

    b = 10;
    c = &a;
    *c = 11;
    a = b * (*c);
    printf("%d", a);
    putchar('\n');

    return 0;
}

int exercise13(void) {

    double a, b, *c;

    b = 10.89;
    c = &b;
    a = *c;

    printf("%lf", a);

    return 0;
}

int exercise14(void) {

    double *a = NULL;
    double *b = NULL;
    double c = 5;
    a = &c;

    if (a != NULL) {
        b = a;
        printf("Numero : %.2lf", *b);
    }
    putchar('\n');

    return 0;
}

int exercise15(void) {
    int x = 4, y = 5;

    swap(&x, &y);

    printf("x = %d, y = %d", x, y);
    putchar('\n');

    return 0;
}

int exercise16(void) {
    int a[] = {1, 2, 3, 4, 5};
    int *p;
    p = a;

    for (int i = 0; i < 5; i++) {
        printf("%d ", p[i]);
    }
    putchar('\n');

    return 0;
}

int exercise17(void) {
    int a[] = {1, 2, 3, 5, 6};
    int *b, i;

    b = a;

    printf("\nConteudo de B\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", b[i]);
    }

    printf("\nConteudo de A\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    putchar('\n');

    return 0;
}

int exercise18(void) {
    int a = 3, b = 2, *p = NULL, *q = NULL;
    p = &a;
    q = p;
    *q = *q + 1;
    q = &b;
    b = b + 1;

    printf("%d\n", *q);
    printf("%d\n", *p);

    return 0;
}

int exercise19(void) {
    char p[] = "abc";
    char s[] = "abc";
    char q[] = "def";
    char t[] = "def";

    char r[10]; // Aseg�rese de que r tenga suficiente espacio para almacenar la concatenaci�n
    char u[10];

    strcat_custom(p, q, r);
    strcat_custom2(s, t, u);
    printf("%s \n", r);
    printf("%s \n", u);

    return 0;
}

int exercise20(void) {

    return 0;
}

int exercise21(void) {

    return 0;
}

int exercise22(void) {

    return 0;
}

int exercise23(void) {

    return 0;
}

int exercise24(void) {

    return 0;
}

int exercise25(void) {

    return 0;
}

int exercise26(void) {

    return 0;
}

int exercise27(void) {

    return 0;
}

int exercise28(void) {

    return 0;
}

int exercise29(void) {

    return 0;
}

int exercise30(void) {

    return 0;
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
    printf("Exercise 20:\n");
    printf("Exercise 21:\n");
    printf("Exercise 22:\n");
    printf("Exercise 23:\n");
    printf("Exercise 24:\n");
    printf("Exercise 25:\n");
    printf("Exercise 26:\n");
    printf("Exercise 27:\n");
    printf("Exercise 28:\n");
    printf("Exercise 29:\n");
    printf("Exercise 30:\n");

    printf("Enter the number of the exercise you want to execute: ");

    int choice;
    scanf("%d", &choice);
    return choice;
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
        case 21:
            exercise21();
            break;
        case 22:
            exercise22();
            break;
        case 23:
            exercise23();
            break;
        case 24:
            exercise24();
            break;
        case 25:
            exercise25();
            break;
        case 26:
            exercise26();
            break;
        case 27:
            exercise27();
            break;
        case 28:
            exercise28();
            break;
        case 29:
            break;
        case 30:
            exercise30();
            break;
        default:
            printf("Invalid option!\n");
            break;
    }
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
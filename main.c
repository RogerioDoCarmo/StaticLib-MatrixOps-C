#include <stdio.h>
#include <stdlib.h>

#include "lib\alocar\LIB_MEM_DOUBLE.h"
#include "lib\matriz\LIB_MATRIX_OPERATIONS.h"

#define NEW_LINE_SINGLE printf("\n")
#define NEW_LINE_DOUBLE printf("\n\n")
#define HEADER_LINE_SINGLE  printf("\n============================================================\n")
#define DIVISOR_LINE_SINGLE printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n")

int main() {
    HEADER_LINE_SINGLE;
    printf("\t    Trabalho Tecnicas de Programacao\n");
    printf("\t Nome: Rogerio - PPGC: FCT/UNESP ~ 2019");
    HEADER_LINE_SINGLE;
    NEW_LINE_DOUBLE;

    double **mA = aloca(3,3);

    mA[0][0] = 10.334;
    printf("Valor em A[0,0]: %4.3lf", mA[0][0]);

    libera(3,mA);
    //printf("\nValor em A[0,0]: %04.3lf", mA[0][0]); esse valor eh lixo

    HEADER_LINE_SINGLE;
    NEW_LINE_DOUBLE;

    /*malloc*/
             mA = aloca(3,3);
    double **mB = aloca(3,3);
    double **mC = aloca(3,3);

    printf("Matriz A:\n");
    populate_matrix(mA, 3,3);
    print_matrix(mA,3,3);

    NEW_LINE_DOUBLE;

    printf("Matriz B:\n");
    populate_matrix(mB, 3,3);
    print_matrix(mB,3,3);

    HEADER_LINE_SINGLE;
    NEW_LINE_DOUBLE;
    /*===========================================================*/

    printf("SOMA C = A + B\n");
    sum_matrices(3,3, mA, mB, mC);
    print_matrix(mC,3,3);

    HEADER_LINE_SINGLE;
    NEW_LINE_DOUBLE;
    /*===========================================================*/

    printf("SUBTRACAO C = A - B\n");
    sub_matrices(3,3, mA, mB, mC);
    print_matrix(mC,3,3);

    HEADER_LINE_SINGLE;
    NEW_LINE_DOUBLE;
    /*===========================================================*/

    printf("MULTIPLICACAO C = A * B\n");
    mul_matrices(3,3, mA, mB, mC);
    print_matrix(mC,3,3);

    HEADER_LINE_SINGLE;
    NEW_LINE_DOUBLE;
    /*===========================================================*/

    printf("TRANSPOSTA C = At\n");
    transp_matrix(3,3, mA, mC);
    print_matrix(mC,3,3);

    HEADER_LINE_SINGLE;
    NEW_LINE_DOUBLE;
    /*===========================================================*/

    /*free*/
    libera(3,mA);
    libera(3,mB);
    libera(3,mC);

    printf("Pressione qualquer tecla para encerrar... ");
    getchar();

    return 0;
}





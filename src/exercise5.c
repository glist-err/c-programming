#include <stdio.h>

int main(int argc, char** argv) {
    // Matrix A
    printf("Enter matrix A: ");
    
    float arrayA[10][3];

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 3; ++j) {
            scanf("%f", &arrayA[i][j]);
        }
    }

    // MatrixB
    printf("Enter matrix B: ");
    
    float arrayB[3][10];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 10; ++j) {
            scanf("%f", &arrayB[i][j]);
        }
    }

    // A * B
    float arrC[10][10];

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            arrC[i][j] = 0;

            for (int k = 0; k < 3; ++k) {
                arrC[i][j] += arrayA[i][k] * arrayB[k][j];
            }
        }
    }
    
    printf("Array C: ");
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            printf("%.0f ", arrC[i][j]);
        }
    }

    return 0;
}
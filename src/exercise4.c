#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float X = atof(argv[1]);
    int K = atoi(argv[2]);
    
    printf("Enter 10 numbers: ");
    
    float array[10];

    for (int i = 0; i < 10; ++i) {
        scanf("%f", &array[i]);
    }
    
    for (int i = 9; i > K; --i) {
        array[i] = array[i-1];
    }

    array[K] = X;

    printf("New array:\n");
    for(int i = 0; i < 10; ++i) {
        printf("%.0f ", array[i]);
    }

    return 0;
}
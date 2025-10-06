#include <stdio.h>

int main(int argc, char** argv) {
    float array[10];
    float inverse[10];

    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; ++i) {
        scanf("%f", &array[i]);
    }

    for (int i = 0; i < 10; ++i) {
        inverse[i] = array[9-i];
    }

    printf("Inverse: ");
    for (int i = 0; i < 10; ++i) {
        printf("%.1f ", inverse[i]);
    }

    return 0;
}
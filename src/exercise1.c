#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    printf("Enter 10 numbers: ");
    
    float array[10];

    for (int i = 0; i < 10; ++i) {
        scanf("%f", &array[i]);
    }

    float sum = 0;
    int count = 0;
    for (int i = 0; i < 10; ++i) {
        sum += array[i];
        count += 1;
    }

    printf("Average = %.3f", (sum/(float)count));
}
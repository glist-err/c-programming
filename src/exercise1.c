#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    printf("Enter 10 numbers: ");
    
    float array[10];

    for (int i = 0; i < 10; ++i) {
        scanf("%f", &array[i]);
    }
}
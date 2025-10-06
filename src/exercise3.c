#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(int argc, char** argv) {
    int array[N];
    int new_arr[N];
    int sdvig = atoi(argv[1]);

    printf("Enter 10 numbers: ");
    for (int i = 0; i < N; ++i) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < N; ++i) {
        new_arr[(i + sdvig + N) % N] = array[i];
    }

    printf("New array:\n");
    for (int i = 0; i < N; ++i) {
        printf("%d ", new_arr[i]);
    }

    return 0;
}
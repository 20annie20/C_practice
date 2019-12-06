#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int main(int argc, char**argv){
    double numbers[MAX_SIZE];
    numbers[0]=0;

    for(int i = 1; i < argc; i++){
        numbers[i] = atoi(argv[i]);
    }
    double sum = 0;
    for(int i = 0; i < argc; i++){
        sum += numbers[i];
    }
    printf("suma wynosi: %lf\n", sum);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    srand(time(NULL));
    int random = rand() % 101;
    int x = -1;
    while(x != random){
        printf("zgadnij liczbe:\n");
        scanf("%d", &x);
        if(x < random){
            printf("za malo!\n");
        }else if(x > random){
            printf("za duzo!\n");
        }
    }
    printf("zgadles! liczba to %d\n", random);
}
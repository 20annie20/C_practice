#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int findrandom(int start, int end){
    return rand() % ((end - start + 1) + start);
}

void main(){
    srand(time(NULL));
    int random = rand() % 101;
    int x = rand() % 101;
    int start, end;
    start = 0;
    end = 100;
    while(x != random){
        if(x < random){
            end--;
            x = findrandom(start, end);
        }else if(x > random){
            start++;
            x = findrandom(start, end);
        }
    }
    printf("zgadles! liczba to %d\n", random);
}
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    srand(time(NULL));
    int random = rand()%2;
    printf("%d", random);
}

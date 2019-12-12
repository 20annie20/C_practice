//program jackpotowy
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
    srand(time(NULL));
    int arr[3];
    for(int i = 0; i < 3; i++){
        arr[i] = rand() % (7) + 1;
        printf("wylosowano: %d\n", arr[i]);
    }
    if(arr[0] == arr[1] && arr[1] == arr[2]){
        printf("wygrales!");
    }
}
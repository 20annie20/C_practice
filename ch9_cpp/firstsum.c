#include <stdio.h>

int main(){
    int sum[1000];
    sum[0] = 1;
    for(int i = 2; i < 1000; i++){
        sum[i] = 0;
        for(int j = 1; j < i; j++){
            if(i%j == 0){
                sum[i] += j;
            }
        }
        printf("suma dla liczby %d to: %d\n", i, sum[i]);
        if(sum[i] == 1){
            printf("o! liczba pierwsza!\n");
        }
    }
}
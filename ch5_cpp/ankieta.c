#include <stdio.h>

int main(){
    int x, sum1, sum2, sum3;
    sum1 = 0;
    sum2 = 0;
    sum3 = 0;
    while(x != 0){
        printf("podaj opcje 1, 2 lub 3:\n");
        scanf("%d", &x);
        if(x == 1){
            sum1++;
        }else if( x == 2){
            sum2++;
        }else if( x == 3){
            sum3++;
        }else{
            printf("podana opcja nieprawidlowa\n");
        }
    }
    for(int i = 0; i < sum1; i++){
        printf("*");
    }
    printf("\n");
    for(int i = 0; i < sum2; i++){
        printf("*");
    }
    printf("\n");
    for(int i = 0; i < sum3; i++){
        printf("*");
    }
    printf("\n");
}
#include <stdio.h>

int zbierzDane(){
    printf("prosze podac liczbe:\n");
    int x;
    scanf("%d", &x);
    return x;
}

int main(){
    
    int x;
    int sum = 0;
    while(x != 0){
        x = zbierzDane();
        sum += x;
    }
    printf("suma wynosi: %d\n", sum);
}
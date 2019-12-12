//symulacja stosu
#include <stdlib.h>
#include <Stdio.h>

typedef struct node{
    int wartosc;
    struct node *poprzednik;
}*stos_t, element_stosu;

stos_t szczyt_stosu;

int pop(void){
    if(szczyt_stosu == NULL){
        printf("stosu brak!\n");
        return EXIT_FAILURE;
    }
    int value;
    value = szczyt_stosu->wartosc;
    stos_t temp = szczyt_stosu;
    szczyt_stosu = szczyt_stosu->poprzednik;
    temp = NULL;
    return value;
}
void put(int nowa_wart){
    element_stosu *nowy = malloc(sizeof (nowy) * sizeof(int)); //czy dobrze?
    nowy->wartosc = nowa_wart;
    nowy->poprzednik = szczyt_stosu;
    szczyt_stosu = nowy;

}
int top(void){
    if(szczyt_stosu == NULL){
        printf("stosu brak!\n");
        return EXIT_FAILURE;
    }
    return szczyt_stosu->wartosc;
}

int main(){

    for(int i = 0; i < 10; i++){
        put(i);
        printf("dokladam: %d\n", i);
    }
    printf("wartosc: %d\n",top());
    printf("sciagane: %d\n", pop());
    printf("sciagane: %d\n", pop());

}
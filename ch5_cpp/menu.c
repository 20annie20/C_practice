//program symulujący menu czegoś
#include <stdio.h>
#include <stdlib.h>

void wyswietlOpcje(){
    printf("Witaj w menu! Prosze, wpisz jedna z wybranych opcji: 1,2 lub 3:\n");
}

void checkOptions(int option){
    
    if(option == 1){
        printf("starting the game...\n");
    }else if(option == 2){
        printf("closing the app!\n");
    }else if(option == 3){
        printf("pausing the game!\n");
    }else{
        printf("Hej, wpisales cos co nie jest w menu!\n");
        wyswietlOpcje();
    }
}

int main(){
    wyswietlOpcje();
    int option;
    scanf("%d", &option);
    checkOptions(option);
    return 0;
}
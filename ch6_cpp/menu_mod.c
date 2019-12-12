//program symulujący menu czegoś
#include <stdio.h>
#include <stdlib.h>

void wyswietlOpcje(){
    printf("Witaj w menu! Prosze, wpisz jedna z wybranych opcji: 1,2 lub 3:\n");
}

void checkOptions(int option){
    
    switch (option){
        case 1:
            printf("starting the game...\n");
            break;
        case 2:
            printf("closing the app!\n");
            break;
        case 3:
            printf("pausing the game!\n");
            break;
        default:
            printf("Hej, wpisales cos co nie jest w menu!\n");
            wyswietlOpcje();
            break;
    }
}

int main(){
    wyswietlOpcje();
    int option;
    scanf("%d", &option);
    checkOptions(option);
    return 0;
}
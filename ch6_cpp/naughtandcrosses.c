#include <stdio.h>

int main(){
    printf("witaj w grze w kolko i krzyzyk 0 to krzyzyk, jeden to kolko\n");
    int czyjaKolej = 1;
    int wybrane;
    char value;
    char macierz[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            macierz[i][j] = '-';
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%c", macierz[i][j]);
        }
        printf("\n");
    }
   

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("podaj opcje:");
            scanf("%d", &wybrane);
            switch(wybrane){
                case 0:
                    value = 'X';
                    break;
                case 1:
                    value = 'O';
                    break;
                default:
                    break;
            }
            macierz[i][j] = value;
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    printf("%c", macierz[i][j]);
                }
            printf("\n");
            }
        }
    }
    
}
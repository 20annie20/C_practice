#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct{
    int ocena;
    int waga;
}para_t;

int main(){
    printf("witaj w programie obliczajacym srednia wazona!\n");
    printf("ile ocen bedziesz wprowadzac?\n");
    int ile;
    scanf("%d", ile);

    para_t pary_ocen[100];
    for(int i = 0; i < ile; i++){
        int temp_ocena;
        int temp_waga;
        printf("proszę wprowadzić po spacji: ocene, wage oceny(uwazaj na kolejnosc):\n");
        scanf("%d %d", &temp_ocena, &temp_waga);
        printf("Okej! Wpisalas: %d, %d/n. Chcesz zatwierdzic? [y/n]", temp_ocena, temp_waga);
        char decyzja;
        scanf("%c", &decyzja);
        if(decyzja == 'y'){
            pary_ocen[i].ocena = temp_ocena;
            pary_ocen[i].waga = temp_waga;
        }else{
            printf("anulujemy to wprowadzanie...\n");
            i--;
        }
    }

}
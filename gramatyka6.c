#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAX_LEN 1000

int n = 0;
void S();
void A();


float random;

int cmp(const void *a, const void *b){
    char *_a = (char*)a;
    char *_b = (char*)b;
    if(strlen(_a) > strlen(_b)){
        return 1;
    }else if(strlen(_a)==strlen(_b)){
        return 0;
    }else{
        return -1;
    }
}

int main(){
    srand(time(NULL));

    printf("----------------------------------------\n");
    printf("program wypisujacy zadana ilosc lancuchow\nz jezyka opisanego za pomoca gramatyki bezkontekstowej");
    printf("\nProdukcje gramatyki: \n");
    printf("S->AA|0    A->SS|1\n");
    printf("----------------------------------------\n");
    
    while(n == 0){
        printf("prosze wprowadzic liczbe oczekiwanych lancuchow:\n");
        scanf("%d", &n);
    }
    char **macierz_slow;
    macierz_slow = (char**)malloc(n* sizeof(char)*MAX_LEN);
    int licznik = 1;

    char word[MAX_LEN];

    sscanf("0", "%s",macierz_slow[0]);

    while(licznik < n){
        random=rand();
        word[0] = '\0';
		S(word);
        printf("slowo: %s\n", word);
        int dasie=1;

        for(int i = 0; i < n; i++){
            sscanf("0", "%s", macierz_slow[i]);
        }

        //petla porownujaca word, z tym co juz jest w tablicy macierz
        for(int i = 0; i < licznik; i++){
            if(strcmp(word, macierz_slow[i]) == 0){
                printf("slowo jest w macierzy!\n");
                dasie=0;
            }
        }
        if(dasie)
            continue;
        sscanf(word, "%s", macierz_slow[++licznik]); 
        printf("dodano %s do macierzy!\n", word);
        for(int i = 0; i < n; i++){
            printf("slowo w macierzy to %s\n", macierz_slow[i]);
        }   
    }
    qsort(macierz_slow ,n, 100*sizeof(char), cmp);

    for(int i = 0; i < n; i++){
      printf("ostatecznie slowo to %s\n", macierz_slow[i]);
    }
}
    


void S(char word[]) {

	random /= 1.1;
    if((int)random%2 != 1){
        strcat(word, "0");
        
    }else {
		A(word);
		A(word);
    }
}

void A(char word[]){
	random /= 1.1;
    if((int)random%2 != 1){
        strcat(word, "1");
        
    }else{
		S(word);
		S(word);
    }

}
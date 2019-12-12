#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main(){

    char password[MAX_LEN];
    char temp;
    for(int i = 0; i < 3; i++){
        printf("podaj haslo:\n");
        fgets(password, MAX_LEN, stdin);
        printf("wpisales: %s\n", password);

        if(strcmp(password, "abcd")){
            printf("prawidlowe haslo!\n");
            break;
        }
    }
    if(strcmp(password, "abcd") == 0){
        printf("nie udalo sie wprowadzic hasla!!\n");
    }
    return 0;
}
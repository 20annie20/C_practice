#include <stdio.h>
int main(){
    printf("prosze podac wiek pierwszej osoby:\n");
    int first, last;
    scanf("%d", &first);
    printf("prosze podac wiek drugiej osoby:\n");
    scanf("%d", &last);
    if(first > 100 && last > 100){
        printf("woooow, co za starzy ludzie!\n");
    }else if(first < 0 || last <0) {
            printf("hej, ktos tu ma wiek ujemy?!\n");
    }else if(first > last){
            printf("pierwsza osoba jest starsza od drugiej.\n");
    } else {
        printf("druga osoba jest starsza od pierwszej.\n");
    }

}
//program wypisujacy kolende

#include <stdio.h>

int main(){
    char *day[]={"first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eighth", "ninth", "tenth", "eleventh", "twelfth"};
    for(int i = 0; i < 12; i++){
        printf("On the %s day of Christmas my true love sent to me:\n", day[i]);

        switch(i){
            case 12:
                printf("12 Drummers Drumming\n");
            case 11:
                printf("Eleven Pipers Piping\n");
            case 10:
                printf("Ten Lords a Leaping\n");
            case 9:
                printf("Nine Ladies Dancing\n");
            case 8:
                printf("Eight Maids a Milking\n");
            case 7:
                printf("Seven Swans a Swimming\n");
            case 6:
                printf("Six Geese a Laying\n");
            case 5:
                printf("Five Golden Rings\n");
            case 4:
                printf("Four Calling Birds\n");
            case 3:
                printf("Three French Hens\n");
            case 2:
                printf("Two Turtle Doves\n");
            case 1:
                printf("and a Partridge in a Pear Tree\n");
            default:
                printf("\n");

        }
    }
   
}
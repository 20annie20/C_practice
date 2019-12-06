#include <stdio.h>
#include <stdlib.h>
#define  MAX_SIZE 20

int main(int argc, char **argv){
    char *names[MAX_SIZE];
    names[0] = "Ania";
    names[1] = "Kamil";
    names[2] = "Jacek";
    names[3] = "Nastia";
    names[4] = "Chantal";

    for(int i = 0; i < atoi(argv[1]); i++){
        printf("%s\n", names[i]);
    }
}
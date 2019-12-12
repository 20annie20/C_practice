//przekształcacz liczb na napisy
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv){
    int i = 0;
    char *arr;
    arr = argv[1];
    printf("%s\n", arr);
    
    for(int i = 0; i < 6; i++){
        switch(arr[i]){
            case '0':
                printf("zero ");
                break;
            case '1':
                printf("jeden ");
                break;
            case '2':
                printf("dwa ");
                break;
            case '3':
                printf("trzy ");
                break;
            case '4':
                printf("cztery ");
                break;
            case '5':
                printf("piec ");
                break;
            case '6':
                printf("szesc ");
                break;
            case '7':
                printf("siedem ");
                break;
            case '8':
                printf("osiem ");
                break;
            case '9':
                printf("dziewiec ");
                break;
            default:
                printf(" ");
                break;
        }
    }
}
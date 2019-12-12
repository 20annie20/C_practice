#include <stdio.h>

int ulu(double v[], int n);

int main(){
    double arr[10];
    //wypelniamy tablice
    int j = ulu(arr, 10);
    for(int i = 0; i < j; i++){
        printf("%d\n", arr[i]);
    }
}

int ulu(double v[], int n){
    int j = 0;
    for(int i = 0; i < n; i++){
        if(v[i] >= 0)
            v[j++] = v[i];
    }
    return j;
}
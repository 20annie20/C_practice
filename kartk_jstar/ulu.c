#include <stdio.h>

int ulu(int *v, int n);

int main(){
    int arr[10] = {0, 2, 3, 4, 5, 6, 7, 8, 9, -1};

    for(int i = 0; i < 10; i++){
        printf("%d\n", arr[i]);
    }
    int j = ulu(arr, sizeof(arr)/sizeof(arr[1]));
    for(int i = 0; i < j; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}

int ulu(int *v, int n){
    int j = 0;
    for(int i = 0; i < n; i++){
        if(v[i] >= 0)
            v[j++] = v[i];
    }
    return j;
}


#include <stdio.h>

void tenTotwo(int a){
    int arr[1000];
    int i=0;
    while(a>=1){
        arr[i]=a%2;
        a /= 2;
        i++;
    }
    for(int j=i-1; j>=0; j--){
        printf("%d", arr[j]);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for(int y=0; y<n; y++){
        scanf("%d", &arr[y]);
    }

    for(int b=0; b<n; b++){
        tenTotwo(arr[b]);
        printf("\n");
    }

    return 0;
}
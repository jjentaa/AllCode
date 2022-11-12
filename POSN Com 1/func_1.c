#include <stdio.h>

int findMax(int n, int arr[n]){
    int temp;
    for(int a=0; a<n-1; a++){
        for(int b=a+1; b<n; b++){
            if(arr[a]>arr[b]){
                temp = arr[a];
                arr[a] = arr[b];
                arr[b] = temp;
            }
        }
    }
    return arr[n-1];
}

int main(){
    int n;
    printf("Enter N = ");
    scanf("%d", &n);
    int x[n];
    for(int i=0; i<n; i++){
        printf("x[%d] = ", i+1);
        scanf("%d", &x[i]);
    }
    int ans = findMax(n, x);
    printf("Max = %d", ans);
    return 0;
}
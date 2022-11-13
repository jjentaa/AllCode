#include <stdio.h>

int main(){
    int k, n, row;
    scanf("%d %d", &n, &k);

    int arr[k];

    for(int i=0; i<k; i++){
        arr[i]=0;
    }

    for(int j=0; j<n; j++){
        scanf("%d", &row);
        arr[row-1]++;
    }

    int min=arr[0];

    for(int u=1; u<k; u++){
        if(arr[u]<min){
            min=arr[u];
        }
    }

    int sum=0;
    for(int l=0; l<k; l++){
        sum += arr[l]-min;
    }

    printf("%d", sum);

    return 0;
}
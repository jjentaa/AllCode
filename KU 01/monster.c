#include <stdio.h>

int main(){
    int n, h;
    scanf("%d %d", &n, &h);

    int arr[n];

    for(int x=0; x<n; x++){
        scanf("%d", &arr[x]);
    }

    //sort decending
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]<arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int y=0; y<n; y++){
        if(arr[y]<=h){
            printf("%d", arr[y]);
            break;
        }
    }

    return 0;
}
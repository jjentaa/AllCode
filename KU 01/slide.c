#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int arr[n], sth;
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int counter=0;
    for(int j=0; j<n-1; j++){
        for(int k=j; k<n; k++){
            if(arr[j]<arr[k]){
                counter++;
            }
        }
    }

    printf("%d", counter);

    return 0;
}

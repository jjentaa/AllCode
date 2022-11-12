#include <stdio.h>

int isPrime(int t){
    int x;
    if(t == 2){
        x=1;
    }
    else{
        int j = 2;
        while(j<=t/j){
            if(t%j == 0){
                x=0;
                break;
            }
            j++;
        }
        if(j>t/j){
            x=1;
        }
    }
    return x;
}

int main(){
    int n;
    scanf("%d", &n);

    for(int i=2; i<=n; i++){
        if (isPrime(i)==1){
            printf("%d ", i);
        }
    }

    return 0;
}
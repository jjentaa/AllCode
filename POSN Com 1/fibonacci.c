#include <stdio.h>

int fibo(int p){
    if(p==1){
        return 0;
    }
    else if(p==2){
        return 1;
    }
    else{
        return fibo(p-1)+fibo(p-2);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        printf("%d ", fibo(i));
    }

    return 0;
}
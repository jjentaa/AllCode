#include <stdio.h>

int f(int m){
    if(m==0){
        return 1;
    }
    else if(m==1){
        return 0;
    }
    else{
        return (m-1)*(f(m-1)+f(m-2));
    }
}

int main(){
    int n;
    scanf("%d", &n);

    printf("%d", f(n));

    return 0;
}
#include <stdio.h>

int main(){
    int l, n, d;
    scanf("%d %d", &l, &n);

    for(int i=1; i<=l; i++){
        d = (i+1)*i*((2*i)+1)/6;
        if(d>n){
            printf("%d", l-i+1);
            break;
        }
        else if(d==n){
            printf("%d", l-i);
            break;
        }
    }

    return 0;
}
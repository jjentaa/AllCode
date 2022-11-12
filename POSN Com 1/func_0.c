#include <stdio.h>
#include <math.h>

int checkMax(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int x, y, ans;
    for(int i=0; i<3; i++){
        scanf("%d %d", &x, &y);
        ans = checkMax(x, y);
        printf("%d\n", ans);
    }

    return 0;
}
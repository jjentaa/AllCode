#include <stdio.h>

int main(){
    int total[3], base[3]={3, 4, 2}, n=0;
    scanf("%d %d %d", &total[0], &total[1], &total[2]);
    while(1){
        if(total[0]<(base[0]*(n+1)) || total[1]<(base[1]*(n+1)) || total[2]<(base[2]*(n+1))){
            printf("%d %d %d %d", n, total[0]-(base[0]*n), total[1]-(base[1]*n), total[2]-(base[2]*n));
            break;
        }
        else{
            n++;
        }
    }

    return 0;
}
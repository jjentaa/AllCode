#include "stdio.h"
int main(){
    char ch[10] = {'A','B','C','D','E','F','G','H','I','J'};
    char *p;
    int x,y,A[4][4],sum=0;
    p=ch;
    for(y=0;y<4;y++){
        for(x=0;x<4;x++){
            A[x][y] = 'J' - *p;
            if((x+y)%3==0){
                p++;
            }
        }
    }

    for(y=3;y>0;y--){
        for(x=0;x<3;x++){
            printf(" %d ",A[x][y]);
        }
        printf("\n");
    }
    return 0;
}
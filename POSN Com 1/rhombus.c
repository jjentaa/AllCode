#include <stdio.h>

int main(){
    int row, u;
    scanf("%d", &row);
    u = (row/2);
    int k;

    for(int i=0; i<u; i++){
        for(int j=0; j<u-i; j++){
            printf(" ");
        }
        for(int k=0; k<(i*2)+1; k++){
            printf("*");
        }
        printf("\n");
    }
    for(int x=0; x<row; x++){
        printf("*");
    }
    printf("\n");

    for(int a=0; a<u; a++){
        for(int b=0; b<a+1; b++){
            printf(" ");
        }
        for(int c=0; c<row-(2*(a+1)); c++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
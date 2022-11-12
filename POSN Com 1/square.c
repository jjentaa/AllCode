#include <stdio.h>

int main(){
    int row;
    scanf("%d", &row);
    for(int i=0; i<row; i++){
        printf("*");
        if(i==0 || i==row-1){
            for(int j=0; j<row-2; j++){
                printf("*");
            }
        }
        else{
            for(int j=0; j<row-2; j++){
                printf(" ");
            }
        }
        printf("*");
        printf("\n");
    }

    return 0;
}
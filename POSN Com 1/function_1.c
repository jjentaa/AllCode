#include <stdio.h>

void makeMount(int row){
    for(int i=0; i<row; i++){
        for(int j=0; j<row-i-1; j++){
            printf(" ");
        }
        for(int k=0; k<(i*2)+1; k++){
            printf("*");
        }
        for(int l=0; l<(row-i-1)*2; l++){
            printf(" ");
        }
        for(int m=0; m<(i*2)+1; m++){
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    int row;
    scanf("%d", &row);
    makeMount(row);

    return 0;
}
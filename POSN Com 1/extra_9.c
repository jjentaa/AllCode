#include <stdio.h>

int main(){
    int row, total=0;
    scanf("%d", &row);
    for(int i=0; i<row; i++){
        for(int j=0; j<i+1; j++){
            printf("%d ", j+1);
            if(i!=0 && j!=0 && i!=row-1 && j!=i){
                total+=j+1;
            }
        }
        printf("\n");
    }
    if(total != 0){
        printf("%d", total);
    }
    else{
        printf("No Answer");
    }

    return 0;
}
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    int y=0;
    int row=0;
    do{
        scanf("%d", &arr[y]);
        if(arr[y]>row){
            row=arr[y];
        }
        y++;
    }
    while(getchar()!=10);

    for(int i=0; i<row; i++){
        for(int j=0; j<y; j++){
            if(row-i<=arr[j]){
                for(int m=0; m<row-i-1; m++){
                    printf(" ");
                }
                printf("/");
                for(int k=0; k<(arr[j]-(row-i))*2; k++){
                    printf(" ");
                }
                printf("\\");
                for(int n=0; n<row-i-1; n++){
                    printf(" ");
                }
            }
            else{
                for(int p=0; p<arr[j]*2; p++){
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
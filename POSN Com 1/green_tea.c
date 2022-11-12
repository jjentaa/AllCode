#include <stdio.h>

int main(){
    int w, s, n=0, base[2]={250, 15};

    for(int i=0; i<7; i++){
        printf("Enter water sugar : ");
        scanf("%d %d", &w, &s);
        n=0;
        while(1){
            if(w<(base[0]*(n+1)) || s<(base[1]*(n+1))){
                printf("%d ", n);

                if(((base[0]*n)-w)!=0 && w>0){
                    printf("water");
                }
                break;
            }
            else{
                n++;
            }
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main(){
    int n, n_order, d=1, index=0;
    scanf("%d", &n);
    scanf("%d", &n_order);

    int all_order[n_order], remain=n*100;
    for(int i=0; i<n_order; i++){
        scanf("%d", &all_order[i]);
    }

    while(index < n_order){
        if(all_order[index] <= remain){
            printf("%d\n", d);
            remain -= all_order[index];
            index++;
        }
        else{
            d++;
            remain += n*100;
        }
    }

    return 0;
}
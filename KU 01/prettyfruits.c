#include <stdio.h>

int main(){
    int n, price=0;
    float l, w;
    float ratio;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%f %f", &l, &w);
        if(w/l<=0.75){
            price += 5;
        }
        else{
            price += 3;
        }
    }

    printf("%d", price);

    return 0;
}
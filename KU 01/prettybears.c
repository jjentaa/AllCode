#include <stdio.h>

int main(){
    int n, counter=0, w, s;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d %d", &w, &s);
        if(w>=100 && w<=750 && s>=80 && s<=100){
            counter++;
        }
    }
    printf("%d", counter);

    return 0;
}
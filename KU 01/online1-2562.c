#include <stdio.h>

int main(){
    int n, w, age, counter=0;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d %d", &age, &w);
        if(age<=400 && w>=150 && w<=200){
            counter++;
        }
    }

    printf("%d", counter);

    return 0;
}
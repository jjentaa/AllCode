#include <stdio.h>

int isNugget(int y){
    int base[3]={6, 9, 20};
    if(y<base[0] && y!=0){
        return 0;
    }
    else if(y==0 || y%base[0]==0 || y%base[1]==0 || y%base[2]==0){
        return 1;
    }
    else{
        if(base[2]<=y){
            return isNugget(y-base[2]);
        }
        else if(base[1]<=y){
            return isNugget(y-base[1]);
        }
        else{
            return isNugget(y-base[0]);
        }
    }
}

int main(){
    int n, counter=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        if(isNugget(i)==1){
            printf("%d\n", i);
            counter++;
        }
    }
    if(counter==0){
        printf("no");
    }

    return 0;
}
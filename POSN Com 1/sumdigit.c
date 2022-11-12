#include <stdio.h>

int sumDigit(int num){
    if(10>num){
        return num;
    }
    else{
        return (num%10)+sumDigit(num/10);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", sumDigit(n));

    return 0;
}
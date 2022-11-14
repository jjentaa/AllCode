#include <stdio.h>

int main(){
    int a, b, c;

    scanf("%d\n%d\n%d", &a, &b, &c);
    
    int score = a+b+c;

    if(score<50){
        printf("F");
    }
    else if(score<55){
        printf("D");
    }
    else if(score<60){
        printf("D+");
    }
    else if(score<65){
        printf("C");
    }
    else if(score<70){
        printf("C+");
    }
    else if(score<75){
        printf("B");
    }
    else if(score<80){
        printf("B+");
    }
    else{
        printf("A");
    }

    return 0;
}
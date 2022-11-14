#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void){

    char target[10000];
    scanf("%s", &target);

    int i = 0;
    for(int j = 0; j<strlen(target); j++){
        if(islower(target[j])==0){
            i++;
        }
    }

    if(i==0){
        printf("All Small Letter");
    }
    else if(i<strlen(target)){
        printf("Mix");
    }
    else{
        printf("All Capital Letter");
    }

    return 0;
}
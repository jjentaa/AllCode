#include <stdio.h>

int main(){
    
 	FILE  *fp;
    int j;
	fp = fopen("002.txt", "a");
    if(fp == NULL){
        printf("cannot read file");
    }
    else{
        for(int i=0; i<10; i++){
            printf("Enter a number : ");
            scanf("%d", &j);
            fprintf(fp, "%d\t", j);
        }
        printf("Added to file success!");
    }
    fclose(fp);

    return 0;
}
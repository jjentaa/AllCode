#include <stdio.h>

int main(){
    int cup[3]={1, 0, 0}, counter=0;
    char seq[50];

    do{
        scanf("%c", &seq[counter]);
        counter++;
    }
    while(getchar()!=10);

    for(int i=0; i<counter; i++){
        if(seq[i]=="A"){
            int y=cup[0];
            cup[0]=cup[1];
            cup[1]=y;
        }
        else if(seq[i]=="B"){
            int y=cup[1];
            cup[1]=cup[2];
            cup[2]=y;
        }
        else{
            int y=cup[0];
            cup[0]=cup[2];
            cup[2]=y;
        }
    }

    int pos=0;
    while(cup[pos]!=0){
        pos++;
    }
    printf("%d", pos+1);

    return 0;
}
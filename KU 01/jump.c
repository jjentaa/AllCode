#include <stdio.h>

int main(){
    int l;
    scanf("%d", &l);

    char seq[l+1];
    scanf("%s", seq);

    char *p;
    int counter=0;

    for(p=seq; *p!='\0'; p++){
        printf("%c", *p);
    }

    return 0;
}
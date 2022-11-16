#include <stdio.h>

int main(){
    int n, c, chance=1;
    scanf("%d %d", &n, &c);

    int score[n][n];
    int compet[n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &score[i][j]);
        }
        compet[i]=i;
    }
    
    int p1, p2, r=0;
    while(n!=1){
        r = 0;
        for(int k=0; k<n;){
            p1 = compet[k];
            p2 = compet[k+1];
            if(p1==c-1 && score[p1][p2]!=c && c!=0 && chance==1){
                compet[r]=c-1;
                chance-=1;
            }
            else if(p2==c-1 && score[p1][p2]!=c && c!=0 && chance==1){
                compet[r]=c-1;
                chance-=1;
            }
            else{
                compet[r] = score[p1][p2]-1;
            }
            k+= 2;
            r++;
        }
        n /= 2;
    }

    printf("%d", compet[0]+1);

    return 0;
}
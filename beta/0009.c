#include <stdio.h>

int main(){
    int arr[3];
    char seq[3];

    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    scanf("%s", &seq);

    for(int i=0; i<2; i++){
        for(int j=i+1; j<3; j++){
            if(arr[i]>arr[j]){
                int d=arr[i];
                arr[i]=arr[j];
                arr[j]=d;
            }
        }
    }

    printf("%d %d %d", arr[seq[0]-65], arr[seq[1]-65], arr[seq[2]-65]);

    return 0;
}
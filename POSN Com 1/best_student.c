#include <stdio.h>

struct Student{
    char id[9];
    char name[10];
    char sur[10];
    float grade;
};


int main(){
    int n, glo_max=0;
    scanf("%d", &n);
    
    struct Student all_std[n];
    for(int i=0; i<n; i++){
        scanf("%s %s %s %f", all_std[i].id, all_std[i].name, all_std[i].sur, &all_std[i].grade);
        if(all_std[glo_max].grade < all_std[i].grade){
            glo_max = i;
        }
    }

    printf("%s %s %s %.2f", all_std[glo_max].id, all_std[glo_max].name, all_std[glo_max].sur, all_std[glo_max].grade);

    return 0;
}
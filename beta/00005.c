#include <stdio.h>
#include <math.h>

int main(){

    double a;
    double b;

    scanf("%lf %lf", &a, &b);

    double c = sqrt((pow(a, 2)+pow(b, 2)));
    printf("%.6lf", c);
    
    return 0;
}
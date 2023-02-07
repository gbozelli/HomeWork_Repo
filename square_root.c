#include <stdio.h>
#include <stdlib.h>
#define erro 0.000001 

double square_root(double x){
    double y0 = x;
    double yn = 0.5*(x+1);
    while(abs(y0-yn)>erro){
        y0=yn;
        yn = 0.5*(y0+(x/y0));}
    return yn;
}

int main(){
    double x = 16;
    printf("%lf", square_root(x));
    return 0;
}
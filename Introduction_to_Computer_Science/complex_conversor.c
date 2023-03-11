#include <stdio.h>
#include <math.h>

typedef struct{
    double a;
    double b;
}complexRet;

typedef struct{
    double r;
    double teta;
}complexPol;

double conversorDegtoRad(double deg){
    double rad = deg/57.2958;
    return rad;
};

double conversorRadtoDeg(double rad){
    double deg = rad*57.2958;
    return deg;
};

complexPol conversorRettoPol(complexRet cr){
    double a = cr.a;
    double b = cr.b;
    complexPol cp; cp.r = sqrt((a*a)+(b*b));
    cp.teta = atan(b/a);
    cp.teta = conversorRadtoDeg(cp.teta);
    printf("%lf /_%lf", cp.r,cp.teta);
    return cp;
};

complexRet conversorPoltoRet(complexPol cp){
    double teta = cp.teta;
    double r = cp.r;
    teta = conversorDegtoRad(teta);
    complexRet cr; cr.a = r*cos(teta); 
    cr.b = r*sin(teta);
    printf("%lf + j%lf", cr.a,cr.b);
    return cr;
};

int main(){
    complexPol A; A.r =;A.
    complexRet B = ;
    conversorRettoPol();
    return 0;
}
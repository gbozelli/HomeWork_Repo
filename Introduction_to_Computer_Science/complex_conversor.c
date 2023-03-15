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
    double a = cr.a; double b = cr.b;
    complexPol cp; cp.r = sqrt((a*a)+(b*b));
    cp.teta = atan(b/a);
    cp.teta = conversorRadtoDeg(cp.teta);
    return cp;
};

complexRet conversorPoltoRet(complexPol cp){
    double teta = cp.teta;
    double r = cp.r;
    teta = conversorDegtoRad(teta);
    complexRet cr; cr.a = r*cos(teta); 
    cr.b = r*sin(teta);
    return cr;
};

complexRet sumComplex(complexRet A, complexRet B){
    complexRet R;
    R.a = A.a + B.a;
    R.b = A.b + B.b;
    return R;
}

complexPol multComplex(complexPol A, complexPol B){
    complexPol R;
    R.r = A.r * B.r;
    R.teta = A.teta + B.teta;
    return R;
}

void rootComplex(complexNumber * Z, int n){
    double r = Z->r, t = conversorDegtoRad(Z->t);
    Z->r = round(pow(r,1./n));
    complexNumber Z[] = {};
    for(int i=0;i<n;i++){
        Z[i].a = r*(cos((t+2*3.14*i)/n));
        Z[i].b = r*(cos((t+2*3.14*i)/n));
    }
    Z->r = round(pow(r,1./n));
};

complexRet divComplex(complexRet A, complexRet B){
    complexRet R;
    double a = A.a; double b = A.b;
    double c = B.a; double d = B.b;
    R.a = (a*c + b*d)/(c*c + d*d);
    R.b = (b*c - a*d)/(c*c + d*d);
    return R;
}

int main(){
    complexRet A; A.a = (400);A.b = (-200);
    complexRet B; B.a = (-0.01);B.b = (-0.5);
    complexRet C; C.a = (-1); C.b = (3);
    complexRet R = conversorPoltoRet(multComplex((multComplex(
        conversorRettoPol(A),conversorRettoPol(B))),conversorRettoPol(C)));
    printf("%lf + j%lf", R.a,R.b);
    return 0;
}
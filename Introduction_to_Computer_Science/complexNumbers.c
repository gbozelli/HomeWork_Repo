#include <stdio.h>
#include <math.h>

typedef struct{
    double a;
    double b;
    double r;
    double t;
}complexNumber;

double conversorDegtoRad(double deg){
    double rad = deg/57.2958;
    return rad;
};

double conversorRadtoDeg(double rad){
    double deg = rad*57.2958;
    return deg;
};

void setRValues(complexNumber * Z, double a, double b){
    Z->a = a;
    Z->b = b;
};

void setPValues(complexNumber * Z, double r, double t){
    Z->r = r;
    Z->t = t;
};

void conversorRtoP(complexNumber * Z){
    double a = Z->a, b = Z->b, 
    r = sqrt((a*a)+(b*b)), t = conversorRadtoDeg(atan(b/a));
    setPValues(Z,r,t);
};

void conversorPtoR(complexNumber * Z){
    double r = Z->r, t = Z->t, 
    a = r*cos(conversorDegtoRad(t)), b = r*sin(conversorDegtoRad(t));
    setRValues(Z,a,b);
};

complexNumber createRComplex(double a, double b){
    complexNumber Z;
    setRValues(&Z,a,b);
    conversorRtoP(&Z);
    return Z;
};

complexNumber createPComplex(double r, double t){
    complexNumber Z;
    setPValues(&Z,r,t);
    conversorPtoR(&Z);
    return Z;
};

complexNumber sumComplex(complexNumber Z1, complexNumber Z2){
    complexNumber Z3 = createRComplex((Z1.a+Z2.a),(Z1.b+Z2.b));
    return Z3;
};

complexNumber multComplex(complexNumber Z1, complexNumber Z2){
    complexNumber Z3 = createPComplex((Z1.r*Z2.r),(Z1.t+Z2.t));
    return Z3;
};

complexNumber divComplex(complexNumber Z1, complexNumber Z2){
    double a,b,c,d;
    a = Z1.a;b = Z1.b; c = Z2.a; d = Z2.b;
    complexNumber Z3 = createRComplex(((a*c + b*d)/(c*c + d*d)),((c*b - a*d)/(c*c + d*d)));
    return Z3;
};

complexNumber expComplex(complexNumber Z, int n){
    double r = Z.r;
    for(int i=1;i<n;i++){
        Z.r *= r;
    }
    Z.t *= n;
    return Z;
};

void printComplex(complexNumber Z){
    printf("%lf + j%lf\n", Z.a, Z.b);
};

void rootComplex(complexNumber Z, int n){
    double t = Z.t;
    complexNumber current;
    Z.r = exp(log(Z.r)/n);
    for(int i=0;i<n;i++){
        Z.t = (t+(2*3.14*i*57.2958))/n;
        current = createPComplex(Z.r,Z.t);
        printComplex(current);
    }
};

int main(){
    complexNumber Z1 = createRComplex(1,1);
    rootComplex(Z1,3);
    return 0;
}
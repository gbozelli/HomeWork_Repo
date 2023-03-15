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

complexNumber conversorRtoP(complexNumber * Z){
    double a = Z->a, b = Z->b, 
    r = sqrt((a*a)+(b*b)), t = conversorRadtoDeg(atan(b/a));
    setPValues(Z,r,t);
};

complexNumber conversorPtoR(complexNumber * Z){
    double r = Z->r, t = Z->t, 
    a = r*cos(conversorRadtoDeg(t)), b = r*sin(conversorRadtoDeg(t));
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
    complexNumber Z3 = createPComplex((Z1.r*Z2.r),(Z1.t+Z1.t));
    return Z3;
};

complexNumber divComplex(complexNumber Z1, complexNumber Z2){
    complexNumber Z3 = createPComplex((Z1.a*Z2.a + Z1.b*Z2.b)/(Z2.a*Z2.a + Z2.b*Z2.b),
    (Z1.b*Z2.a - Z1.a*Z2.b)/(Z2.a*Z2.a + Z2.b*Z2.b));
    return Z3;
};

void expComplex(complexNumber * Z, int n){
    for(int i=0;i<n;i++){
        Z->r *= Z->r;
    }
    Z->t *= n;
};

void printComplex(complexNumber Z){
    printf("%lf + j%lf\n", Z.a, Z.b);
    printf("%lf /_%lfº", Z.r, Z.t);
};

int main(){
    complexNumber Z1 = createRComplex(1,1);
    complexNumber Z2 = createRComplex(1,1);
    complexNumber Z3 = createPComplex(1,2);
    complexNumber Z4 = sumComplex(Z1,Z2);
    printComplex(Z4);
    return 0;
}
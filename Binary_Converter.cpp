
#include <iostream>
#include <array>
#include <math.h>
using namespace std;

const int n = 8;

void binarization(int v, int V[]){
    int k = 0;
    for(int v; v>0;v=v){
    while(pow(2, k)<v){
        k = k+1;
    }
    k = k-1;
    int c = 7-k;
    V[c] = 1;
    v=v-pow(2,k);
    }
}

void sum(int A[], int B[], int S[]){
    int a = 0;
    for(int i=n;i>0;i--){
        int x = A[i]+B[i]+a;
        if(x==2){
            S[i]=0;
            int a = 1;
        }
        if(x==1){
            S[i]=1;
            int a = 0;
        }
        if(x==0){
            int a = 0;
        }
    }
}

void print_array(int M[n]){
    for(int i =0;i<n;i++){
        cout << M[i];}
}

int main(){
    int a = 1;
    int b = 3;
    int A[n] = {0};
    int B[n] = {0};
    int S[n] = {0};
    binarization(a, A);
    binarization(b, B);
    sum(A,B,S);
    print_array(S);
    return 0;
}
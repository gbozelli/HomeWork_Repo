
#include <iostream>
#include <array>
#include <math.h>
using namespace std;

const int n = 8;

std::array<int, n> binarization(int v){
    std::array<int, n> A={0};
    int k = 0;
    for(int v; v>0;v=v){
    while(pow(2, k)<v){
        k = k+1;
    }
    k = k-1;
    A[7-k] = 1;
    v=v-pow(2,k);}
    return A;
}

std::array<int, n> sum(std::array<int, n> A[n], std::array<int, n> B[n]){
    int a = 0;
    std::array<int, n> C={0};
    for(int i=7;i>0;i--){
        int x = A[i]+B[i]+a;
        if(x==2){
            C[i]=0;
            int a = 1;
        }
        if(x==1){
            C[i]=1;
            int a = 0;
        }
        if(x==0){
            int a = 0;
        }
    }
    return C;
}

void print_array(int M[n]){
    cout << "[ ";
    for(int i =0;i<n;i++){
        cout << M[i] << " ";}
    cout  << "]";
}

int main(){
    int A = 1;
    int B = 3;
    std::array<int, n> a = binarization(A);
    std::array<int, n> b = binarization(B);
    std::array<int, n> S = sum(a,b);
    print_array(S);
    return 0;
}
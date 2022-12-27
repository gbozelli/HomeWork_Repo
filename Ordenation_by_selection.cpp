
#include <iostream>
using namespace std;
const int k = 8;

void ordenation(int A[k]){
    for(int i =0;i<k-1;i++){
        for(int j=1;j<k;j++){
            while(A[j]>A[i])

        }
    }
}


void print_array(int M[k]){
    cout << "[ ";
    for(int i =0;i<k;i++){
        cout << M[i] << " ";}
    cout  << "]";
}

int main(){
    int A[k] = {9,8,7,6,5,4,3,2};
    ordenation(A);
    print_array(A);
    return 0;
}
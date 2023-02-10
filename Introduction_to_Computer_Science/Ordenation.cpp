
#include<iostream>
using namespace std;

const int k = 6;

void print_array(int M[k]){
    cout << "[ ";
    for(int i =0;i<k;i++){
        cout << M[i] << " ";}
    cout  << "]";
}

void decrescent_ordenation(int M[k]){       // c1*1
    int current_number;                     // c2*1
    for(int i =1; i<k; i++){                // c3*n
        current_number = M[i];              // c4*n-1
        int j = i-1;                        // c5*n-1
        while(M[j]<current_number & j>=0){  // c6*sigma
            M[j+1] = M[j];                  //
            j = j-1;                        //
            }                               //
        M[j+1] = current_number;            // c7*n-1
        }
}

void crescent_ordenation(int M[k]){
    int current_number;
    for(int i =1; i<k; i++){
        current_number = M[i];
        int j = i-1;
        while(M[j]>current_number & j>=0){
            M[j+1] = M[j];
            j = j-1;
        }
        M[j+1] = current_number;
    }
}

int main(){
    int M[k] = {3,1,8,9,6,4};
    crescent_ordenation(M);
    print_array(M);
    decrescent_ordenation(M);
    print_array(M);
    return 0;
}
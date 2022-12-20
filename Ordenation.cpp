
#include<iostream>
using namespace std;

const int k = 6;

void crescent_ordenation(int M[k]){
    int current_number;
    for(int i = 0; i<k; i++){
        current_number = M[i+1];
        int j = i;
        while(current_number < M[j] & j>=0){
            M[i+1] = M[i];
            j = j-1;
        }
    }
}

void print_array(int M[k]){
    cout << "[";
    for(int i =0;i<k;i++){
        cout << M[i] << ", ";}
    cout  << "]";
}

int main(){
    int M[k] = {3,1,8,9,6,4};
    crescent_ordenation(M);
    print_array(M);
    return 0;
}

#include<iostream>
using namespace std;

const int k = 6;

void print_array(int M[k]){
    cout << "[ ";
    for(int i =0;i<k;i++){
        cout << M[i] << " ";}
    cout  << "]";
}

void decrescent_ordenation(int M[k]){
    int current_number;
    for(int i =1; i<k; i++){
        current_number = M[i];
        int j = i-1;
        while(M[j]<current_number & j>=0){
            M[j+1] = M[j];
            j = j-1;
            }
        M[j+1] = current_number;
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
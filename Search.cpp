
#include <iostream>
using namespace std;

const int n = 6;

int search(int A[n], int v){
    int j=0;
    for(int i=0;i<n;i++){
        if(A[i]==v){
        return i;}
        else{
        j++;}
    }
    return -1;
}

int main(){
    int A[n] = {1,9,56,3,45,21};
    int v = 21;
    int x = search(A,v);
    cout << x;
    return 0;
}
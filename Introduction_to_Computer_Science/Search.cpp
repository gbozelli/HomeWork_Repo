
#include <iostream>
using namespace std;

const int n = 6;

int search(int A[n], int v){
    int j=0;//c1
    for(int i=0;i<n;i++){//n+1
        if(A[i]==v){//n
        return i;}//1
        else{//n
        j++;}//n
    }
    return -1;//
}

int main(){
    int A[n] = {1,9,56,3,45,21};
    int v = 1;
    int x = search(A,v);
    cout << x;
    return 0;
}
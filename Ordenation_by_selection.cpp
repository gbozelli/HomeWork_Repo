
#include <iostream>
using namespace std;
const int k = 8;

void SelectionSort(int vetor[], int k) {
    for (int indice = 0; indice < k; ++indice) {// n+1
        int indiceMenor = indice;//n
        for (int indiceSeguinte = indice+1; indiceSeguinte < k; ++indiceSeguinte) {//sigma[1->n]
            if (vetor[indiceSeguinte] < vetor[indiceMenor]) {//n(n-1)
                indiceMenor = indiceSeguinte;//n
            }
        }
        int aux = vetor[indice];//n
        vetor[indice] = vetor[indiceMenor];//n
        vetor[indiceMenor] = aux;//n
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
    SelectionSort(A,k);
    print_array(A);
    return 0;
}
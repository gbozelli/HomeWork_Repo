#include <iostream>
using namespace std;

const int N = 3;

void matrix_print(float m[N][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++)
            cout << m[i][j] << " ";
        cout<< " " << endl;}}
void identity(float m[N][N]){
    for (int i = 0; i < N; i++)
      for (int j = 0; j < N; j++)
	    if (i == j)
	        m[j][i] = 1;
	    else
	        m[i][j] = 0;}
void inverse(float m[N][N], float n[N][N]){
    float divisor;
    int count;
    int count2;
    int mult;
    int x = 0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j){
                divisor = m[i][j];
                for(count=0;count<N;count++){
                    m[i][count] = m[i][count]/divisor;
                    n[i][count] = n[i][count]/divisor;}}
            for(j=0;j<N;j++)
                if(i!=j){
                    divisor = m[i+1][j];
                    for(count=0;count<N;count++){
                        m[j][count] = m[j][count]-(m[count][j]*divisor);
                        n[j][count] = n[j][count]-(n[count][j]*divisor);}}}}}
int main(){
    float m[N][N];
    float n[N][N] = { {2, 3, 5}, {7, 9, 11}, {13, 17, 19} };
    identity(m);
    cout << "Identity" << endl;
    matrix_print(m);
    inverse(n,m);
    matrix_print(n);
    matrix_print(m);    
    return 0;}

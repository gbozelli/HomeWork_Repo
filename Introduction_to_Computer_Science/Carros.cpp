
#include <iostream>
using namespace std;

const int capacidade_max = 50;

class Carro{
  private:
    float consumo = 12.5;
    float consumo1;
    float consumo2;
    float capacidade;
    float distancia;
    float resto;
  public:
    void Capacidade();
    void Deslocamento();
    void Consumo1();
    void Consumo2();
    void Dados();
    void Imprime();
    void Calculo();
    Carro(){};
    Carro(float capacidade,float distancia){
        this->capacidade = capacidade;
        this->distancia = distancia;
    }
};

void Carro::Capacidade(){
    while(capacidade>capacidade_max){
        cout << "A capacidade máxima do tanque é de " << capacidade_max << " litros. Digite outro valor: " << endl;
        cin >> capacidade;
    }
}

void Carro::Calculo(){
    Consumo1();
    Consumo2();
    Imprime();
    Capacidade();
    Deslocamento();
}

void Carro::Consumo1(){
    consumo1 = distancia/consumo;
}

void Carro::Consumo2(){
    consumo2 = capacidade;
}

void Carro::Deslocamento(){
    if(capacidade>consumo1)
        cout << "O carro percorreu " << distancia << " e sobrou no tanque " << (capacidade-(consumo1)) << endl;
    if(consumo1>capacidade)
        cout << "O carro percorreu " << (capacidade*consumo) << " e nao sobrou nada no tanque" << endl;
}

void Carro::Dados(){ //Create a function referenced in 'Player' class that receive the informations
    cout<<"Capacidade do tanque: "; cin>> capacidade;
    cout<<"Distância a ser percorrida: "; cin>> distancia;
    Calculo
}

void Carro::Imprime(){ //Create a function that print the informations received
    cout<< "Tanque: "<<capacidade<<" | Distancia pretendida: "<<distancia << endl;}

int main(){
    Carro S1(2,100);
    S1.Calculo();
    return 0;
}

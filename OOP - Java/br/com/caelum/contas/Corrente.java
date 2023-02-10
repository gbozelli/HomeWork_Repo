package br.com.caelum.contas;

public class Corrente implements Conta{
    double saldo;
    int cpf;
    String titular;
    public void settransfere(Corrente conta, double valor){
        this.saldo -= valor;
        conta.saldo += valor; 
    }
    public void rendimento(){
        this.saldo *= 1.015;
    }
    public String getTipo(){
        return "Conta Corrente";
    }
    public double getValorImposto() {
        return saldo*0.01;
    }
    public void setdeposita(double valor) {
        
    }
    public void setsaca(double valor) {
        
    }
    public String recuperaDadosParaImpressao() {
        return null;
    }
}

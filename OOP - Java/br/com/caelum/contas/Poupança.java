package br.com.caelum.contas;

public class Poupança implements Conta{
    double saldo;
    int cpf;
    String titular;
    public void rendimento(){
        this.saldo *= 1.01;
    }
    public String getTipo(){
        return "Conta Poupança";
    }
    public void setdeposita(double valor) {
    }
    public void setsaca(double valor) {
    }
    public String recuperaDadosParaImpressao() {
        return null;
       }    
}



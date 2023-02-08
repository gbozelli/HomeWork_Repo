package br.com.caelum.contas;

public class Poupança extends Conta{
    public Poupança(String titular, int cpf, String agência, double saldo) {
        super(titular, cpf, agência, saldo);
    }
    public void rendimento(){
        this.saldo *= 1.01;
    }
    public String getTipo(){
        return "Conta Poupança";
    }
}

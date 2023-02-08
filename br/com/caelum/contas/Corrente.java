package br.com.caelum.contas;

public class Corrente extends Conta{
    public Corrente(String titular, int cpf, String agência, double saldo) {
        super(titular, cpf, agência, saldo);}
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
}


package br.com.caelum.contas;

public abstract class Conta{
    protected String titular;
    protected int cpf;
    protected String agência;
    protected double saldo;
    public void setdeposita(double valor){
        this.saldo+=valor;
    }
    public void setsaca(double valor){
        this.saldo-=valor;
    }
    public String recuperaDadosParaImpressao() {
        String	dados = "Titular: "	+ getTipo();
        dados += "\nNúmero:	" +	this.cpf;
        dados += "\nAgência: " + this.agência;
        dados += "\nSaldo: R$"	+ this.saldo;
        return	dados;
}
    public abstract void rendimento();
    public abstract String getTipo();
    protected Conta(String titular, int cpf, String agência, double saldo){
        this.titular = titular;
        this.cpf = cpf;
        this.agência = agência;
        this.saldo = saldo;
    }

}

package br.com.caelum.contas;

public class Seguro implements tributo{
    double valor;
    int numero;
    String titular;
    public double getValorImposto() {
        return (42+(valor*0.02));
    }
    public void setdeposita(double valor) {
        
    }
    public void setsaca(double valor) {
        
    }
    public String recuperaDadosParaImpressao() {
        return null;
    }
    public void rendimento() {
        
    }
    public String getTipo() {
        return null;
    }
}

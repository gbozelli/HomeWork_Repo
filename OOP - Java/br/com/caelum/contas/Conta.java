
package br.com.caelum.contas;

public interface Conta{
    public void setdeposita(double valor);
    public void setsaca(double valor);
    public String recuperaDadosParaImpressao();
    public abstract void rendimento();
    public abstract String getTipo();
}

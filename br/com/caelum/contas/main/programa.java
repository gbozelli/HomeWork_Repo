
package br.com.caelum.contas.main;
import br.com.caelum.contas.Corrente;

class mprograma{
    public static void main(String[] args){
        Corrente Cleitin = new Corrente("Cleitin", 123456, "SuperBradesco", 0);
        System.out.println(Cleitin.recuperaDadosParaImpressao());
    }
}


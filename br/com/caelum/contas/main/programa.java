
package br.com.caelum.contas.main;
import br.com.caelum.contas.Banco;

class teste_conta{
    public static void main(String[] args){
        Banco meuBanco = new Banco();
        meuBanco.nome = "SuperBradesco";
        System.out.println(meuBanco.nome);
    }
}

package br.com.caelum.contas;

public class gerente extends funcionario{
    private int senha;
    private int numerofunc;
    double bonificação(){
        return super.bonificação()+1000;
    }   
}


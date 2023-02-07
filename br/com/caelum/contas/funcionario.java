package br.com.caelum.contas;

public class funcionario{
    protected String nome;
    protected String cpf;
    protected double salario;   
    double bonificação(){
      return this.salario * 0.1;  
    } 
    }


package br.com.caelum.funcionarios;

abstract public class funcionario{
    protected String nome;
    protected String cpf;
    protected double salario;
    public funcionario(String nome, String cpf, int salario){
        this.nome = nome;
        this.cpf = cpf;
        this.salario = salario;
    }
    abstract public void getrendimento();
}

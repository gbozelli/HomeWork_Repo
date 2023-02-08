package br.com.caelum.funcionarios;

public class gerente extends funcionario{
    public gerente(String nome, String cpf, int salario) {
        super(nome, cpf, salario);}
    private int senha;
    private int numerofuncionario;
    public boolean testasenha(int senha){
        if(this.senha == senha){
            return true;}
        else{
            return false;}}
    public void getrendimento() {
        salario *= 1.01;}
}

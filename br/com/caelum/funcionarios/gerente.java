package br.com.caelum.funcionarios;

public class gerente extends funcionario implements sistema{
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
    public boolean aut(int senha) {
        if(senha==this.senha){
            return true;
        }
        else{
            return false;
        }
    }
}

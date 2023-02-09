package br.com.caelum.funcionarios;

public class funcionarioaut extends funcionario{
    public funcionarioaut(String nome, String cpf, int salario) {
        super(nome, cpf, salario);
    }
    public void getrendimento() {     
    }
    private int senha;
    
    public boolean aut(int senha){
        if(senha == this.senha){
            return true;
        }
        else{
            return false;
        }
    }
}

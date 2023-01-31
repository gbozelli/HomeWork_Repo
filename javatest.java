class MeuPrograma {
    public static void main(String[] args){
        Conta minha_conta;
        minha_conta = new Conta();
        minha_conta.saldo = 600;
        Conta conta_amigo;
        conta_amigo = new Conta();
        conta_amigo.saldo = 0;
        minha_conta.transfere(conta_amigo, 200);
        Cliente A = new Cliente();
        minha_conta.titular = A;

    }
}

class Cliente{
    String nome;
    String sobrenome;
    String CPF;
}

class Conta {
    int numero;
    Cliente titular = new Cliente();
    double saldo;
    void saca(double valor){
        if(this.saldo>valor){
            this.saldo -= valor;
            System.out.println("Saque aceito: "+valor);
            System.out.println("Novo saldo: "+this.saldo);}
        else{
            System.out.println("Saque negado");}}
    void deposita(double quantidade){
        this.saldo += quantidade;
        System.out.println("Depósito aceito: "+quantidade);
        System.out.println("Novo saldo: "+this.saldo);
    }
    void transfere(Conta destino, double valor){
        this.saca(valor);
        destino.deposita(valor);
    }
}

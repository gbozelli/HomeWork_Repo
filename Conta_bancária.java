
class Conta{
    private static int numero_conta = 0;
    private String titular;
    private String cpf;
    private String agencia;
    private double saldo;
    Conta(String titular, String cpf, String agencia, double saldo){
        this.titular = titular;
        this.agencia = agencia;
        this.saldo = saldo;
        this.cpf = cpf;
        numero_conta();
    }
    public void settitular(String titular){
        this.titular = titular;
    }
    public String gettitular(){
        return this.titular;
    }
    public void saca(double valor){
        if(this.saldo>valor){
            this.saldo -= valor;
        }
        else{
            System.out.println("Não é possível realizar o saque");
        }
    }
    public void deposita(double valor){
        this.saldo += valor;
    }
    public void rendimento(){
        this.saldo *= 0.1; 
    }
    public void muda_cpf(String cpf){
        valida_cpf(cpf);
        this.cpf = cpf;
    }
    private void valida_cpf(String cpf){

    }
    public String impressão(){
        String	dados =	"\nTitular:	" + this.titular;
        dados += "\nSaldo: " + this.saldo;
        dados += "\nAgência: " + this.agencia;
        dados += "\nNúmero: " + this.cpf;
        return(dados);
    }
    public void numero_conta(){
        numero_conta += 1;
    }
}

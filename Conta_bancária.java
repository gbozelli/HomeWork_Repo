
class MeuProgram{
    public static void main(String[] args){
        Conta Cleitin = new Conta("Cleitin", "2345678", "SuperBradesco",0, );
        System.out.println(Cleitin.impressão());
    }
}

class Conta{
    private String titular;
    private String cpf;
    private String agencia;
    private double saldo;
    private Data data = new Data(0,0,0);
    Conta(String titular, String cpf, String agencia, double saldo, Data data){
        this.titular = titular;
        this.agencia = agencia;
        this.saldo = saldo;
        this.data = data;
        this.cpf = cpf;
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
        dados += "\nDia: "	+ this.data.dia;
		dados += "\nMês: "	+ this.data.mes;
		dados += "\nAno: "	+ this.data.ano;
        return(dados);
    }
}

class Data{
    int dia;
    int mes;
    int ano;
    Data(int dia, int mes, int ano){
        this.dia = dia;
        this.mes = mes;
        this.ano = ano;
    }
}
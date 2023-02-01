
class MeuProgram{
    public static void main(String[] args){
        Conta Cleitin = new Conta();
        Cleitin.titular = "Cleitinho";
        Cleitin.numero = 0001;
        Cleitin.agencia = "Bradesco";
        Cleitin.saldo = 8000;
        Cleitin.data.dia = 22;
        Cleitin.data.mes = 02;
        Cleitin.data.ano = 2022;
        System.out.println(Cleitin.impressão());
    }
}

class Conta{
    String titular;
    int numero;
    String agencia;
    double saldo;
    Data data = new Data();
    void saca(double valor){
        if(this.saldo>valor){
            this.saldo -= valor;
        }
        else{
            System.out.println("Não é possível realizar o saque");
        }
    }
    void deposita(double valor){
        this.saldo += valor;
    }
    void rendimento(){
        this.saldo *= 0.1; 
    }
    String impressão(){
        String	dados =	"\nTitular:	" + this.titular;
        dados += "\nSaldo: " + this.saldo;
        dados += "\nAgência: " + this.agencia;
        dados += "\nNúmero: " + this.numero;
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
}
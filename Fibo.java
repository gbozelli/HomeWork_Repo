
class Principal{
    public static void main(String[] args){
    Fibonacci	fibonacci	=	new	Fibonacci();
    for	(int	i	=	1;	i	<=	6;	i++)	{
        int	resultado	=	fibonacci.calculaFibonacci(i);
        System.out.println(resultado);
        }
    }
}

class Fibonacci{
    int calculaFibonacci(int i){
        int r1;
        int r2;
        int soma;
        if(i==1){
            return 1;
        }
        if(i==0){
            return 0;
        }
        else{
            r1 = calculaFibonacci(i-1);
            r2 = calculaFibonacci(i-2);
            soma = r1+r2;
            return soma;
        }
    }
}

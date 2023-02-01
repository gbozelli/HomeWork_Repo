
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
    int calculaFibonacci(i){
        int resultado = calculaFibonacci(i-1) + calculaFibonacci(i)
    }
}
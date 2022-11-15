
#include <iostream>

using namespace std;
//A program that calculates the primes, even a number 'n'
int main()
{
    int n = 1000; //Set the limit of prime numbers
    int primes[n]; //A vector. Very useful for calculate primes and storage him
    int countnum = 3; //A variable that count numbers, that will be tested
    int tester = 1; //Test a aleatory number to verify his condition as prime
    int countprimes = 2; //Percurs the vector 'primes'
    primes[0] = 1;
    primes[1] = 2; //The program dont identify this numbers as 'primes', so its necessary
    //declarate they
    for(countnum==3;countnum<=n;countnum++){ //Loop for select numbers in a crescent order
        tester = 1;
        while(countnum%primes[tester]!=0 && countnum>=primes[tester] && tester <= countprimes){
        //Set the prime numbers alocate in vector and test his divison with 'countnum'
            tester = tester + 1;
            if(countprimes==tester){
            //Basically, this condition say 'if they are equal, the integer division was not possible'
                primes[countprimes++] = countnum;
            break;  
        }
        }        
    }                 
    countnum = 0;
    for(countnum==0;countnum<countprimes;countnum++){
        cout << primes[countnum] << endl;
    //This loop just print the numbers
    }
    return 0;
}


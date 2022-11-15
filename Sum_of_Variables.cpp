
#include <iostream>
using namespace std;

//A simple program that print the value of a sum of some variables
int main()
{
    int a, b, c, d;
    //Definition of variables as 'int'
    
    cout << "Type the value of 'a': ";
    cin >> a;
    cout << "Type the value of 'b': ";
    cin >> b;
    cout << "Type the value of 'c': ";
    cin >> c;
    
    d = c + b + a;
    cout << "The sum of 'a', 'b' and 'c' have the value of: " << d << endl;
    return 0;
}

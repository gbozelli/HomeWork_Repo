
#include <iostream>
using namespace std;

//A simple code that creates a variable and indaicates his adress

int main()
{
    int a;
    a = 16;
    //Definition of variable and his class
    
    cout << "The variable 'a' have a value of " << (a) << " and occups " << sizeof(a) << " bytes in adress " << &a << endl;
    //'cout' prints the text. The use of '<<' breaks the text.'endl' finishes the text.
    
    return 0;
}
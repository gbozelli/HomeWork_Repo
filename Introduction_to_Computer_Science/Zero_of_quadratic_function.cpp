
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    float a, b, c, zero1, zero2, delta, zeroreal, deltaimag;
    cout << "This program calculate the zeros of a quadratic function, in the form 'ax^2 + bx + c'."<< endl;
    cout << "Type a: ";
    cin >> a;
    cout << "Type b: ";
    cin >> b;
    cout << "Type c: ";
    cin >> c;
    //The program receive 'a', 'b' and 'c'. So, it´s necessary calculate the zeros using Bhaskara formula
    delta = (b*b) - (4*a*c);
    zero1 = (-b - sqrt(delta))/2.0*a;
    zero2 = (-b + sqrt(delta))/2.0*a;
    zeroreal = -b/2*a;
    if (zero1 == zero2)
        cout << "The equation have two zeros with the same value, " << zero1;
    if (zero1 != zero2 and delta >= 0)
        cout << "The equation have two zeros with differents values " << zero1 << " and " << zero2;
    if (delta < 0)
        deltaimag = sqrt(-delta)/2*a;
        cout << "The equation dont have real values, but have imagnary values '" << zeroreal << " + " << deltaimag << "i' and'" << zeroreal << " - " << deltaimag << "i'";
    //Imagninary numbers is not defined in C/C++, so its necessary use math definitions to set this numbers
    return 0;
}
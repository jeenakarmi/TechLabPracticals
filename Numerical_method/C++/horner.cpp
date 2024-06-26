/*
Horner Method to find the root of polynomial function
*/

#include <iostream>
using namespace std;

int main()
{
    int degree, x, i, highest_value_a, a;
    cout << "Enter the degree of polynomial:\t";
    cin >> degree;
    
    cout << "Enter value of x:\t";
    cin >> x;
    
    cout << "Enter polynomial coefficients of a"<<degree<<":\t";
    cin >> highest_value_a;
    float p = highest_value_a;
    for (i = degree - 1; i >= 0; i--)
    {
        cout << "Enter the value of a" <<i<<":\t";
        cin >> a;
        p = p * x + a;
    }
    cout << "\nThe functional value of given polynomial is:\t"
         << p;

    return 0;
}
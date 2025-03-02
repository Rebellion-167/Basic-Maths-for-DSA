//Given two integers N1 and N2, find their greatest common divisor.
//The Greatest Common Divisor of any two integers is the largest number 
//that divides both integers.

#include <bits/stdc++.h>
using namespace std;

int findGCD(int a, int b)
{
    while(a>0 && b>0)
    {
        if(a>b) a = a%b;
        else b = b%a;
    } 
    if(a==0) return b;
    else return a;
}

int main()
{
    int a,b;
    cout << "Enter two numbers : ";
    cin >> a >> b;

    int gcd = findGCD(a,b);
    cout << "The GCD of " << a << " and " << b << " is : " << gcd;

    return 0;
    
}
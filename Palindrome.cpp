//Program to check for Palindrome Number
//A palindrome number is a number that reads the same forward and backward.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int n1 = n;//storing a copy of the number
    int revNum = 0;//to store the reverse number

    while(n!=0)
    {
        int digit = n%10;
        revNum = (revNum * 10) + digit;
        n/=10;
    }

    if(revNum == n1)
        cout << n1 << " is a Palindrome Number.";
    else
        cout << n1 << " is not a Palindrome Number.";

    return 0;
}
// Given a signed 32-bit integer x, return x with its digits reversed.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int revNum = 0;

    while(n!=0)
    {
        int ld = n%10;
        n/=10;
        revNum = (revNum * 10) + ld;
        if(revNum > INT_MAX || revNum < INT_MIN)
            return 0;
    }

    cout << "The Reversed Number is : " << revNum;
    return 0;
}
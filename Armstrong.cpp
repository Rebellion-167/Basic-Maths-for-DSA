//Given an integer N, return true it is an Armstrong number otherwise return false.
//An Amrstrong number is a number that is equal to the sum of its own digits each 
//raised to the power of the number of digits.

#include <bits/stdc++.h>
using namespace std;

int numberOfDigits(int x){
    int n = 0;
    while(x){
        n++;
        x/=10;
    }
    return n;
}

bool isArmstrong(int x){
    int n = x;
    int digits = numberOfDigits(x);
    double sum = 0;
    while(x){
        int d = x%10;
        sum += pow(d,digits);
        x/=10;
    }
    if(sum==n) return true;
    else return false;
}

int main()
{
    int n;//to store the number
    cout << "Enter a number : ";
    cin >> n;

    bool answer = isArmstrong(n);

    if(answer)
        cout << n << " is an Armstrong Number.";
    else
        cout << n << " is not an Armstrong Number.";
    
    return 0;
}
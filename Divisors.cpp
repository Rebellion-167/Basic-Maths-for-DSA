//Given an integer N, return all divisors of N.
//A divisor of an integer N is a positive integer that divides N without leaving a remainder. 
//In other words, if N is divisible by another integer without any remainder, 
//then that integer is considered a divisor of N.

#include <bits/stdc++.h>
using namespace std;

void printDivisors(int n){

    for(int i=1;i<=n;i++){
        if(n%i==0)
            cout << i << " ";
    }
}

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << "The divisors of " << n << " are : ";
    printDivisors(n);

    return 0;
}
// Given an integer N, check whether it is prime or not. 
//A prime number is a number that is only divisible by 1 and itself 
//and the total number of divisors is 2.

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    int count = 0;//to count the number of divisors
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
            if((n/i)!=i)
                count ++;
        }
    }

    if(count==2) return true;
    else return false;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    bool answer = isPrime(n);
    
    if(answer)
        cout << n << " is a Prime Number.";
    else   
        cout << n << " is not a Prime Number.";
    
    return 0;
}
//Given a positive integer n, count the number of digits in n 
//that divide n evenly (i.e., without leaving a remainder).
//Return the total number of such digits.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;//to store the number
    cout << "Enter a number : ";
    cin >> n;

    int n1 = n;//storing a copy of the number
    int count = 0;//to store the number of digits that divides n evenly
    while(n!=0)
    {
        int digit = n%10;
        if(digit!=0 && n1%digit==0)
            count++;
        n/=10;
    }
    
    cout << count;
    return 0;
}
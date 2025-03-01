// Program to check for Palindrome Number
// using two pointers for integers

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x)
{
    // Checking for negative number
    if (x < 0)
        return false; // Negative numbers are not palindrome

    long div = 1;
    while (x >= 10 * div)
        div *= 10;

    while (x)
    {
        int right = x % 10;
        int left = x / div;

        if (left != right)
            return false;

        x = (x % div) / 10;
        div /= 100;
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    bool answer = isPalindrome(n);

    if (answer)
        cout << n << " is a Palindrome Number.";
    else
        cout << n << " is not a Palindrome Number.";
}

//Another method to print the divisors of a number

#include <bits/stdc++.h>
using namespace std;

void printDivisors(int n){

    vector<int> v;
    for(int i=1;i*i<=n;i++){
        if(n%i==0)
            v.push_back(i);
        if((n/i)!=i)
            v.push_back((n/i));
    }

    sort(v.begin(),v.end());
    for(auto it : v) cout << it << " ";
}

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << "The divisors of " << n << " are : ";
    printDivisors(n);

    return 0;
}
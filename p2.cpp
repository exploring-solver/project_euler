#include <bits/stdc++.h>
using namespace std;

vector<long long> fibs(long long n) {
    vector<long long> fib;
    if (n >= 1) fib.push_back(1);
    if (n >= 2) fib.push_back(2);
    
    long long a = 1, b = 2;
    while (true) {
        long long next_fib = a + b;
        // ye overflow aur condition check karna zaroori hai
        if (next_fib >= n || next_fib < 0)
            break;

        fib.push_back(next_fib);
        a = b;
        b = next_fib;
    }

    return fib;
}

int main() {
    long long n;
    cout << "Enter the upper limit for Fibonacci numbers: ";
    cin >> n;

    vector<long long> space = fibs(n);
    long long res = 0;

    for (long long num : space) {
        if (num % 2 == 0) {
            res += num;
        }
    }

    cout << "The sum of even-valued Fibonacci numbers up to " << n << " is: " << res << endl;
    return 0;
}

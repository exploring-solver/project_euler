#include <bits/stdc++.h>
using namespace std;

int largestPrime(long long n) {
    int res=-1;
    while(n%2==0) {
        res = 2;
        n /= 2;
    }

    // n ab odd bann chuka h
    for(int i=3; i<=sqrt(n); i+=2) {
        while(n%i==0) {
            n /= i;
            res = i;
        }
    }
    // agar n abhi tak factorize nahi hua h toh woh khud prime h
    return n>2 ? n : res;
}

int main() {
    long long n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"The largest prime factor of "<<n<<" is: "<<largestPrime(n)<<endl;
    return 0;
}

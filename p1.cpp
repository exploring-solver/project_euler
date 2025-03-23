#include <iostream>

using namespace std;

int res(int a, int b, int bar) {
    int sum = 0;
    for (int i = 1; i < bar; i++) {
        if (i % a == 0 || i % b == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int a, b, bar;
    
    cout << "Enter first number (a): ";
    cin >> a;
    cout << "Enter second number (b): ";
    cin >> b;
    cout << "Enter the upper limit (bar): ";
    cin >> bar;

    int result = res(a, b, bar);
    cout << "The sum of multiples of " << a << " or " << b << " below " << bar << " is: " << result << endl;

    return 0;
}

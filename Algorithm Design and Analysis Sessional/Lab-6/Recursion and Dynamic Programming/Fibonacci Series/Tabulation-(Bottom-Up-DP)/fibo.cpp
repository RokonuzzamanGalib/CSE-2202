#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 1) return n;
    int table[n + 1];
    table[0] = 0;
    table[1] = 1;
    for (int i = 2; i <= n; i++) {
        table[i] = table[i - 1] + table[i - 2];
    }
    return table[n];
}

int main() {
    int n;
    cout<<"n = ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << fib(i) << " ";
    }
    cout << endl;
    return 0;
}

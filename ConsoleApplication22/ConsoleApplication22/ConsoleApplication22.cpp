#include <iostream>

using namespace std;

long long fib(int n) {
    if (n == 1) {
        return 0;
    }else if (n == 2) {
        return 1;
    }else {
        return fib(n - 1) + fib(n - 2);
    }
}

long long fib2(int n) {
    
    if (n == 1) return 0;
    long long m = 1;
    long long l = 0;
    long long k = 1;
    
    for (int i=0; i < n-2;i++) {
        k = m;
        m += l;
        l = k;
    }
    return m;
}

int main()
{
    long long x;
    cin >> x;
    cout << fib(x)<<endl;
    cout << fib2(x);
}
#include <iostream>
#include <chrono>

using namespace std;

long long fib1(int n) {
    if (n == 1) {
        return 0;
    }else if (n == 2) {
        return 1;
    }else {
        return fib1(n - 1) + fib1(n - 2);
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
    int x;
    cin >> x;
    auto startt = chrono::high_resolution_clock::now();
    cout << fib1(x) << endl;
    auto endt = chrono::high_resolution_clock::now();
    chrono::duration<float> duration = endt - startt;
    auto start = chrono::high_resolution_clock::now();
    cout << fib2(x) << endl;
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<float> duration2 = end - start;
    float mdur = duration.count() - duration2.count();
    if (mdur<0) {
        cout << "fib2 faster by "<<-mdur*1000;
    }else if (mdur > 0) {
        cout << "fib1 faster by " << mdur*1000;
    }else {
        cout << "They are equal";
    }
    
}
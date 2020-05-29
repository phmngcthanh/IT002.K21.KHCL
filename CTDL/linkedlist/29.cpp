#include <iostream>
#include <cmath>

using namespace std;

double p1 (double a[], long n, long x) {
    double res = 0;
    for (long i = 0; i <= n; i++)
        res = res + a[i] * pow(x, i);
    return res;
}

int main() {
    long p, n, x, m;
    double a[1000], b[1000], c[100000], res;
    cin >> p;
    cin >> n;
    for (long i = n; i >= 0; i--)
        cin >> a[i];
    if  (p == 1) {
        cin >> x;
    }
    else {
        cin >> m;
        for (long i = m; i>= 0; i--)
            cin >> b[i];
    }

    if (p == 1) {
        res = p1(a, n, x);
        cout << res;
    }
    else if (p == 2) {
        for (long i = 0; i <= max(n, m); i++)
            a[i] = a[i] + b[i];
        cout << max (n, m) << endl;
        for (long i = max(n, m); i >= 0; i--)
            cout << a[i] << " ";
        cout << endl;
    }
    else if (p == 3) {
        for (long i = 0; i <= max(n, m); i++)
            a[i] = a[i] - b[i];
        cout << max (n, m) << endl;
        for (long i = max(n, m); i >= 0; i--)
            cout << a[i] << " ";
        cout << endl;
    }
    else if (p == 4) {
        for (long i = 0; i <= n; i++)
            for (long j = 0; j <=m; j++) {
                long k = i + j;
                c[k] = c[k] + a[i] * b[j];
            }
        cout << n + m << endl;
        for (long i = n + m; i >= 0; i--)
            cout << c[i] << " ";
    }
}

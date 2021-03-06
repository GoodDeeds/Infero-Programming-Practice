#include <iostream>
#include <cmath>

using namespace std;

long findLowerN(long a, long m)
{
    return (a-1)/pow(2, m);
}

long findA(long a, long m)
{
    if (m == 0)
    {
        if (a == 0) return 1;
        else return 0;
    }
    else if (a%2 == 0) return findA(a/2, m-1);
    else return findA((a-1)/2, m-1) + findA((a+1)/2, m-1);
}

int main()
{
    long T;
    cin >> T;
    for (long t = 0; t < T; t++) {
        long N, m;
        long x, y;
        long sum = 0;
        cin >> N >> m >> x >> y;
        long *arr = new long[N+1];
        for (long i=0; i<N; i++) cin >> arr[i];
        arr[N] = 0;
        for (long i=x; i<=y; i++)
        {
            long lowerN = findLowerN(i, m);
            long index = i - lowerN*pow(2, m) - 1;
            long a = findA(index, m);
            long b = findA(pow(2, m) - index, m);
            // cout << i << ": " << a << " " << b << endl;
            sum += (arr[lowerN]*a)%(1000000007);
            sum%=1000000007;
            sum += (arr[lowerN+1]*b)%(1000000007);
            sum%=1000000007;
        }
        sum%=1000000007;
        cout << sum << endl;
    }
    return 0;
}

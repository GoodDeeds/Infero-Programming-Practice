#include <iostream>
#include <cmath>

using namespace std;

long long findLowerN(long long a, int m)
{
    return (a-1)/pow(2, m);
}

long long findA(long long a, int m, long long **A)
{
    if (A[m][a]!=-1)
    {
        return A[m][a];
    }
    if (m == 0)
    {
        if (a == 0) return 1;
        else return 0;
    }
    
    if (a%2 == 0) A[m][a]= findA(a/2, m-1, A);
    else A[m][a]= findA((a-1)/2, m-1, A) + findA((a+1)/2, m-1, A);
    return A[m][a];
}

int main()
{
    long long **A = new long long*[31];
    for (int i=0; i<31; i++)
    {
        int n = pow(2, i)+1;
        cout << n << " ";
        A[i] = new long long[n];
        for (int j=0; j<n; j++)
        {
            A[i][j] = -1;
            A[i][j] = findA(j, i, A);// 
        }
    }
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        int N, m;
        long long x, y;
        long long sum = 0;
        cin >> N >> m >> x >> y;
        int * arr = new int[N+1];
        for (int i=0; i<N; i++) cin >> arr[i];
        arr[N] = 0;
        for (long long i=x; i<=y; i++)
        {
            long long lowerN = findLowerN(i, m);
            long long index = i - lowerN*pow(2, m) - 1;
            long long a = findA(index, m, A);
            long long b = findA(pow(2, m) - index, m, A);
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

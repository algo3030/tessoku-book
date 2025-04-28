#include <iostream>
using namespace std;

int main()
{
    int N, Q, A[100000], S[100001], L[100000], R[100000];

    cin >> N >> Q;
    for (int i = 0; i < N; i++)
        cin >> A[i];

    for (int i = 0; i < Q; i++)
        cin >> L[i] >> R[i];

    S[0] = 0;
    for (int i = 0; i < N; i++)
        S[i + 1] = S[i] + A[i];

    for (int i = 0; i < Q; i++)
    {
        cout << S[R[i]] - S[L[i] - 1] << endl; // 累積和を使うのでLeftのindexを-1する
    }
    return 0;
}
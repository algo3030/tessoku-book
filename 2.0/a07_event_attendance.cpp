#include <iostream>
using namespace std;

int main()
{
    int D, N, L[100000], R[100000], DIFF[100000];
    cin >> D >> N;
    for (int i = 0; i < N; i++)
        cin >> L[i] >> R[i];

    for (int i = 0; i < N; i++)
    {
        DIFF[L[i] - 1] += 1;
        DIFF[R[i]] -= 1; // ~R日目までは参加しているので、-1しない
    }

    int current = 0;
    for (int i = 0; i < D; i++)
    {
        current += DIFF[i];
        cout << current << endl;
    }
    return 0;
}
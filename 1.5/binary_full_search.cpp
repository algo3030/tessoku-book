#include <iostream>
using namespace std;

int main()
{
    int N, K, A[22];
    cin >> N >> K;
    for (int i = 0; i < N; i++)
        cin >> A[i];

    bool Answer = false;
    for (int i = 0; i < (1 << N); i++) // すべてのbitパターンを探索
    {
        int sum = 0;
        for (int j = 0; j < N; j++)
        {
            int div = (1 << j);
            if ((i / div) % 2 == 1) // 現在のbitが選択されていたら、加算
                sum += A[j];
        }
        if (sum == K)
        {
            Answer = true;
            break;
        }
    }

    if (Answer == true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
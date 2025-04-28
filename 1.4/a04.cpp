#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int x = 9; x >= 0; x--)
    {
        int div = (1 << x);
        cout << (N / div) % 2;
    }
    cout << endl;
    return 0;
}
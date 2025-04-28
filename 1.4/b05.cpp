#include <iostream>
using namespace std;

int main()
{
    string N;
    cin >> N;

    int dec = 0;
    for (char bit : N)
    {
        dec <<= 1;
        if (bit == '1')
            dec += 1;
    }
    cout << dec << endl;

    return 0;
}
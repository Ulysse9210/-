#include <iostream>

using namespace std;

int main()
{
    int StudentNumber, a, b, c;
    cin >> StudentNumber >> a >> b >> c;
    for (int i = StudentNumber; i > 0; --i)
    {
        if (i != a && i != b && i != c)
        {
            cout << "No. " << i << endl;
        }
    }
    return 0;
}
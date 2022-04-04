#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int NumberOfPeople;
    cin >> NumberOfPeople;
    for (int i = 0; i < NumberOfPeople; ++i)
    {
        int gender, height, weight, age;
        float bmr;
        cin >> gender >> age >> height >> weight;
        if (gender == 1)
        {
            bmr = 13.7 * weight + 5.0 * height - 6.8 * age + 66.0;
        }
        else
        {
            bmr = 9.6 * weight + 1.8 * height - 4.7 * age + 655.0;
        }
        cout << setiosflags(ios::fixed) << setprecision(2) << bmr << endl;
    }
    return 0;
}
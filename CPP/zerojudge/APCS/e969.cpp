#include <iostream>

using namespace std;
int main()
{
    int money, time, k;
    cin >> money >> time >> k;
    int cost[2] = {32, 55};
    if (money < cost[k])
    {
        cout << "Wayne can't eat and drink." << endl;
    }
    int TimePass;
    while (money >= cost[k])
    {
        cout << TimePass << ": Wayne ";
        if (k == 0)
        {
            cout << "eats an Apple pie, ";
        }
        else
        {
            cout << "drinks a Corn soup, ";
        }
        money -= cost[k];
        if (money == 0)
        {
            cout << "and now he doesn't have money." << endl;
        }
        else if (money == 1)
        {
            cout << "and now he has 1 dollar." << endl;
        }
        else
        {
            cout << "and now he has " << money << " dollars." << endl;
        }
        k = 1-k;
        TimePass += time;
    }
    return 0;
}
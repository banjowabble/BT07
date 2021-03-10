#include <bits/stdc++.h>
using namespace std;

int rollTheDice ()
{
    return rand() % 6 + 1;
}

int main ()
{
    srand(time(NULL));
    int sum1 = rollTheDice(); int sum2 = rollTheDice();
    cout << "Player one rolled the dice and got: " << sum1 << "    Player one's total score is: " << sum1
         << "\nPlayer two rolled the dice and got: " << sum2 << "    Player two's total score is: " << sum2;
    while (sum1 < 100 && sum2 < 100)
    {
        if (sum1 < sum2)
        {
            int p1 = rollTheDice(); sum1 += p1;
            cout << "\nPlayer one rolled the dice and got: " << p1 << "    Player one's total score is: " << sum1;
            int p2 = rollTheDice(); sum2 += p2;
            cout << "\nPlayer two rolled the dice and got: " << p2 << "    Player two's total score is: " << sum2;
        }
        else
        {
            int p2 = rollTheDice(); sum2 += p2;
            cout << "\nPlayer two rolled the dice and got: " << p2 << "    Player two's total score is: " << sum2;
            int p1 = rollTheDice(); sum1 += p1;
            cout << "\nPlayer one rolled the dice and got: " << p1 << "    Player one's total score is: " << sum1;
        }
    }
    if (sum1 >= 100) cout << "\nPlayer one wins!";
    else cout << "\nPlayer two wins!";
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int countEven(int*, int);

int main ()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    countEven(a, 10);
}

int countEven(int* a, int n)
{
    int count = 0, revCount = 0;
    for (int i=0; i<5; i++)
    {
        if (a[i] % 2 == 0) count++;
    }

    for (int i=n-1; i>n-6 ;i--)
    {
        if (a[i] % 2 == 0) revCount++;
    }
    cout << count << ' ' << revCount;
}

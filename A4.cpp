#include <bits/stdc++.h>
using namespace std;
int binarySearch(int* a, int key, int low, int high)
{
    if (low > high) return -1;
    int mid = (low+high)/2;
    if (*(a+mid) == key) return mid;
    else if (*(a+mid)<key) return binarySearch(a, key, mid + 1, high);
    else return binarySearch(a, key, low, mid - 1);
}
int main ()
{
    int key; cin >> key;
    int a[5] = {1,2,3,4,5};
    cout << binarySearch(a, key, 0, 5);
}

#include <bits/stdc++.h>
using namespace std;
int f(int a[])
{
    return sizeof(a);
}
int foo (int a[5])
{
    return sizeof(a);
}
int main ()
{
    int a[5] = {1,2,3,4,5};
    cout << sizeof(a) << ' ' << foo(a) << ' ' << f(a);
              //20              //8 bat            //8
                                //ke so phan tu
}

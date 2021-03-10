#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a=20, b=25, c=30;
    const int* pA = &a;
    int* const pB = &b;
    const int* const pC = &c;

    *pA += 1; //error cuz a is const
    *pB += 1;
    *pC += 1; //error cuz c is const
     pA = NULL;
     pB = NULL; //error cuz pB is const
     pC = NULL; //error cuz pC is const
}

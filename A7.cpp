#include <bits/stdc++.h>
using namespace std;
int main (int argc, char* argv[])
{
    char* s1 = argv[1];
    char* s2 = argv[2];
    const int l = strlen(s1);
    int count = 0;
    //strncpy(tmp, s1, 1);
    for (int i=0; i<l; i++)
    {
        if (strncmp(s1, s2,2) == 0)
            count++;
        memmove(&s1[0],&s1[1],strlen(s1));
    }
    cout << count;
}

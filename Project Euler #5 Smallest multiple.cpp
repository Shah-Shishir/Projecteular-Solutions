/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define u unsigned int

const lld MAX = 10000001;

llu GCD (llu a, llu b)
{
    if (b == 0)
        return a;
    else
        return GCD (b, a%b);
}

int main (void)
{
    int tc;
    llu n,i,lcm;

    sf ("%d",&tc);

    while (tc--)
    {
        sf ("%llu",&n);

        lcm = 1;

        for (i=2; i<=n; i++)
            lcm = (lcm*i)/GCD(lcm,i);

        pf ("%llu\n",lcm);
    }

    return 0;
}
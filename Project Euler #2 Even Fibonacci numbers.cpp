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
#define ssf sscanf
#define spf sprintf
#define fsf fscanf
#define fpf fprintf
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pii pair <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MOD = 1000000007;
const int MAX = 1000005;

llu fib[28];

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    fib[0] = 0, fib[1] = 2, fib[2] = 8;

    int tc,i;
    llu n,sum;

    for (i=3; i<28; i++)
        fib[i] = 4*fib[i-1]+fib[i-2];

    sf ("%d",&tc);

    while (tc--)
    {
        sf ("%llu",&n);

        sum = 0;

        for (i=0; i<28; i++)
        {
            if (fib[i] > n)
                break;

            sum += fib[i];
        }

        pf ("%llu\n",sum);
    }

    memset (fib,0,sizeof fib);

    return 0;
}

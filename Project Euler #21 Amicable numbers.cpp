/***

            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir,
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define ebar_khela_hoppe    int main (void)
#define bair_ho             return 0
#define sf                  scanf
#define pf                  printf
#define ssf                 sscanf
#define spf                 sprintf
#define fsf                 fscanf
#define fpf                 fprintf
#define fast                ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase               sf ("%d",&tc)
#define sn                  sf ("%d",&n)
#define whilecase           while (tc--)
#define eof                 while (cin >> n)
#define forloop             for (pos=1; pos<=tc; pos++)
#define arrayloop           for (i=0; i<n; i++)
#define cinstr              cin >> str
#define getstr              getline (cin,str)
#define pcase               pf ("Case %d: ",pos)
#define vi                  vector <int>
#define si                  set <int>
#define vs                  vector <string>
#define pii                 pair <int,int>
#define mii                 map <int,int>
#define pb                  push_back
#define in                  insert
#define llu                 unsigned long long
#define lld                 long long
#define U                   unsigned int
#define endl                "\n"

const lld m = 1073741824;
const int MAX = 100001;
const double pi = acos(-1.0);

int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

int arr[MAX];

ebar_khela_hoppe
{
    /*
    	freopen ("input.txt","r",stdin);
    	freopen ("output.txt","w",stdout);
    */

    int tc,n,i,j,res,l,ans;

    for (i=1; i<MAX; i++)
    {
        res = 0;

        for (j=1; j*j<=i; j++)
        {
            if (i % j == 0)
            {
                if (j*j == 0)
                    res += j;
                else
                {
                    res += j;
                    res += (i/j);
                }
            }
        }

        arr[i] = res-i;
    }

    si s;
    si :: iterator it;

    for (i=1; i<MAX; i++)
    {
        res = arr[i];

        if (res < MAX && arr[i] == res && arr[res] == i && res != i)
        {
            s.in(i);
            s.in(res);
        }
    }

    sf ("%d",&tc);

    while (tc--)
    {
        sf ("%d",&n);

        ans = 0;

        for (it=s.begin(); it!=s.end(); it++)
        {
            if (*it >= n)
                break;

            ans += *it;
        }

        pf ("%d\n",ans);
    }

    bair_ho;
}

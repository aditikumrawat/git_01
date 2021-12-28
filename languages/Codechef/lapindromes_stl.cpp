#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

const int N = 1e5 + 10;
const int MOD = 1e9 + 7;
const long long int NOD = 3e18 + 10;
typedef long long int ll;
#define endl "\n"

long long sum(long long n)
{
    return (n * (n + 1)) / 2;
}

void solve()
{
    string s;
    cin >> s;
    multiset<char> a, b;
    if (s.length()%2==0)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (i < (s.length() / 2))
                a.insert(s[i]);
            if (i >= (s.length() / 2))
                b.insert(s[i]);
        }
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (i < (s.length() / 2))
                a.insert(s[i]);
            if (i > (s.length() / 2))
                b.insert(s[i]);
        }
    }
    if (a == b)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
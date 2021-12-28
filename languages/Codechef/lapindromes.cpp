#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int left[26] = {0};
        int right[26] = {0};
        int size = s.length();

        for (int i = 0; i < size / 2; i++)
        {
            int index = s[i] - 'a';
            left[index]++;
        }

        for (int i = (size+1)/2; i < size; i++)
        {
            int index = s[i] - 'a';
            right[index]++;
        }
        int t = 0;
        for (int i = 0; i < 26; i++)
        {
            if (left[i] != right[i])
            {
                t += 1;
                break;
            }
        }
        if (t == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
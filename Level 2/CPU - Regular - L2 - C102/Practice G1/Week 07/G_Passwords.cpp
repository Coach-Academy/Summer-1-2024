#include <bits/stdc++.h>

using namespace std;

#define int long long

int n;
vector<string> bank;
string filler;

void fun(int index, map<string, bool> &takenBefore, string built)
{
    if (index == filler.size())
    {
        if (takenBefore[built] == 0)
        {
            takenBefore[built] = 1;
            cout << built << endl;
        }
        return;
    }
    if (filler[index] == '#')
    {
        for (auto words : bank)
        {
            fun(index + 1, takenBefore, built + words);
        }
    }
    else
    {
        for (char i = '0'; i <= '9'; i++)
            fun(index + 1, takenBefore, built + i);
    }
    return;
}

signed main()
{
    while (cin >> n)
    {
        bank = vector<string>(n);
        for (auto &i : bank)
            cin >> i;
        int Q;
        cin >> Q;
        map<string, bool> taken;
        cout << "--" << endl;
        while (Q--)
        {
            cin >> filler;
            taken.clear();
            fun(0, taken, "");
        }
    }
}
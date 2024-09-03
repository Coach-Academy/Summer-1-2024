#include <bits/stdc++.h>

using namespace std;



string answer(int id, int cur_swaps, string taken, string &A)
{
    if(cur_swaps == 0)
        return taken;

    if (id == A.size())
        return taken;

    cout << id << " " << cur_swaps << " " << taken << endl;

    string cur = taken;

    for (int j = id + 1; j < A.size(); j++)
    {
        string other = taken;
        swap(other[id], other[j]);

        auto temp = answer(id + 1, cur_swaps - 1, other, A);

        if(stoll(temp) > stoll(cur))
            cur = temp;
    }

    auto temp = answer(id + 1, cur_swaps, taken, A);

    if(stoll(temp) > stoll(cur))
        cur = temp;

    return cur;
}

string solve(string A, int B)
{

    return answer(0, B, A, A);
}


int main()
{
    string A = "7599";
    int B = 2;
    cout << solve(A, B) << endl;
    return 0;
}
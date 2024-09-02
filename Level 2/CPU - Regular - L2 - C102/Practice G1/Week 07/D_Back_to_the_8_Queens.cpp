#include <bits/stdc++.h>
using namespace std;

#define int long long

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define mp make_pair
#define endl '\n'
#define rep(i, n) for (int i = 0; i < n; i++)

vector<int> rows(8);
vector<int> new_positioned(8);

int answer = 1e9;
// verify, recursion

bool verify(int r, int c)
{
    for (int i = 1; i < c; i++)
    {
        if (r == new_positioned[i])
            return false;
        if (abs(r - new_positioned[i]) == abs(c - i))
            return false;
    }

    return true;
}

void recurs(int col)
{
    for (int i = 1; i < 9; i++)
    {
        if (verify(i, col))
        {
            new_positioned[col] = i;

            if (col == 8)
            {
                int new_answer = 0;

                for (int j = 1; j < 9; j++)
                    new_answer += (new_positioned[j] != rows[j]);

                answer = min(answer, new_answer);
            }
            else
                recurs(col + 1);
        }
    }
}

signed main()
{

    int tc = 1;

    while (cin >> rows[1] >> rows[2] >> rows[3] >> rows[4] >> rows[5] >> rows[6] >> rows[7] >> rows[8])
    {

        answer = 1e9;

        recurs(1);

        cout << "Case " << tc++ << ": " << answer << endl;
    }
}

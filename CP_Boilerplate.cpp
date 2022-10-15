#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define gc getchar_unlocked
#define pc putchar_unlocked
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(x) scanf("%s", x)
#define pi(x) printf("%d", x)
#define pl(x) printf("%lld", x)
#define ps(x) printf("%s", x)
#define nl printf("\n")
#define space printf(" ")
#define deb(x) cout << #x << " = " << x << endl
#define deb2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl
#define fo(start, end) for (int i = start; i < end; i++)
#define pb push_back
#define all(x) x.begin(), x.end()
#define sortAll(x) sort(all(x))
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vstr;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvstr;

const int mod = 1'000'000'007;

class Ci
{
public:
    void ai(vi &vec, ll vectorSize)
    {
        fo(0, vectorSize)
        {
            ll value;
            si(value);
            vec.pb(value);
        }
    }

    void mi(vvi &vec, int rows, int cols)
    {
        fo(0, rows)
        {
            vi inner;
            fo(0, cols)
            {
                ll value;
                si(value);

                inner.pb(value);
            }

            vec.pb(inner);
        }
    }
};

class Co
{
public:
    void ao(vi vec)
    {
        for (auto i : vec)
        {
            pi(i);
            space;
        }

        nl;
    }

    void mo(vvi vec)
    {
        for (vi inner : vec)
        {
            for (int i : inner)
            {
                pi(i);
                space;
            }

            nl;
        }
    }
};

class Utils
{
public:
    int myPow(int base, int exp)
    {
        base %= mod;
        int result = 1;
        while (exp > 0)
        {
            if (exp & 1)
                result = ((ll)result * base) % mod;
            base = ((ll)base * base) % mod;
            exp >>= 1;
        }
        return result;
    }
};

Ci ci;
Co co;
Utils util;

class Solution
{
public:
    void solve()
    {
    }
};

Solution sol;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int testcases;
    si(testcases);

    while (testcases--)
        sol.solve();
    return 0;
}
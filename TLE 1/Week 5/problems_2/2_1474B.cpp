// https://codeforces.com/problemset/problem/1474/B
// B. Different Divisors

// https://oeis.org/ To find the PATTERN
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
//------constants-----
#define MOD 1000000007 // 1e9
#define PI 3.1415926535897932384626

//----------Pair----------
typedef pair<int, int> pii;

//----------Vector----------
typedef vector<int> vi;
typedef vector<pii> vpii;
#define vvc vector<vector<char>>
#define vvi vector<vector<int>>

//----------Map----------
typedef unordered_map<int, int> umpii;
typedef unordered_map<char, int> umpci;
typedef map<int, int> mp;
typedef map<char, int> mpci;

//----------Set----------
typedef unordered_set<char> usetc;
typedef unordered_set<int> useti;
typedef set<char> oset;
typedef set<int> oseti;

#define F first
#define S second
#define pb emplace_back
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
// Macro Definition:
// #define fori(i, n) for (int i = 0; i < n; i++)
#define fori(start, end) \
    int nn = (end);      \
    for (int i = (start); i < nn; i++)
// #define forj(j, n) for (int j = 0; j < n; j++)
#define forj(start, end) \
    int nn = (end);      \
    for (int j = (start); j < nn; j++)
// #define fork(k, n) for (int k = 0; k < n; k++)
#define fork(start, end) \
    int nn = (end);      \
    for (int k = (start); k < nn; k++)
//----------------------- functions--------------------------

// Modular exponentiation O(logN)
int power(int a, int b)
{
    if (b == 0)
        return 1;
    a %= MOD;
    int half_power = power(a, b / 2); // power(a,b/2) will always be < MOD
    if (!(b & 1))                     // if even
        return half_power * half_power % MOD;
    else // if odd
        return half_power * half_power % MOD * a % MOD;
}

// gcd Recursive: Euclidean Algorithm O(logN)
// worst case : Fibonacci numbers
int GCD(int a, int b)
{
    if (a == 0)
        return b;
    return GCD(b % a, a); //(b,a%b)
}

// LCM O(logN)
int LCM(int a, int b)
{
    return (a * b) / GCD(a, b);
}

// Modular Multiplicative Inverse (alias for modInverse) O(logN)
int MMI(int a)
{
    return power(a, MOD - 2);
}

// Binary Search
bool predicateBinary(int mid, vi &nums, int target)
{
}

// T(-1) || T(1) T ... F F || F(n)
int binarySearch(vi &nums, int target)
{
    int min = 0, max = nums.size() - 1;
    int left = min - 1, right = max + 1; // -1 to n -> exclusive
    while (right - left > 1)             // while not empty range
    {
        int mid = left + (right - left) / 2;
        predicateBinary(mid, nums, target) ? left = mid : right = mid;
    }
    // ans : last true {left} or first false{right}
}

int solve()
{
}

void Vatsh()
{
    // Your logic goes here
    int n;
    cin >> n;
    vi v(n);
    fori(i, n)
            cin >>
        v[i];
    cout << solve() << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int tt = 1;
    cin >> tt;
    while (tt--)
        Vatsh();

    return 0;
}
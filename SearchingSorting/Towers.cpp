#include<bits/stdc++.h>
using namespace std;

//----------------- Type Definitions -------------------
#define kill(x) cout<<x<<"\n";return;
#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define vpi vector<pii>
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second

//----------------- Fast IO -------------------
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

//----------------- Constants -------------------
const int MOD = 1e9 + 7;
const int N = 1e6 + 10; // For sieve and precomputation

// ---------- LOCAL RUN / ONLINE SubMISSION SWITCH ----------
#ifndef ONLINE_JUDGE
    #define debug(x) cerr << #x << " = " << x << "\n"
#else
    #define debug(x)
#endif
// -----------------------------------------------------------

//----------------- Prime Utilities -------------------
vector<bool> is_prime(N, true);
vi primes;

// Sieve of Eratosthenes
void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < N; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j < N; j += i)
                is_prime[j] = false;
        }
    }
    for (int i = 2; i < N; i++) {
        if (is_prime[i]) primes.pb(i);
    }
}
vector<ll> findMultiplesInRange(ll n, ll l, ll r) {
   vector<ll> ans;
    for (ll i = 1; i <= n; ++i) {
        ll x = ((l + i - 1) / i) * i;
        if (x > r) return {};
        ans.pb(x);
    }
    return ans;
}
vector<ll> generateDistribution(ll n, ll s, ll r) {
    vector<ll> result;

    ll max_val = s - r;
    result.push_back(max_val); // The max element

    ll parts = n - 1;
    for (int i = 0; i < parts; ++i) {
        result.push_back((r + i) / parts); // Balanced distribution
    }

    return result;
}
//First multiple of k >= x
ll firstMultipleGE(ll x, ll k) {
    return ((x + k - 1) / k) * k;
}
//First multiple of k in range [l, r]; returns -1 if not possible
ll firstMultipleInRange(ll l, ll r, ll k) {
    ll m = firstMultipleGE(l, k);
    return (m <= r ? m : -1);
}
// Optimized Prime Check (6k ± 1 method)
bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}
//----------------- Math Utilities -------------------
ll ceilDiv(ll a, ll b) {
    return (a + b - 1) / b;
}
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}
int countDivisibleByAAndB(int n, int a, int b) {
    int lcm_ab = lcm(a, b);  
    return n / lcm_ab;
}
int binpow(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}
int binpow_mod(int a, int b, int m = MOD) {
    a %= m;
    int res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
// XOR from 1 to n
int xor_1_to_n(int n) {
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}

//----------------- Bit Utilities -------------------
ll odd(ll k){
    if (k == 0) return 0;
    return k >> __builtin_ctzll(k);
}
ll oddop(ll k) {
    return (k == 0) ? 0 : __builtin_ctzll(k);
}

int countBits(int n) {
    return __builtin_popcountll(n);
}

int getBit(int n, int i) {
    return (n >> i) & 1;
}

void setBit(int &n, int i) {
    n |= (1LL << i);
}

void clearBit(int &n, int i) {
    n &= ~(1LL << i);
}
void solve(){
    int n;
    cin>>n;
    vi v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    multiset<int> topOftowers;
    for(int i=0;i<n;i++){
        auto ub=topOftowers.upper_bound(v[i]);
        if(ub!=topOftowers.end()){
            topOftowers.erase(ub);
        }
        topOftowers.insert(v[i]);
    }
    cout<<topOftowers.size()<<"\n";
}
int32_t main() {
    //---------------- LOCAL FILE REDIRECTION ----------------
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // Optional: for debugging
    // freopen("error.txt", "w", stderr);
#endif
   // ---------------------------------------------------------

    // int t;cin>>t;
    // while(t--)
    solve();

    return 0;
}



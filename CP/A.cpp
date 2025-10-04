/*
░█████╗░██████╗░██╗░██████╗███████╗  ██╗
██╔══██╗██╔══██╗██║██╔════╝██╔════╝  ██║
███████║██████╔╝██║╚█████╗░█████╗░░  ██║
██╔══██║██╔══██╗██║░╚═══██╗██╔══╝░░  ╚═╝
██║░░██║██║░░██║██║██████╔╝███████╗  ██╗
╚═╝░░╚═╝╚═╝░░╚═╝╚═╝╚═════╝░╚══════╝  ╚═╝*/
#include<bits/stdc++.h>
using namespace std;

// =================== Typedefs ===================
using ll   = long long;
using ull  = unsigned long long;
using i128 = __int128_t;
using str  = string;
// =================== Constants ===================
const char endL = '\n';
const int  inf  = 0x3f3f3f3f;
const int  MAX  = 200000; //if given
// =================== Fast IO ===================
#define WAKE    ios_base::sync_with_stdio(false);
#define UP_TO   cin.tie(nullptr);
#define REALITY cout.tie(nullptr);
// =================== Macros ===================
#define pb      emplace_back
#define ALL(x)  (x).begin(), (x).end()
#define rALL(x) (x).rbegin(), (x).rend()

#define srt(x)  sort(ALL(x))
#define rsrt(x) sort(rALL(x))
#define rev(x)  reverse(ALL(x))
#define sz(x)   (int)(x.size())

#define lb(v,x) (int)(lower_bound(ALL(v),x)-v.begin())
#define ub(v,x) (int)(upper_bound(ALL(v),x)-v.begin())
#define uni(v)  v.resize(unique(ALL(v))-v.begin())

#define yes     cout << "YES\n"
#define no      cout << "NO\n"
//================= MAIN CODE ===============
void DomainExpansion() {
    int n, k; cin >> n >> k;
    vector<int> a(n), b(n);
    int sum = 0, mx = -1, ans = -1;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int que = min(n, k);
    for(int i = 0; i < que; i++) {
        sum += a[i];
        mx = max(mx, b[i]);
        ans = max(ans, sum + (k-i-1)*mx);
    }
    cout << ans << endL;


}
// Bismillah...
int main() {
    WAKE UP_TO REALITY

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    //test cases
    int test = 1;
    cin >> test;
    //cin.ignore();

    for(int i = 1; i <= test; i++) {
        //cout << "Case " << i <<": ";
        DomainExpansion();
    }
    return 0;
}
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
using str  = string;
using vin  = vector<int>;
using vll  = vector<ll>;
// =================== Constants ===================
const char endL = '\n';
const int  inf  = 0x3f3f3f3f;
const int  MAX  = 200000; //if given
const long long MOD  = (1e9+7); //if given
// =================== Fast IO ===================
#define WAKE    ios_base::sync_with_stdio(false);
#define UP_TO   cin.tie(nullptr);
#define REALITY cout.tie(nullptr);
// =================== Macros ===================
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x)   (int)(x.size())
#define eb       emplace_back

#define print(arr) for(auto &it:(arr)) cout << it << " "; cout << endL;
#define yes     cout << "YES\n"
#define no      cout << "NO\n"
//================= MAIN CODE ===============

void DomainExpansion() {
    str s; cin >> s;
    ll n = sz(s), max_1 = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] == '1') 
            max_1++;
        else 
            break;
    }
    for(int i = n-1; i > 0 && max_1 != n; i--) {
        if(s[i] == '1') 
            max_1++;
        else 
            break;
    }
    ll cnt = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == '1') 
            cnt++;
        else 
            cnt = 0;
        max_1 = max(max_1, cnt);
    }
    ll area = 0;
    if(max_1 == n) area = max_1*max_1;
    else if(max_1 == 1) area = 1;
    else if(max_1 != 0) area = ((max_1+1)/2)*((max_1+2)/2);

    cout << area << endL; 

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
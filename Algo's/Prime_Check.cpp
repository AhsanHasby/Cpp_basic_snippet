#include<bits/stdc++.h>
using namespace std;
 
using ll = long long;
using str = string;

//Fast_IO:
#define WAKE             ios_base::sync_with_stdio(false); 
#define UP_TO            cin.tie(nullptr);
#define REALITY          cout.tie(nullptr);

//define:
#define endL             "\n"
#define yes              cout << "YES\n"
#define no               cout << "NO\n"


//Here is the code:
//** Main part() :
bool isPrime(ll n) {
    if(n < 2 || n%2 == 0) return false;
    for(ll i = 3; i*i <= n; i += 2) {
        if(n%i == 0) return false;
    }
    return true;
}

int main() {
    ll n; cin >> n;
    if(isPrime(n)) yes;
    else no;
}

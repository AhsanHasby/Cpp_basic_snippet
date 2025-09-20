
#include<bits/stdc++.h>
using namespace std;
 
using ll = long long;
using str = string;

const char endL = '\n';

//Fast_IO:
#define WAKE             ios_base::sync_with_stdio(false); 
#define UP_TO            cin.tie(nullptr);
#define REALITY          cout.tie(nullptr);

//define:
#define yes              cout << "YES\n"
#define no               cout << "NO\n"

//Here is the code:
void naruto() {
    int n; cin >> n;
    cin.ignore();
    vector<pair<int, str>> v;
    for(int i = 0; i < n; i++) {
        str s;
        getline(cin, s);
        size_t indx = s.find_last_of(' ');

        str name = s.substr(0, indx);
        int x = stoi(s.substr(indx+1));
        v.push_back({x, name});
    }

    sort(v.rbegin(), v.rend());
    for(auto i : v) cout << i.second << endL;
    
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
    for(int i = 1; i <= test; i++) {
        // cout << "Case " << i <<": ";
        naruto();
    }
    return 0;
}
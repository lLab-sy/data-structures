#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <iterator>
using namespace std;

vector<int> A;
bool max_median(int val, int k){
    int mn = 0, n = A.size();
    vector<int> dp(n, 0);
    for(int i=1;i<n;++i) dp[i] += dp[i-1] + (A[i]>=val);
    for(int i=k;i<n;++i){
        mn = min(mn, 2*dp[i-k]-(i-k));
        if(2*dp[i]-i > mn) return true;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, k;
    cin >> n >> k;

    A.emplace_back(-2e9);
    vector<int> sortedA;
    for(int i=0;i<n;++i){
        int x; cin >> x;
        A.emplace_back(x);
        sortedA.emplace_back(x);
    }

    sort(sortedA.begin(), sortedA.end());
    int mx = sortedA[(n-1)/2];
    int l=mx, r=n;
    while(l<=r){
        int md = (l+r)/2;
        if(max_median(md, k)){
            mx = max(mx, md);
            l = md+1;
        }else{
            r = md-1;
        }
    }

    cout << mx;

    return 0;
}
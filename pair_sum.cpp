#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, m;
    cin >> n >> m;

    int A[n];
    for(int i=0;i<n;++i){
        cin >> A[i];
    }

    vector<bool> possibleSum(2000001, false);
    for(int i=0;i<n-1;++i){
        for(int j=i+1;j<n;++j){
            possibleSum[A[i]+A[j]] = true;
        }
    }

    for(int i=0;i<m;++i){
        int val;
        cin >> val;
        if(possibleSum[val]){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}
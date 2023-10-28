#include <iostream>
#include <list>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, p, k; cin >> n >> p >> k;
    list<int> A;
    A.push_back(-1);
    auto l = A.begin();
    for(int i=0;i<n;++i){
        int val; cin >> val;
        if(i == p) A.push_back(k);
        A.push_back(val);
    }
    for(int i=0;i<=p;++i) l++;
    auto r = l;
    int cnt = -1;
    while(1){
        if(l == A.begin() or r == A.end() or *l != *r) break;
        int tmp = *l;
        while(l != A.begin() and *l == tmp){
            cnt++;
            l--;
        } 
        while(r != A.end() and *r == tmp){
            cnt++;
            r++;
        } 
        if(cnt < 3) break;
        A.erase(next(l), r);
        r = next(l);
        cnt = 0;
    }
    A.erase(A.begin());
    for(auto& x:A) cout << x << " ";
    return 0;
}
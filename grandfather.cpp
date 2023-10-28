#include <iostream>
#include <map>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    // get number of relation and number of query
    int n, Q;
    cin >> n >> Q;

    // create map for save who is father 
    map<ll, ll> father;

    ll f, s;
    for(int i=0;i<n;++i){
        // get father and son
        cin >> f >> s;

        // set that f is father of s in map father
        father[s] = f;
        
    }

    // query
    ll p1, p2;
    while(Q--){
        cin >> p1 >> p2;

        // at firsrt p1 should not equal to p2
        if(p1 == p2) goto caseNo;

        for(int i=0;i<2;++i){
            // check that we have data for p1 and p2
            if(father.find(p1) == father.end() or father.find(p2) == father.end()) goto caseNo;
            
            // set p1 and p2 to his father
            p1 = father[p1];
            p2 = father[p2];

            // if p1 == p2 it mean they have the same granfather
            if(p1 == p2 and i == 1) goto caseYes;
        }

        caseNo:
        cout << "NO\n";
        continue;

        caseYes:
        cout << "YES\n";      
    }
    return 0;
}
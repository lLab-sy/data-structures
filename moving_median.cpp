#include <iostream>
#include <vector>
#include <set>
#include <iterator>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, w;
    cin >> n >> w;

    multiset<pair<int, int> > ms;
    vector<int> v;

    for(int i=0;i<=w;++i){
        ms.insert(make_pair(i, -i));
        v.push_back(i);
    }
    auto md = ms.lower_bound(make_pair(w/2, -w/2));

    for(int i=0;i<n;++i){
        int val; cin >> val;
        v.push_back(val);
        
        ms.insert(make_pair(val, -(i+w+1)));

        auto pe = ms.lower_bound(make_pair(v[i], -i));
        auto pi = ms.lower_bound(make_pair(val, -(i+w+1)));

        if(*pe <= *md and *pi > *md){
            md++;
        }else if(*pe > *md and *pi <= *md){
            md--;
        }

        bool moveAfter = ms.lower_bound(make_pair(v[i], -i)) == md;
        if(moveAfter){
            md++;
        }
        ms.erase(ms.lower_bound(make_pair(v[i], -i)));
        if(moveAfter){
            md--;
        }

        if(i < w) continue;
        cout << (*md).first << " ";
    }

    return 0;
}
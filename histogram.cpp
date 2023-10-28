#include <iostream>
#include <map>
#include <string>
#include <set>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);

    int n;
    cin >> n;

    map<string, int> mp;
    string name;
    for(int i=0;i<n;++i){
        cin >> name;
        if(mp.find(name) == mp.end()) mp[name] = 0;
        mp[name]++;
    }

    for(auto& res: mp){
        if(res.second < 2) continue;;
        cout << res.first << " " << res.second << "\n";
    }

    return 0;
}
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    // get number of vote and k
    int n, k;
    cin >> n >> k;

    // create map for collect cound of each candidates 
    map<string, int> voteCount;
    
    string name;
    // loop get input vote
    for(int i=0;i<n;++i){
        // get vote name
        cin >> name;

        // create data for count vote if not have
        if(voteCount.find(name) == voteCount.end()) voteCount[name] = 0;
        // count
        voteCount[name]++;
    }

    // create vector for collect unique vote for each candidates
    vector<int> res;

    // loop in voteCount
    for(auto& score: voteCount){
        res.push_back(score.second);
    }

    // k max at size of res
    k = min(k, int(res.size()));

    // reverse sort
    sort(res.begin(), res.end(), greater<int>());

    cout << res[k-1];

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    // get size of vector
    int n, m;
    cin >> n >> m;
    
    // create vector
    vector<int> a, b;

    int val;
    // get first vector
    for(int i=0;i<n;++i){
        cin >> val;
        a.push_back(val);
    }

    // get second vector
    for(int i=0;i<m;++i){
        cin >> val;
        b.push_back(val);
    }

    // sort two vector a and b
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    // create a vector that collect the value that intersection in two vector
    int i = 0, j = 0;
    vector<int> res;
    
    while(i < n and j < m){
        if(a[i] < b[j]){
            i++;
        } else if(a[i] > b[j]){
            j++;
        } else{
            // case a[i] == b[j] and check that not have this val in res
            if(res.empty() or res.back() != a[i]){
                res.push_back(a[i]);
            }
            i++;j++;
        }
    }

    for(auto& num: res){
        cout << num << " ";
    }

    return 0;
}
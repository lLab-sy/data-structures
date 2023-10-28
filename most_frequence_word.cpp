#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    // get size of input
    int n;
    cin >> n;

    // map for count word
    map<string, int> stringCount;

    int mx = 0;    
    string word, mfWord = "none";
    // loop for get n words
    for(int i=0;i<n;++i){
        // get word
        cin >> word;

        // check that create word in map yet
        if(stringCount.find(word) == stringCount.end()) stringCount[word] = 0;

        // count word
        stringCount[word]++;
        
        // check that string count is more that max or not 
        if(stringCount[word] > mx){
            // if more than max change max
            mx = stringCount[word];
            mfWord = word;
        } else if(stringCount[word] == mx){
            // if equal to max
            // check that word is after mfWord in dictionary or not
            if(mfWord < word){
                // if after replace mfWord with word
                mfWord = word;
            }
        }
    }

    cout << mfWord << " " << mx;
    return 0;
}
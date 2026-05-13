// First Non-Repeating Element

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int>arr;
    map<int,int>freq;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    for(int x: arr){
        freq[x]++;
    }

    for(auto x: freq){
        if( x.second == 1 ){
            cout << x.first << " is first non repeating element.....";
            return 0;
        }
    }
    
    cout << "There is no first non repeating element.....";

    return 0;
}
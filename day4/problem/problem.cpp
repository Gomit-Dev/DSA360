//frequency count 

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int>arr;
    map<int,int>mp;

    for(int i=0;i<n; i++){
        int x; 
        cin >> x;
        arr.push_back(x);
    }

    for(int x: arr){
        mp[x]++;
    }

    for(auto x: mp){
        cout << x.first << " -> " << x.second << endl;
    }

    return 0;
}
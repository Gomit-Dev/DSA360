// Frequency count using map

#include<bits/stdc++.h>
using namespace std;

int main(){


    int n;
    cin >> n;

    vector<int>arr;
    for(int i=0; i<n; i++){
        int x;
        cin >>x;
        arr.push_back(x);
    }

    map<int,int>mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    for(auto x: mp ){
        cout << x.first << " -> " << x.second << endl;
    }

    return 0;
}    
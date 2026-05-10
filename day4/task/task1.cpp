// map

#include<bits/stdc++.h>
using namespace std;

int main(){

    map<int,int>freq;
    vector<int>arr;

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }


    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    for(auto x: freq){
        cout << x.first << " -> " << x.second << endl;
    }


    return 0;
}
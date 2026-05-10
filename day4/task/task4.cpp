// print unique elements

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int>arr;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    set<int>s;
    for(int i=0; i<n; i++){
        s.insert(arr[i]);
    }

    cout << "unique array: ";
    for(int x: s){
        cout << x << " ";
    }

    return 0;
}
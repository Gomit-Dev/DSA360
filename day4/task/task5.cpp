// count distinct element

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n ;

    vector<int>arr;
    set<int>s;

    for(int i=o; i<n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    for(int x: arr){
        s.insert(x);
    }

    int count = 0;
    
    for(int x: s){
        count++;
    }

    cout << count <<" distinct element in array."
    
    return 0;
}
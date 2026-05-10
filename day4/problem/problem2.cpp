// count distinct 

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
    for(int x: arr){
        s.inset(x);
    }

    int count = 0;
    for(int x: s){
        cout++;
    }

    cout << count << " distinct element." << endl; 

    return 0;
}
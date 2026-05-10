//First Non-Repeating Element

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

    map<int,int>freq;
    for(int x: arr){
        freq[x]++;
    }

    int f = 0 ;
    for(auto x: freq){
        if(x.second == 1){
            f = x.first; 
            break; 
        }
    }
    cout << "First Non-Repeating Element: " << f  <<endl;

    return 0;
}
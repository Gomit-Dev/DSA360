//Majority Element

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

    int majority = INT_MIN;
    for(auto x: freq){
        if(x.second > n/2){
            majority = x.first;
            break;
        }
    }

    cout << "Majority element: " << majority <<endl;


    return 0;
}


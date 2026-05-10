// max freq

#include<bits/stdc++.h>
using namespace std;

int main()
{

    map<int,int>mp;
    vector<int>arr;

    int n;
    cout << "enter size of array: ";
    cin >> n;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    int index = 0;
    int max = INT_MIN;
    for(auto x: mp){
        if(x.second > max){
            max = x.second;
            index = x.first;
        }
    }

    cout << "Maximum frequency element: " << index << " " << mp[index] << "times." << endl;

    return 0;
}
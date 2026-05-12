// Input vector and print reverse

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    vector<int>arr;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    stack<int>s;
    for(int i=0; i<n; i++){
        s.push(arr[i]);
    }

    cout << "Reverse Array: ";
    while( !s.empty() ){
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
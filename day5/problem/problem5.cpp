// next greater element

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<int> ans(n);

    stack<int> s;

    for(int i = n - 1; i >= 0; i--){

        while(!s.empty() && s.top()<=arr[i]){
            s.pop();
        }

        if(s.empty()){
            ans[i] = -1;
        }
        else{
            ans[i] = s.top();
        }

        s.push(arr[i]);
    }

    for(int x : ans){
        cout << x << " ";
    }

    return 0;
}
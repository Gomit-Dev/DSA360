// Next Greater Element

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

    stack<int>st;
    vector<int>ans(n);

    for(int i=n-1; i>=0; i--){
        while( !st.empty() && st.top()<=arr[i] ){
            st.pop();
        }
        if(st.empty()){
            ans[i] = -1 ;
        }
        else{
            ans[i] = st.top();
        }
        st.push(arr[i]);
    }

    cout << "Next greater element: ";
    for( int x: ans){
        cout << x << " ";
    }

    return 0;
}
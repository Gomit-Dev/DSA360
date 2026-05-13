// Two Sum

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

    int target;
    cin >> target;

    int left = 0;
    int right = n-1;

    while(left<right){
        if( arr[left]+arr[right] == target ){
            cout <<  arr[left] << " & " << arr[right]  <<  "having sum " << taerget <<endl;
            return 0;
        }
        else if(arr[right]>=target){
            right--;
        }
        else{
            left++;
        }
    }

    cout << "There is no pair having sum equals to " << target<< endl;

    return 0;
}
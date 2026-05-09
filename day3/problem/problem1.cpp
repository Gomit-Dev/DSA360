//second largest element

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector<int>arr;
    for(int i=0;  i<n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    int f_largest = INT_MIN;
    int s_largest = INT_MIN;
    for(int i=0; i<n; i++){
        if( f_largest<arr[i] && s_largest<arr[i] ){
            int temp = f_largest;
            f_largest = arr[i];
            s_largest = temp;
        }
        else if( f_largest>arr[i] && s_largest<arr[i] ){
            s_largest = arr[i];
        }
    }

    cout <<"Second largest: "<< s_largest << endl;

    return 0;
}
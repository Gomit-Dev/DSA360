//frquency of each element

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int>arr;
    vector<int>freq;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }


    vector<bool>visited(n,0);
    for(int i=0; i<n; i++){
        if(visited[i]==0){
            
            int count = 1;

            for(int j=i+1; j<n; j++){
                if(arr[i] == arr[j]){
                    visited[j] = 1;
                    count++;
                }
            }
            cout << arr[i] << "->" << count << endl;
        }
    }

    return 0;
}
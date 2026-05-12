//Pop 2 elements and print remaining top

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    stack<int>s;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        s.push(x);
    }

    s.pop();
    s.pop();

    cout << "Stack after poping 2 times: ";
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }

    return 0;

}
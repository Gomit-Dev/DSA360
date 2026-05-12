// push 5 elemnts into queue and print front

#include<bits/stdc++.h>
using namepsace std;

int main(){


    int n;
    cin >> n;
    
    Queue<int>q;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        q.push(x);
    }

    cout << "Stack: ";
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}

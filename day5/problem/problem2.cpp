// Valid Parentheses

#include<bits/stdc++.h>
using namespace std;

int main(){

   string s;
   cin >> s;
   
   int n = s.length();

   stack<char>st;
   for(int i=0; i<n; i++){
        
        if(s[i]=='('||s[i]=='['||s[i]=='{'){
           st.push(s[i]); 
        }        
        
        else{
            
            if(st.empty()){
                cout << "Is not Valid....." <<endl;   
                return 0;
            }
            else if( 
                (st.top() == '(' && s[i] == ')') || 
                (st.top() == '[' && s[i] == ']') || 
                (st.top() == '{' && s[i] == '}') 
            ){
                st.pop();
            }
            else{
                cout << "Is not Valid....." <<endl;
                return 0;
            }
        }
   }

   if(!st.empty()){
       cout << "Is not Valid....." <<endl;
   }
   else{
       cout << "Valid....." <<endl;
   }
    return 0;
}
#include<iostream>
#include<stack>
using namespace std;
bool balancedparenthesis(string s){
   stack<char> st;
   bool ans=true;
        for(int i=0;i<s.length();i++)
    {
        if(s[i]=='('|| s[i]=='{'||s[i]=='[' ){
            st.push(s[i]);

        }
        
        else if(s[i]==')')
                {
                    if(!st.empty() && st.top()=='(')
                        st.pop();
                    else
                        {ans=false;
                        break;}
                }
        else if(s[i]=='}')
                {
                    if(!st.empty() && st.top()=='{')
                        st.pop();
                    else
                        {ans=false;
                        break;}
                }
        else if( s[i]==']')
                {
                    if(!st.empty() && st.top()=='[')
                        st.pop();
                    else
                        {ans= false;
                        break;}
                }
                
    }
    if(!st.empty()){
        return false;
    }
    else{
        return ans;
    }    
        

    
    
}
int main()
{
    string b;
    cout<<"Enter the expression : ";
    getline(cin,b);
    if(balancedparenthesis(b))
        cout << "The brackets are balanced." << endl;
    else 
        cout << "The brackets are not balanced." << endl;
   
}
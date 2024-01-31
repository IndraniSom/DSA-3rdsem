#include<iostream>
#include<stack>
using namespace std;
int evaluate(string s){
    stack<int> st;
    int res;
    for(int i=0;i<s.length();i++){
        if((s[i]>='0' && s[i]<='9')){
            st.push(s[i]-'0');
        }
        else {
            int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();
            switch(s[i]){
                case '+':
                            
                            st.push(op1+op2);
                            break;
                case '-':
                           
                           st.push(op2-op1);
                            break; 
                case '*':
                           
                           st.push(op1*op2);
                            break; 
                case '/':
                           
                           st.push(op2/op1);
                            break; 
            }
        }
    }
    return st.top();
}
int main(){

    string sto;
    cout<<"Enter the expression: "<<endl;
    getline(cin,sto);
    cout<<"The result is: "<<evaluate(sto);
}
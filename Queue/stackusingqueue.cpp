#include<iostream>
#include<queue>
using namespace std;
class Stacks{
    public:
    int N;
    queue<int>q1;
    queue<int>q2;
    Stacks(int size){
        N=size;
    }
    void push(int val){
        q2.push(val);
        N++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        queue<int>temp;
        temp=q1;
        q1=q2;
        q2=temp;
    }
    void pop(){
        if(!q1.empty()){
            q1.pop();
            N--;
        }
    }
    int top(){
        return q1.front();
    }
};
int main(){
    int size;
    cout<<"Enter the size"<<endl;
    cin>>size;
    Stacks st(size);
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
}
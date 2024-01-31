#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
    Node(){
        this->data=data;
        Node* next=NULL;
    }
};
class stack
{
    public:
        
        Node *top=NULL;
    void push(int x){
        Node *temp=new Node();
        temp->data=x;
        temp->next=top;
        top=temp;
        
    }
    void pop(){
        Node *temp=new Node();
        temp=top;
        top=top->next;
        free(temp);
    }
    int toped(){
        
        return top->data;
    }
    void show(){
        Node *temp=new Node();
        temp=top;
        if(top==NULL){
            cout<<"Stack is empty"<<endl;
        }
        
       while(temp!=0){
        cout<<temp->data<<" ";
        temp=temp->next;
       }
    }
    
};
int main(){
    stack s;
    int n;
    while(1)
    {
        cout<<"\n The Menu of Operation"<<endl;
        cout<<"----------------------"<<endl;
        cout<<"1. Push an element into the Stack."<<endl;
        cout<<"2. Pop an element from the Stack."<<endl;
        cout<<"3. Display the Topmost Element of the Stack.\n";
        cout<<"4. Show all the elements in the Stack.\n";
        cout<<"5. Exit\n";
        cout<<"Enter Your choice: ";
        cin>>n;
        switch(n)
        {
            case 1:     
                    int k;
                    cout<<"Enter the element to insert: ";
                    cin>>k;
                    s.push(k);
                    break;
            case 2:
                    s.pop();
                    break;
            case 3:
                    cout<<"the topmost element is "<<s.toped()<<endl;
                    break;
            case 4:
                    s.show();
                    break;
            case 5:
                    exit(0);

        }
    }
}
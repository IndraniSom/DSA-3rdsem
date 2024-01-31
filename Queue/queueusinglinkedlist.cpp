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
class queue{
    public:
        Node* front=new Node();
        Node* rear=new Node();
        queue(){
            front=NULL;
            rear=NULL;
        }
   
    void enqueue(int x){
        Node* temp=new Node();
        if(front==NULL){
            front=temp;
            rear=temp;
            return ;
        }
        rear->next=temp;
        temp->data=x;
        temp->next=NULL;
        rear=temp;
        
    }
     void dequeue(){
         Node* temp=front;
         front=front->next;
         free(temp);
     }
    void display(){
        Node* temp=new Node();
        temp=front;
        if(front==NULL){
            cout<<"The stack is empty"<<endl;
        }
        while(temp!=NULL){
            cout<<temp->data<< " ";
            temp=temp->next;
        }
    }
    int peek(){
        return front->data;
    }
};
int main(){
    queue q;
    int n;
    
    while(1){
        cout<<"\nThe table of operation"<<endl;
        cout<<"-----------------------"<<endl;
        cout<<"1.Push an element in the Queue"<<endl;
        cout<<"2.Pop an element in the Queue"<<endl;
        cout<<"3.Peek an element from the Queue"<<endl;
        cout<<"4.Show the Queue"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>n;
        switch (n)
        {
        case 1:
            int data;
            cout<<"Enter the elemnet you want to insert"<<endl;
            cin>>data;
            q.enqueue(data);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            int p;
            p=q.peek();
            cout<<"The topmost element is "<<p<<endl;
            break;
        case 4:
            q.display();
            break;
        case 5:
            exit(0);
        
        }
    }
}

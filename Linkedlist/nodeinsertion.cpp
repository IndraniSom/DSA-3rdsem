#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node* next;
    node(int val){
        data=val;
        next=NULL;
        
    }
};
     void insertatbeginning(node* &head,int val){
        node* n=new node(val);
        n->next=head;
        head=n;
        
     }
    void insertatend(node* &head,int val){
        node* n=new node(val);
        if(head==NULL){
            head=n;
            return;
        }
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;

        }
        temp->next=n;
    }
    // void inseratmiddle(){

    // }
   
    void traverse(node* head){
        node* temp=head;
        while (temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
        
    }


int main()
{
    node* head=NULL;
    while(1)
    {
    cout<<"Table of Operation"<<endl;
    cout<<"--------------------"<<endl;
    cout<<"1.Push an element at the beginning"<<endl;
    cout<<"2.Push an element at the middle"<<endl;
    cout<<"3.Push an element at the end"<<endl;
    cout<<"4.Show the Linkedlist"<<endl;
    cout<<"5.Exit"<<endl;
    int p;
    cout<<"Enter your choice"<<endl;
    cin>>p;
    switch(p){
        case 1: 
            int da;
            cout<<"Enter the number you want to push in the list"<<endl;
            cin>>da;
            insertatbeginning(head,da);
            break;
        case 3:
            int d;
            cout<<"Enter the number you want to push in the list"<<endl;
            cin>>d;
            insertatend(head,d);
            break;
        case 4:
            traverse(head);
            break;
        case 5:
            exit(0);

    }
    }

}
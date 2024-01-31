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
class circularlinkedlist{
    public:
  void insertatbeginning(node* &head, int val) {
    node* n = new node(val);
    if (head == NULL) {
        // If the list is empty, make the new node the head and point its next to itself
        head = n;
        n->next = head;
    } else {
        // If the list is not empty, insert the new node at the beginning
        node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        n->next = head;
        temp->next = n;
        head = n;
    }
}

    void insertatend(node* &head,int val){
        node* n=new node(val);
        if(head==NULL){
            head = n;
        n->next = head;
        return;
        }
        node* temp=head;
        while(temp->next!=head){
            temp=temp->next;

        }
        temp->next=n;
        n->next=head;
    }
    // void inseratmiddle(){

    // }
   
    void traverse(node* head) {
    if (head == NULL) {
        cout << "NULL" << endl;
        return;
    }

    node* temp = head;
    do {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != head);

    cout << "NULL" << endl;
}



};
int main()
{
    node* head=NULL;
    circularlinkedlist cl;
    while(1)
    {
    cout<<"Table of Operation"<<endl;
    cout<<"--------------------"<<endl;
    cout<<"1.Push an element at the beginning"<<endl;
    cout<<"2.Delete an element at the beginning"<<endl;
    cout<<"3.Push an element at the end"<<endl;
    cout<<"4.Delete an element at the end"<<endl;
    cout<<"5.Show the Linkedlist"<<endl;
    cout<<"6.Exit"<<endl;
    int p;
    cout<<"Enter your choice"<<endl;
    cin>>p;
    switch(p){
        case 1: 
            int da;
            cout<<"Enter the number you want to push in the list"<<endl;
            cin>>da;
            cl.insertatbeginning(head,da);
            break;
        case 3:
            int d;
            cout<<"Enter the number you want to push in the list"<<endl;
            cin>>d;
            cl.insertatend(head,d);
            break;
        case 4:
            cl.traverse(head);
            break;
        case 5:
            exit(0);

    }
    }

}
#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int val){
            this->data=val;
            next=NULL;
        }
};
class linkedlist{
    public:
        
void deletionatbeg(Node* &head){
   
}
void deletionatend(Node* &head){

}
void deletionatmiddle(Node* &head,int pos ){

}
};
int main(){
    linkedlist ll; 
    int n;
    Node* head=NULL;
    while(1){
        cout<<"The table of operation"<<endl;
        cout<<"-----------------------"<<endl;
        cout<<"1.Delete from beginning"<<endl;
        cout<<"2.Delete at end"<<endl;
        cout<<"3.Delete at middle"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>n;
        switch(n){
            case 1:
                    ll.deletionatbeg(head);
                    break;
            case 2: 
                    ll.deletionatend(head);
                    break;
            case 3:
                   cout<<"Enter the position: "<<endl;
                    ll.deletionatmiddle(head,pos);
                    break;
        }
    }
}
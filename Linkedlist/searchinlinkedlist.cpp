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
bool search(node* head){
    int key;
    cout<<"Enter the element to be searched : ";
    cin>>key;
    node* temp=head;
    while(temp!=NULL) {
        if(temp->data==key){
            return true;
            
        }
       
        temp=temp->next;
    }
    return false;
}
int main()
{
    node* head=NULL;
    insertatbeginning(head,3);
    insertatbeginning(head,4);
    if(search(head)==1)
    {
        cout<<"Element is present in the list"<<endl;
    }
    else{
        cout<<"Element is not in the list"<<endl;
    }
}
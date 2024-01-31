#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *lptr;
        Node *rptr;
    Node(int data){
        this->data=data;
        lptr=NULL;
        rptr=NULL;

    }
};
class BST{
    public:
    Node *root;
    BST(){
        root=NULL;
    }
    
    void insert(int data){
        Node *ne=new Node(data);
        if(root==NULL){
            root=ne;

        }
        Node *temp=root;
        if(temp->data==data){
            return ;
        }
        else if(temp->data>data){
            if(temp->lptr==NULL){
                temp->lptr=ne;
            }
            else{
                temp=temp->lptr;
            }
        }
        else if(temp->data<data){
            if(temp->rptr==NULL){
                temp->rptr=ne;
            }
            else{
                temp=temp->rptr;
            }
        }
    }
    void displayinorder(Node *root){
        if(!root) return;
         displayinorder(root->lptr);
        cout<<root->data<<" ";
        displayinorder(root->rptr);
    }
    void displaypostorder(Node *root){
        if(!root) return;
        displaypostorder(root->lptr);
        cout<<root->data<<" ";
        displaypostorder(root->rptr);
    }
    void displaypreorder(Node *root){
        if(!root) return;
        cout<<root->data<<" ";
        displaypreorder(root->lptr);
        displaypreorder(root->rptr);
    }
};
int main()
{
    BST b;
    Node* root=NULL;
    while(1){
        cout<<"The table of operation"<<endl
        <<"----------------------"<<endl
        <<"1.DisplayInOrder"<<endl
        <<"2.DisplayPostOrder"<<endl
        <<"3.DisplayPreorder"<<endl
        <<"4.Insert"<<endl
        <<"5.Delete"<<endl
        <<"6.Exit"<<endl;
        
    int ch;
    cout<<"Enter your choice"<<endl;
    cin>>ch;
    switch(ch){
        case 1:
                b.displayinorder(root);
                break;

        case 2:
                b.displaypostorder(root);
                break;
        case 3:
                b.displaypreorder(root);
                break;
        case 4:
                int d;
                cout<<"Enter the data"<<endl;
                cin>>d;
                b.insert(d);
                break;
        
        
        case 6:exit(0);

    }
    
    }
}
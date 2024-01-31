#include<iostream>
using namespace std;
class queue{
    public:
        int front=-1;
        int rear=-1;
   bool isfull(int size){
        if(rear==size-1){
            return true;
        }
        else{
            return false;
        }
    }
    bool isempty(){
        if(front==-1 || front>rear){
            return true;
        }
        else {
            return false;
        }
    }
    void enqueue(int* arr,int size,int data){
        if(!isfull(size)){
            rear++;
            arr[rear]=data;
        }
        if(front==-1){
            front++;
        }
        else {
            cout<<"Queue is full can't insert any more elements"<<endl;
        }
    }
    void dequeue(int* arr,int size){
        if(!isempty()){
            front++;
        }
    }
    void display(int* arr,int size){
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
    }
    int peek(int* arr,int size){
        if(!isempty()){
            return arr[front];

        }
        else{
            cout<<"No elements present "<<endl;
            return -1;

        }
        
    }
};
int main(){
    queue q;
    int size,n;
    cout<<"The size of the queue is: "<<endl;
    cin>>size;
    int arr[size];
    
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
            q.enqueue(arr,size,data);
            break;
        case 2:
            q.dequeue(arr,size);
            break;
        case 3:
            int p;
            p=q.peek(arr,size);
            cout<<"The topmost element is "<<p<<endl;
            break;
        case 4:
            q.display(arr,size);
            break;
        case 5:
            exit(0);
        
        }
    }
}
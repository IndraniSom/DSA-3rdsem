#include<iostream>
using namespace std;
class stack
{
    public:
        int top=-1;
    
    void push(int* arr,int x,int size){
        if(top==size){
            cout<<"Stack Overflow\n";
            
            
            
        }
        else{
            top=top+1;
            arr[top]=x;
        }
    }
    void pop(int* arr){
        if(top==-1){
            cout<<"The stack is empty"<<endl;
            
        }
        else{
            arr[top--];
            cout<<"The element has been deleted successfully"<<endl;
        }
    }
    void toped(int* arr){
        if(top!=-1)
            cout<<"The top element is : "<<arr[top]<<endl;
        else
            cout<<"The stack is empty"<<endl;
    }
    void show(int* arr,int size){
        cout<<"The Stack elements are: "<<endl;
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<" ";
        }
    }
    
};
int main(){
    stack s;
    int size,n;
    cout<<"Enter the size of the stack: ";
    cin>>size;
    int arr[size];
    
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
                    s.push(arr,k,size);
                    break;
            case 2:
                    s.pop(arr);
                    break;
            case 3:
                    s.toped(arr);
                    break;
            case 4:
                    s.show(arr,size);
                    break;
            case 5:
                    exit(0);

        }
    }
}
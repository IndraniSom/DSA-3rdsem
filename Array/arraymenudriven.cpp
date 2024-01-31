#include<iostream>
#define maxsize 50
using namespace std;
void update(int* arr,int n,int x,int k){
    arr[k]=x;
}
void insert(int* arr,int size,int x,int pos){
    if(pos>=0 || pos<size){
        cout<<"Invalid Position"<<endl;
    }
    else if(size>maxsize){
        cout<<"Insertion not possible"<<endl;
    }
    else
    {
        for(int i=size-1;i>=pos-1;i--){
            arr[i] = arr[i-1];
        }
    arr[pos - 1] = x;
    size++;
    }
}
void remove (int* arr,int size,int pos){
     if(pos>=0 || pos<size){
        cout<<"Invalid Position"<<endl;
    }
    for(int i=pos-1;i<=size-1;i++){
        arr[i]=arr[i+1];
    }
    size--;
}
void display(int* arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void search(int* arr,int n,int key){
    
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"The search element is found "<<i<<" position"<<endl;

        }
        else{
            cout<<"The search element is not found "<<endl;
        }
    }

}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[maxsize]={0};
    while(1){
        cout<<"\n1.Update"<<endl<<
        "2.Insert"<<endl<<
        "3.Search"<<endl<<
        "4.Remove"<<endl<<
        "5.Display"<<endl<<
        "6.Exit"<<endl;
        int n;
        cout<<"Enter your choice"<<endl;
        cin>>n;
        switch(n){
            case 1:
                    int key,pos;
                     cout<<"Enter the element you want to insert"<<endl;
                     cin>>key;
                     cout<<"Enter the position: "<<endl;
                     cin>>pos;
                     insert(arr,n,key,pos);
                     break;
            case 2:
                    int k,p;
                     cout<<"Enter the element you want to insert"<<endl;
                     cin>>k;
                     cout<<"Enter the position: "<<endl;
                     cin>>p;
                     update(arr,n,k,p);
                     break;
            case 3:
                    int d;
                    cout<<"Enter the search element: "<<endl;
                    cin>>d;
                    search(arr,n,d);
                    break;
            case 4:
                    int po;
                    cout<<"Enter the position from where you want to delete the data: "<<endl;
                    cin>>po;
                    remove(arr,n,po);
                    break;
            case 5:
                    cout<<"The array elements are: "<<endl;
                    display(arr,n);
                    break;
            case 6:
                    exit(0);
        }

    }
}
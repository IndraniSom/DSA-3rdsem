#include<iostream>
using namespace std;
void linearsearch(int* arr,int n,int x){
    int j,flag=0;
    for(j=0;j<n;j++){
        if(arr[j]==x)
        {
            flag=1;
            break;
        }
        
    }
    if(flag==1)
    cout<<"Search element is found on: "<<j+1<<" position"<<endl;
    else
    cout<<"Search element is not found"<<endl;
}
int main() {
    int n,x;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the arrray elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to search: "<<endl;
    cin>>x;
    linearsearch(arr,n,x);
}
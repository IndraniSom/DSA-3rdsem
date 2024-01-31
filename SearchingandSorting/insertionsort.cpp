#include<iostream>
using namespace std;
void insertionsort(int* arr,int n){
   
    int i;
    
        for(i=1;i<n;i++)
    {
        int counter=0;
        int j=i-1;
        if(arr[i]>arr[j]  && j>=0){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
        counter++;   
    }
    
    
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionsort(arr,n);
    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
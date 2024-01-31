#include<iostream>
using namespace std;
void bubblesort(int* arr,int n){
    int counter=1;
    int i,j;
    while(counter<n)
    {
        for(i=0;i<n-counter;i++)
    {
        
            if(arr[i]>arr[i+1]){
                int temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp ;
            }
        
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
    bubblesort(arr,n);
    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
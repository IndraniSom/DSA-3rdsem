#include<iostream>
using namespace std;
void selectionsort(int* arr,int n){
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp ;
            }
        }
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
    selectionsort(arr,n);
    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
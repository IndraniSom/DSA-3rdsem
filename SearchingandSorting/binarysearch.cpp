#include<bits/stdc++.h>
using namespace std;
int binarysearch(int* arr,int n){
    sort(arr,arr+n);
    int k,flag=0;
    cout<<"Enter the element to search: "<<endl;
    cin>>k;
    int left=0,right=n-1;
    
    while(left<=right){
       int mid=left+((right-left)/2);
        if(arr[mid]==k)
        {
           return mid;
           
        }
        else if(arr[mid]>k)
        {
            right=mid-1;

        }
        else if(arr[mid]<k)
        {
            left=mid+1;
        }
        
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of an array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int index=binarysearch(arr,n);
    if(index==-1)
    {
        cout<<"The search element is not found";
    }
    else{
        cout<<"The search element is found ";
        
    }
}
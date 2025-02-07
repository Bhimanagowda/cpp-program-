#include<iostream>
using namespace std;

int linearsearch(int arr[],int size,int key)
  {
    for(int i=0;i<size;i++)
      {
        if(arr[i]==key)
          {
            return i;
          }
      }
    return -1;
  }

int binarysearch(int arr[],int size,int key)
  {
    int left=0,right=size-1;
    while (left<=right)
      {
        int mid=left+(right-left)/2;
        if(arr[mid]==key)
          {
            return mid;
          }
        if(arr[mid]<key)
          {
            left=mid+1;
          }
        else
          {
            right=mid-1;
          }
      }
    return -1;
  }
int main()
  {
    int arr[]={43,53,73,24,63,34,66};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key,key2;
    cout<<"****************Linear Search*****************"<<endl;
    cout<<"Enter the key : "<<endl;
    cin>>key;
    
    int result=linearsearch(arr,size,key);

    if(result!=-1)
      {
        cout<<"Element found at index : "<<result<<" (position : "<<result+1<<")"<<endl;
      }
    else
      {
        cout<<"Element not found"<<endl;
      }
    
    cout<<"****************Binary Search*****************"<<endl;
    cout<<"Enter the key : "<<endl;
    cin>>key2;

    int result1=binarysearch(arr,size,key);

    if(result1!=-1)
      {
        cout<<"Element found at index : "<<result1<<" (position : "<<result1+1<<")"<<endl;
      }
    else
      {
        cout<<"Element not found"<<endl;
      }

    return 0;
  }
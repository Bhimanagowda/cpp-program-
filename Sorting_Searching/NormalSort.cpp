#include<iostream>
using namespace std;
void sort(int a[],int size)
  {
    int temp;
    for(int i=0;i<size;i++)
      {
        for(int j=i+1;j<size;j++)
          {
            if(a[j]<a[i])
              {
                // temp=a[i];
                // a[i]=a[j];
                // a[j]=temp;
                swap(a[j],a[i]);
              }
          }
      }
    
  }
void printarr(int arr[],int size)
  {
    for(int i=0;i<size;i++)
      {
        cout<<arr[i]<<" ";
      }
    cout<<"\n";
  }
int main()
  {
    // int a[]={45,24,63,01,23,63,99,15};
    // int size=sizeof(a)/sizeof(a[0]);
    
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    size=sizeof(arr)/sizeof(arr);
    cout<<"Enter the number to array :"<<endl;
    for(int i=0;i<size;i++)
      {
        cin>>arr[i];
      }
    sort(arr,size);
    printarr(arr,size);
    return 0;
  }
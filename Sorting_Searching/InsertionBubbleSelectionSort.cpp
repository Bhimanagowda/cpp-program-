#include<iostream>
using namespace std;
void bubblesort(int arr[],int size)
  {
    for(int i=0;i<size-1;i++)
      {
        for(int j=0;j<size-i-1;j++)
          {
            if(arr[j]>arr[j+1])
              {
                swap(arr[j],arr[j+1]);
              }
          }
      }
  }
void selectionsort(int arr[],int size)
  {
    for(int i=0;i<size-1;i++)
      {
        int minIndex=i;
        for(int j=i+1;j<size;j++)
          {
            if(arr[j]<arr[minIndex])
              {
                minIndex=j;
              }
          }
          swap(arr[i],arr[minIndex]);
      }
  }
void insertsort(int arr[],int size)
  {
    for(int i=1;i<=size;i++)
      {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && key<arr[j])
          {
            arr[j+1]=arr[j];
            j--;
          }
        arr[j+1]=key;
      }
  }
void printarr(int arr[],int size)
  {
    cout<<"Unorder sorting elements : "<<endl;
    for(int i=0;i<size;i++) 
      {
        cout<<arr[i]<<" ";
      }
    cout<<"\n";
  }
void printarr1(int arr[],int size)
  {
    cout<<"Order sorting elements : "<<endl;
    for(int i=0;i<size;i++) 
      {
        cout<<arr[i]<<" ";
      }
    cout<<"\n";
  }
int main()
  {
    cout<<endl<<"***********Bubble Sort***********"<<endl;
    int a[]={40,50,70,30,10,60,20};
    int size=sizeof(a)/sizeof(a[0]);
    printarr(a,size);
    bubblesort(a,size);
    printarr1(a,size);

    cout<<endl<<"***********Selection Sort***********"<<endl;
    int arr[]={3,5,7,6,3,6,1};
    int size1=sizeof(arr)/sizeof(arr[0]);
    printarr(arr,size1);
    selectionsort(arr,size1);
    printarr1(arr,size1);

    cout<<endl<<"***********Insertion Sort***********"<<endl;
    int array[]={430,520,670,360,830,660,210};
    int size2=sizeof(array)/sizeof(array[0]);
    printarr(array,size2);
    insertsort(array,size2);
    printarr1(array,size2);
    return 0;
  }
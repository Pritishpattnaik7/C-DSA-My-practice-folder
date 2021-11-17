#include <iostream>
using namespace std;

int bsearch(int arr[] , int beg , int end , int data)            //iterative fun()
{
    int mid;
    while (beg <= end)
    {
       mid = (beg + end)/2;

       if (arr[mid] == data)
         return mid;
       if (arr[mid] < data)
         beg = mid + 1;
       else 
         end = mid - 1;  
    }
    return -1;
}

int rbsearch(int arr[] , int beg , int end , int data)             //recursive fun()
{
    int mid;
    if (beg<=end)
    {
      mid = (beg+end)/2;
      if (arr[mid] == data)
        return mid;
      if (arr[mid] < data)
        return rbsearch(arr , mid + 1 , end , data);
      else 
        return rbsearch(arr , beg , mid - 1 , data);
    }
    return -1;
}

int main()
{
    int a[50];
    int num,size;
    cout<<"enter the size of the array : ";
    cin>>size;
    cout<<"enter the elements in the array : \n";
        for (int i=0 ; i<size ; i++)
        {
            cout << "Array element: " << i << " = ";
            cin >> a[i];
        }
        cout<<"your entered array is : \n";
        for (int i=0 ; i<size ; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    cout<<"enter the number u want to search : ";
    cin>>num;
    int res = rbsearch(a , 0 , size-1 ,num);                   //function call...
    if (res == -1)
    cout<<"element not found!!!";
    else 
    cout<<"element found at index : "<<" "<<res;
    return 0;
}
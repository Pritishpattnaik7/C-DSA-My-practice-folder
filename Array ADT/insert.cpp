#include <iostream>
using namespace std;

int main()
{
    int arr[50];
    int size,num,pos;
    cout<<"enter the size of the array(max 50) : ";
    cin>>size;
    if(size>50)
      cout<<"overflow condition!!!";
    else
    {
        cout<<"enter the elements in the array : \n";
        for (int i=0 ; i<size ; i++)
        {
            cout << "Array element: " << i << " = ";
            cin >> arr[i];
        }
        cout<<"your entered array is : \n";
        for (int i=0 ; i<size ; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    cout<<"enter the number u want to insert : ";
    cin>>num;
    cout<<"enter the position : ";
    cin>>pos;
      if (pos<=0 || pos>size+1)
       cout<<"Invalid Position!!!";
      else
      {
        for (int i=size-1 ; i>=pos-1 ; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[pos-1] = num;
        size++;
         cout<<"your final array is : \n";
        for (int i=0 ; i<size ; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;    
      }
    }
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int arr[50];
    int size,pos;
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
        
      cout<<"enter the position from where u want to delete the data : ";
      cin>>pos;
       if (pos<=0 || pos>size)
         cout<<"invalid position!!!";
       else
       {
         for (int i=pos-1 ; i<=size-1 ; i++)
         {
             arr[i] = arr[i+1];
         }
         size--;

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
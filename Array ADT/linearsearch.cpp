#include <iostream>
using namespace std;

int main()
{
    int arr[50];
    int size,ele;
    int flag=0;
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

      cout<<"enter the element u want to search : ";
      cin>>ele;
      for (int i=0 ; i<size ; i++)  
      {
          if(arr[i] == ele)
          {
              cout<<"element found at index :  "<<i;
              flag = 1;
              break;
          }

      }
      if (flag == 0)
      cout<<"element not found!!!";

    }
return 0;
}        
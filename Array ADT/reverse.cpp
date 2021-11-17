#include <iostream>
using namespace std;

int main()
{
    int arr[50];
    int size;
    cout<<"enter the size of the array(max 50) : ";
    cin>>size;
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

        for (int i=0,j=size-1 ; i<j ; i++,j--)
        {
           int temp;
           temp = arr[i];
           arr[i] = arr[j];
           arr[j] = temp;
        }
        cout<<"the reverse array is : \n";
        for (int i=0 ; i<size ; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    return 0;
}
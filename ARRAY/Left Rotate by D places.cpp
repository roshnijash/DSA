// ROTATING BY D PLACES

#include <iostream>
using namespace std;

void leftRotatebyOne(int arr[],int n)
{
    int temp=arr[0];
    int i;
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}

void leftRotateByDplaces(int arr[],int n,int d)
{
    
    for(int i=0;i<d;i++)
    {
        leftRotatebyOne(arr,n);
    }
}


int main() { 
    int n;
    cin>> n;
    int arr[n],d;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>d;
    cout << "Original array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    leftRotateByDplaces(arr,n , d);

    cout << "Array after " << d << " left rotations: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
cout << endl;
    return 0;
}

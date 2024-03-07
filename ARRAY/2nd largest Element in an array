
----------------------------------------------------------------------------------------------  BRUTE FORCE WOTH SORTING -------------------------------------------------------------------------------
#include <iostream>
using namespace std;
int main() {
int n;
cin>>n;

int arr[n],i,j;

//insert values into array
for(i=0;i<n;i++)
{
cin>>arr[i];
}

//perform BUBLE sorting in ascending order
for(i=0;i<n-1;i++)
{
    for(j=0;j<n-i-1;j++)
{
    // SWAP
    if(arr[j]>arr[j+1])
    {
       int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
    }
}    
}

//display array
for(i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}

cout<<"\nThe largest element in the array is "<<arr[n-1];



// THE 2ND LARGEST ELEMENT IS

int largest=arr[n-1];
int SecondLargest=-1;

for(i=n-2;i>=0;i--)
{
    if(arr[i]!=largest)
    {
    SecondLargest=arr[i];
    break;
// break for => the pervious one element which is smaller than largest
//{4, 5, 8, 9, 9}
    }
}

cout<<"\nThe 2nd largest element in the array is "<<SecondLargest;


    return 0;
}



-------------------------------------------------------------------------- BETTER APPROACH -------------------------------------------------------------------------------------

#include <iostream>
using namespace std;
int main() {
int n;
cin>>n;

int arr[n],i;

//insert values into array
for(i=0;i<n;i++)
{
cin>>arr[i];
}

//COMPARING ARR[0] WITH EACH ELEMENT
int largest=arr[0];

for(i=0;i<n;i++)
{
    if(arr[i]>largest)
    {
        largest=arr[i];
        
    }
}
//display array
for(i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}


// THE LARGEST ELEMENT IS 

cout<<"\nThe largest element in the array is "<<largest;


int Secondlargest =-1;

for(i=0;i<n;i++){
    if(arr[i]>Secondlargest && largest>arr[i]){
    Secondlargest=arr[i];
    }
}

cout<<"\nThe 2nd largest element in the array is "<<Secondlargest;


    return 0;
}

TIME COMPLEXITY O(2n)


-----------------------------------------------------------------------------------------------------------OPTIMAL APPROACH----------------------------------------------
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;

int arr[n],i;

//insert values into array
for(i=0;i<n;i++)
{
cin>>arr[i];
}

//display array
for(i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}

int large=arr[0], Secondlarge=-1;


for(i=0;i<n;i++)
{
    if(arr[i]>large)
    {
        Secondlarge=large;
        large=arr[i];
    }
    else if(arr[i]<large && arr[i]>Secondlarge)
    {
        Secondlarge=arr[i];
    }
}



cout<<"\nThe largest element in the array is "<<large;
cout<<"\nThe 2ND largest element in the array is "<<Secondlarge;



    return 0;
}



TIME COMPLEXITY ----> O(n)

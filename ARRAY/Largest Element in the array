--------------------------------------------------------------------------------BRUTE FORCE BY SORTING -----------------------------------------------------------------------

// LARGEST
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


// THE LARGEST ELEMENT IS 

cout<<"\nThe largest element in the array is "<<arr[n-1];

    return 0;
}

TIME COMPLEXITY O(nlogn)

---------------------------------------------------------------------------------------OPTIMAL APPROACH----------------------------------------------------------------

// BRUTE FORCE BY SORTING 
// LARGEST
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

    return 0;
}


TIME COMPLEXITY O(n)


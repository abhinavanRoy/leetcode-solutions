#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int arr[30]; // array of size 30 declared

    cout<<"Enter the size of array:";  // input size from user
    cin>>n;

    cout<<"Enter the array elements:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];      // input array elements from user

    }

    int  max = arr[0];  // setting max with the 0th element of the array
    int min = arr[0];   // // setting min with the 0th element of the array


    for(i=0;i<n;i++)   // finding the maximum and minimum elements
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }

        if(arr[i] <min )
        {

            min = arr[i];
        }
    }


     // displaying the result

     cout<<"The maximum and minimum element among ";
     for(i=0;i<n;i++)
     {

         cout<<arr[i]<<" ";
     }

     cout<<" are "<<max<<" and "<<min<<" respectively";
     return 0;
}


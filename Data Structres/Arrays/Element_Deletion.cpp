#include<iostream>
using namespace std;

int main()
{
    int n,i;
    int arr[30]; // array of size declared

    cout<<"Enter the array size:";
    cin>>n;

    cout<<"Enter the array elements:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

     int val;
     cout<<"Enter the array element to be deleted:";
     cin>>val;

    cout<<"The array before deletion is:";
    for(i=0;i<n;i++)
    {

        cout<<arr[i]<<" ";

    }

    int pos,j;

     // search val in array
     for(i=0;i<n;i++)
     {
         if(arr[i] == val)
         {
              pos = i;  // setting pos with position of val
              break;
         }
     }


         if(i<n)
         {
             n= n-1;

             for(j=pos;j<n;j++)   // shifting the array elements one space ahead
             {

                 arr[j] = arr[j+1];

             }
         }

         cout<<"The modified array is:";
         for(i=0;i<n;i++)    // displaying the result
         {

             cout<<arr[i]<<" ";
         }
         return 0;


}

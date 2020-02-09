#include<iostream>
using namespace std;

int main()
{

     int n,i;
     int arr[30]; // Array of size 30 declared

     cout<<"Enter the size of the array:"; //taking input size from user
     cin>>n;


     cout<<"Enter the elements of the array:";
     for(i=0;i<n;i++)
     {
         cin>>arr[i];        //user gives the arrays elements

     }

     cout<<"The elements of the array are:";

     for(i=0;i<n;i++)
     {

        cout<<arr[i]<<" ";     // displaying the array elements

     }

     return 0;

}

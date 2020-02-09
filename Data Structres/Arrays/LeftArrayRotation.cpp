#include<iostream>
using namespace std;

int main()
{

     int num_rotations,n,i,j,m,first;
     int arr[30];

     cout<<"Enter the array size:";
     cin>>n;

     cout<<"Enter the array elements:";

     for(i=0;i<n;i++)
     {

         cin>>arr[i];
     }

     cout<<"Enter number of left rotations:";
     cin>>num_rotations;


    for(i=0;i<num_rotations;i++)  // iterating till total number of rotations
     {

        first = arr[0];     //setting first to the first element of in array

        for(j=0;j<n-1;j++)
        {

            arr[j] = arr[j+1];    // sifting array by one space to the left
        }

        arr[j] = first;       // setting the last element of the array with the first element of array before rotation

     cout<<"Array elements after "<<i+1<<" rotation is:"<<endl;   // displaying the array

     for(m=0;m<n;m++)
     {
         cout<<arr[m]<<" ";
     }
     cout<<endl;

     }

     return 0;

}

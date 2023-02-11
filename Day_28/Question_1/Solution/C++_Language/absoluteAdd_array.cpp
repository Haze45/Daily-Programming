#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element of array : "<<endl; 
        cin>>arr[i];
          
    }
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
    {
        sum=sum+arr[i];
    }
    cout<<"Sum of elements : "<<sum;
}
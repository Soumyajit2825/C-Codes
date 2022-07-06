#include <iostream>
using namespace std;
int binary_ser(int arr[],int n,int key)
{
    int s=0;
    int e=n;

    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return -1;
}
int main()
{
    int n,i;
    cout<<"Enter the array size:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     int key;
    cout<<"Enter the element to be searched:"<<endl;
    cin>>key;
    cout<<"Found at pos: "<<binary_ser(arr,n,key)<<endl;
    return 0;
}
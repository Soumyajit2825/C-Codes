#include <iostream>
using namespace std;
int linear_ser(int arr[],int n,int key)
{
    for(int i=0;i<=n;i++)
    {
        if(arr[i]==key)
        {
            return i;
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
    cout<<"Found at pos: "<<linear_ser(arr,n,key)<<endl;
    return 0;
}
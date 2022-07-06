#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array:\n";
    cin >> n;
    int i;
    int arr[n+1];
    arr [n]=-1;
    cout << "Enter the elements of the array:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n == 0)
    {
        cout << "1" << endl;
        return 0;
    }

    int ans = 0, mx = -1;

    for (i = 0; i < n; i++)
    {
        if (arr[i] > mx && arr[i] > arr[i + 1])
        {
            ans++;
        }
        mx = max(mx, arr[i]);
    }

    cout <<"Number of record breaking elemets are:\n"<< ans << endl;

    return 0;
}
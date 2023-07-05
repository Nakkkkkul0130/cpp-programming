#include <iostream>
using namespace std;

int main()
{
    int arr[100][100];
    int m, n;
    cout<<"enter number of rows: ";
    cin>>m;
    cout<<"enter number of column: ";
    cin>>n;

    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<"value at "<<i <<"th and "<<j<< "th position is: "<<arr[i][j]<<endl;
        }
        cout<<endl;
    }
    return 0;


}
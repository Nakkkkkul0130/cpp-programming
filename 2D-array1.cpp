#include <iostream>
using namespace std;

void printarray(int arr[][3],int m,int n)
{
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int arr[][3]={{3,5,6},
                  {0,1,9},
                  {3,5,7}
                  };
    printarray(arr,3,3);
    return 0;
}
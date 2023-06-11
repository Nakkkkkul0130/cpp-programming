# include <iostream>
using namespace std;
int main()
{
    // pattern 1
    /*
        a
        b b
        c c c
        d d d d
        e e e e e
    */
   char ch = 'a';
   for (int i=1;i<=5;i++)
   {
        for (int j=1;j<=i;j++)
        {
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
   }
}
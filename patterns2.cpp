#include <iostream>
using namespace std;
int main()
{
    // pattern 1
    /*
      1 2 3 4 5
      1 2 3 4
      1 2 3
      1 2
      1
    */
    // code for pattern 1
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 6 - i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // pattern 2
    /*
        1
        0 1
        1 0 1                     // use index number to solve this
        0 1 0 1
        1 0 1 0 1
    */
    // code for pattern 2

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if ((i + j) % 2 == 0)
    //         {
    //             cout << "1 ";
    //         }
    //         else
    //         {
    //             cout << "0 ";
    //         }
    //     }
    //     cout << endl;
    // }

    // pattern 3
    /*
            * * * * *
          * * * * *
        * * * * *
      * * * * *
    * * * * *
     */
    // code for pattern 3
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5 - i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // pattern 4
    /*
              1
            1   2
          1   2   3
        1   2   3   4
      1   2   3   4   5
    */
    // code for pattern 4
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5 - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

      // pattern 5
    /*
                   1
                 2 1 2
               3 2 1 2 3
             4 3 2 1 2 3 4
           5 4 3 2 1 2 3 4 5
    */
     // code for pattern 5

  // for (int i=1;i<=5;i++)
  // {
  //   int j;
  //   for (j=1;j<=5-i;j++)
  //   {
  //       cout<<" ";
  //   }
  //   int k = i;
  //   for (;j<=5;j++)
  //   {
  //       cout<<k--<<endl;
  //   }
  //   k = 2;
  //   for (;5+i-1;j++)
  //   {
  //       cout<<k++<<endl;
  //   }
  //   cout<<endl;
  // }

  // pattern 6
  /*
      1
      2 2
      3 3 3
      4 4 4 4
      5 5 5 5 5
  */
    // code for pattern 6

    // for (int i=1;i<=5;i++)
    // {
    //   for (int j=1;j<=i;j++)
    //   {
    //     cout<<i<<" ";
    //   }
    //   cout<<endl;
    // }

    // patterns 7

    /*
        1 1 1 1 1
        2 2 2 2
        3 3 3 
        4 4
        5
    */

   // code for pattern 7

  //  for (int i=5;i>=1;i--)
  //  {
  //     for (int j=1;j<=i;j++)
  //     {
  //       cout<<(5-i+1)<<" ";
  //     }
  //     cout<<endl;
  //  }

  // pattern 8
  /*
          1
        2 2
      3 3 3
    4 4 4 4
  5 5 5 5 5
  */

 // code for pattern 8

    // for (int i=1;i<=5;i++)
    // {
    //   for (int j=1;j<=5-i;j++)
    //   {
    //     cout<<"  ";
    //   }
    //   for (int j=5-i;j<5;j++)
    //   {
    //     cout<<i<<" ";
    //   }
    //   cout<<endl;
    // }

    // pattern 9
    /*
       1 1 1 1 1
         2 2 2 2
           3 3 3
             4 4 
               5
    */
    // for (int i=5;i>=1;i--)
    // {
    //   for (int j=5-i;j>0;j--)
    //   {
    //     cout<<"  ";
    //   }
    //   for (int j=1;j<=i;j++)
    //   {
    //     cout<<(5-i+1)<<" ";
    //   }
    //   cout<<endl;
    // }

    // pattern 10
    /*
       1
       1 2
       1 2 3
       1 2 3 4
       1 2 3 4 5
    */
    // code for pattern 10

    for (int i=1;i<=5;i++)
    {
      for (int j=1;j<=i;j++)
      {
        cout<<j<<" ";
      }
      cout<<endl;
    }
}
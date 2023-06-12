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

    // pattern 2
    /*
        a
        a b
        a b c
        a b c d
        a b c d e
    */ 
    for (int i=1;i<=5;i++)
    {
        char ch = 'a';
        for (int j=1;j<=i;j++)
        {
            cout<<ch++<<" ";
        }
        cout<<endl;
    }

   // pattern 3
   /*
        a
        b c 
        d e f
        g h i j 
        k l m n o
   */
  // code for pattern 3
    char ch = 'a';
    for (int i=1;i<=5;i++)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<ch++<<" ";
        }
        cout<<endl;
    }

    // pattern 4
    /*
        A A A A A
        B B B B
        C C C
        D D
        E
    */
   // code for pattern 4
    char ch = 'A';
    for (int i=5;i>=1;i--)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }

    // pattern 5
    /*
        E D C B A
        E D C B
        E D C
        E D
        E
    */
       // code for pattern 5

    for (int i=5;i>=1;i--)
    {
        char ch = 'E';
        for (int j=1;j<=i;j++)
        {
            cout<<ch--<<" ";
        }
        cout<<endl;
    }

    // pattern 6
    /*
        A B C D E
        A B C D
        A B C 
        A B
        A
    */
        // code for pattern 6

    for (int i=5;i>=1;i--)
    {
        char ch = 'A';
        for (int j=1;j<=i;j++)
        {
            cout<<ch++<<" ";
        }
        cout<<endl;
    }

}
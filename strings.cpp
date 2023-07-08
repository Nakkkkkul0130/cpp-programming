#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string s = "abc";   // statically
    cout<<s<<endl;

    string s2;          // another method for statically 
    s2 = "def";
    cout<<s2<<endl;

    string *sp = new string;    // dynamically 
    *sp = "nakul";
    cout<<sp<<endl;             // it will print address
    cout<<*sp<<endl;            // it will print value

   // if we have to store multiple string we have to use vector string
    vector<string> v;
    v.push_back(s);              // for pushing one element 
    v.push_back("hello");
    for (int i=0;i<=v.size();i++)    // for printing the whole content
    {
        cout<<v[i]<<endl;
        sort(v[i].begin(),v[i].end());
        cout<<v[i]<<endl;
    }

    string s4;
    getline(cin, s4);   // taking input in string
    cout<<s4<<endl;

    string s5 = s + s2;      // addition of two strings
    cout<<s5<<endl;
    return 0;
}
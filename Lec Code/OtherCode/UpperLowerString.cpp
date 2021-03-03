#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string str = "SnkjbbDYUvhjhklK";

    cout<<"Upper String : ";
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]-=32;
        }
    }
    cout<<str;

    cout<<"\nLower String : ";
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]+=32;
        }
    }
    cout<<str;


    //By Function
    cout<<endl;
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout<<str<<endl;

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout<<str;

}
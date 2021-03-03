#include<iostream>
using namespace std;

int main()
{
    string str, res=" ";
    getline(cin, str);

    int key;
    cin>>key;

    int key1=key-122;
    int len = str.size();
    for(int i=0; i<len; i++){
        if(str[i]==32){
            res[i] = 32;
        }
        else{
            if((str[i]+key)<123){
                str[i] = str[i]+key;
            }
            else{
               // str[i] = str[i]+key1;
                cout<<str[i]+key1<<" ";
            }
        }
    }
    cout<<str;
}

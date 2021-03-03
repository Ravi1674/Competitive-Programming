#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();

    char arr[n+1];

    cin.getline(arr, n);
    cin.ignore();

    int i=0;
    int currLen=0, maxLen=0;
    int start=0, maxStart=0;
    while (arr[i]!='\0')
    {
        if (arr[i]==' ')
        {
            if(currLen > maxLen){
                maxLen = currLen;
                maxStart = start;
                cout<<maxStart<<" ";
            }
            currLen=0;
            start=i+1;
        }
        else
        {
            currLen++;
        }
        
        i++;
        
    }
    cout<<maxLen<<endl;
    for (int i = 0; i < maxLen; i++)
    {
        cout<<arr[i+maxStart];
    }
    
    
}
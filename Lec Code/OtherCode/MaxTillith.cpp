#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" Element :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
        arr[i]=max;

    }
    cout<<"Max till ith element array : ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
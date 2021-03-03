#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
const int N = 1e5+2;
int main(){
    int n;
    cin>>n;
    int arr[n];
    //cout<<"Enter "<<n<<" Element :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int a[N];
    for(int i=0;i<n;i++){
        a[i]=0;
    }
    for(int i=0;i<n;i++){
        if(a[arr[i]]!=1)
            a[arr[i]]=1;
        else
            cout<<arr[i];
    }

}
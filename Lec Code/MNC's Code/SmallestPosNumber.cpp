#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+2;

void check(int arr[],int n){
    bool b[N];
    for (int i = 0; i < N; i++)
    {
        b[i]=false;
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>=0){
            b[arr[i]]=true;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(b[i]==true){
            cout<<i;
            break;
        }
        //cout<<b[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    //cout<<"Enter "<<n<<" Element :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    check(arr, n);
}

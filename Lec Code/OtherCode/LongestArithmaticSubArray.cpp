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
    int j=0,pd=arr[1]-arr[0],current=2,ans=2;
    while (j<n)
    {
        if(arr[j]-arr[j-1] == pd){
            current++;            
        }
        else{
            pd = arr[j]-arr[j-1];
            current=2;
        }
        ans = max(ans,current);
        j++;
    }
    
    cout<<"\nLength of lognest arithmatic subarray is : "<<ans;
}
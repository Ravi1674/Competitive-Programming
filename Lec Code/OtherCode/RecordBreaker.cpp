#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n+1];
    cout<<"Enter "<<n<<" Element :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    arr[n]=-1;
    if(n==1){
        cout<<"1";
        return 0;
    }
    int maximum,ans=0;
    maximum=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>maximum && arr[i]>arr[i+1]){
            ans++;
        }
        maximum = max(maximum,arr[i]);
    }

    cout<<"\nRecord Breaks : "<<ans<<" time";
}
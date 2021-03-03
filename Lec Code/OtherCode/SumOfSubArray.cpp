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
    int sum=0,sum1=0;
    cout<<"\nSum of subarray : \n";
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            sum1=sum1+sum;
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    cout<<"sum of all the subarray sum : "<<sum1;
}
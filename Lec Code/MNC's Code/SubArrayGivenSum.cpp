#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    //cout<<"Enter "<<n<<" Element :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int s;
    cin>>s;
    int i=0,j=0,start = -1,end = -1,sum=0;
    while(j<n && sum+arr[j]<=s){
        sum += arr[j];
        j++;
    }
    if(sum == s){
        cout<<i+1<<" "<<j;
        return 0;
    }
    while(j<n){
        sum = sum + arr[j];
        while (sum > s)
        {
            sum -= arr[i];
            i++;
        }
        if(sum == s){
            start = i++;
            end = j--;
            break;
        }
        j++;
    }
    cout<<start+1<<" "<<end+1;
    return 0;
}

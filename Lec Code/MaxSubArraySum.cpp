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
    int sum=0;
    int maxSum = INT_MIN;
    int currSum[n+1];
    currSum[0]=0;
    for(int i=1; i<=n; i++){
        currSum[i] = currSum[i-1]+arr[i-1];
    }
    for(int i=1; i<=n; i++){
        sum = 0;
        for(int j=0; j<i; j++){
            sum = currSum[i] - currSum[j];
            maxSum = max(sum, maxSum);
        }
    }
    /*for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++) 
        {
            sum += arr[j];
            maxSum = max(sum,maxSum);
        }
        sum = 0;
        //cout<<endl;        
    }*/
    cout<<maxSum;
    
}
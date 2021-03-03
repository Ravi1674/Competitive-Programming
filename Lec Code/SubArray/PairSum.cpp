#include<bits/stdc++.h>
using namespace std;

int pairsum(int arr[], int k, int n){
    int low, high;
    low = 0;
    high = n-1;
    sort(arr, arr+n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    while(low < high){
        if (arr[low] + arr[high] < k){
            low++;
        }
        else if (arr[low] + arr[high] > k)
        {
            high--;
        }
        else {
            cout<<low<<" "<<high;
            cout<<endl;
            return true;
        }
        
    }
    return false;
}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    //cout<<"Enter "<<n<<" Element :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<pairsum(arr, k, n);

}
       
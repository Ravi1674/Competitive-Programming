#include<bits/stdc++.h>
using namespace std;
int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr, arr+n);
        int ans = arr[n-1]-arr[0];
        int s=arr[0]+k;
        int b=arr[n-1]-k;

        if(s>b){
            swap(s, b);
        }

        for (int i = 1; i < n-1; i++)
        {
            int sub = arr[i]-k;
            int add = arr[i]+k;

            if (sub >=s || add<=b )
            {
                continue;
            }
            if(b-sub<=add-s){
                s = sub;
            }
            else{
                b = add;
            }
        }
        return min(ans, b-s);
        



        /*int maximum = INT_MIN;
        int minimum = INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i]-k<=0){
                arr[i]=arr[i]+k;
            }
            else{
                arr[i]=arr[i]-k;
            }
            //cout<<arr[i]<<" ";
        }
        for(int i=0;i<n;i++){
            maximum = max(maximum,arr[i]);
            minimum = min(minimum,arr[i]);
        }
        
        return (maximum-minimum);*/
    }
int main(){
    int n,k;
    cin>>k;
    cin>>n;
    int arr[n];
    //cout<<"Enter "<<n<<" Element :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<getMinDiff(arr,n,k);
}
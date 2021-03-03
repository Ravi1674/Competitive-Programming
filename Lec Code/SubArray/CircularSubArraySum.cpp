#include<iostream>
using namespace std;

int kadane(int arr[], int n) {
    int maximum=INT_MIN;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum = sum+arr[i];
        if(sum<0){
            sum = 0;
        }
        maximum = max(maximum, sum);
    }
    return maximum;
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
    int wrapSum;
    int nonwrapSum;

    nonwrapSum = kadane(arr, n);
    int sum =0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        arr[i]=-arr[i];
    }
    
    wrapSum = sum + kadane(arr, n);

    cout<<max(wrapSum, nonwrapSum);
}
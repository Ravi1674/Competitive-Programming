#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    //cout<<"Enter "<<n<<" Element :"<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }

    int row_start = 0;
    int row_end = m-1;
    int col_start = 0;
    int col_end = n-1;

    while (row_start<=row_end && col_start<=col_end)
    {
        for (int i = col_start; i <= col_end; i++)
        {
            cout<<arr[row_start][i]<<" ";
        }
        row_start++;

        for (int i = row_start; i <= row_end; i++)
        {
            cout<<arr[i][col_end]<<" ";
        }
        col_end--;
        for (int i = col_end; i <= col_start; i++)
        {
            cout<<arr[row_end][i]<<" ";
        }
        row_end--;
        for (int i = row_end; i <= row_start; i++)
        {
            cout<<arr[i][col_start]<<" ";
        }
        col_start++;
        
    }
    
    

}
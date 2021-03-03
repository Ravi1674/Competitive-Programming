#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int a[m][n];
    //cout<<"Enter "<<n<<" Element :"<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
    }
    int target;
    cin>>target;
    int flag = 0;
    int row = 0, col = n-1;
    while (row < m && col>=0)
    {
        if(a[row][col] == target){
            flag = 1;
        }
        if(a[row][col] < target){
            row++;
        }
        else{
            col--;
        }
    }
    if(flag==1){
        cout<<"Element Found";
    }
    else{
        cout<<"Element Not Found";
    }
    
}
#include<iostream>
#include<vector>
using namespace std;

void subset(vector<vector<int>> &v,vector<int> ans, int arr[],int n,int idx)
{
    if(idx>=n){
        v.push_back(ans);
        return;
    }
    subset(v,ans,arr,n,idx+1);
    ans.push_back(arr[idx]);
    subset(v,ans,arr,n,idx+1);
    

}
int main()
{
    vector<vector<int>> v;
    int n,arr[]={1,2,3};
    n=sizeof(arr)/sizeof(int);
    subset(v,{},arr,n,0);
    cout<<"{";
    for(int i=0;i<v.size();i++)
    {
        cout<<"{";
        for(int j=0;j<v[i].size();j++)
          cout<<v[i][j]<<",";

        cout<<"}, ";  
    }
    cout<<"}"<<endl;
    
}
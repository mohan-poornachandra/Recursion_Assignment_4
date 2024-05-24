#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void toBinary(int dec, vector<int>& arr)
{
    if(dec==1)
    {
        arr.push_back(1);
        return;
    }

    arr.push_back(dec%2);
    toBinary(dec/2,arr);

}
int main()
{
    int dec;
    vector<int> arr;
    cout<<"ENter a decimal no.: ";
    cin>>dec;
    toBinary(dec,arr);
    reverse(arr.begin(),arr.end());
    cout<<"Binary equivalent: "<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i];
    }

}
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

void subset(string str, int idx, string ans, vector<string>& Ans)
{
    
    if(idx>=str.size())
    {
        if(ans[0]==' '){
            ans.substr(1);
            return;
        } 

        Ans.push_back(ans);
        return;
    } 

    subset(str,idx+1,ans+str[idx],Ans);
    if(ans[ans.size()-1]!=str[idx])
      subset(str,idx+1,ans,Ans); 

}

int main()
{
    string str1,str2;
    cout<<"Enter string 1: ";
    getline(cin,str1);
    cout<<"Enter string 2: ";
    getline(cin,str2);
    
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());

    vector<string> ans1,ans2;
    subset(str1,0,"",ans1);
    subset(str2,0,"",ans2);


    sort(ans1.begin(),ans1.end());
    sort(ans2.begin(),ans2.end());

    string ans="";
    cout<<endl;
    for(int i=0;i<ans1.size();i++)
    {
        for(int j=0;j<ans2.size();j++)
        {
            if((ans1[i]==ans2[j])&&(ans1[i].size()>ans.size())){
               ans = ans1[i];
            }   
        }
    }
    cout<<ans<<endl;
}
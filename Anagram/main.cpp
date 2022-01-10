#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main() {
string myText;
ifstream MyReadFile("wordlist.txt");
map<vector<int>,vector<string>> mp;
while (getline (MyReadFile, myText)) {
        vector<int> v(256,0);
        for(int i=0;i<myText.length();i++){
                        if(myText[i]==13) continue;
                        if(myText[i]>='A'&&myText[i]<='Z') v[myText[i]+32]++;
                        else v[myText[i]]++;
        }
       mp[v].push_back(myText);
}
vector<string> ans;
int size=0;
for(auto i:mp){
        // for(int j=0;j<i.second.size();j++){
        //         cout<<i.second[j]<<" ";
        // }
        if(size<i.second.size()){
                ans=i.second;
                size=i.second.size();
        }
}
cout<<"Longest List of Anagrams is"<<endl;
for(auto i: ans) cout<<i<<" ";
cout<<"Size of List is"<<ans.size()<<endl;
MyReadFile.close();
}

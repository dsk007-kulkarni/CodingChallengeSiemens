#include <bits/stdc++.h>
#include <fstream>
using namespace std;
//1st approach
// int main() {
// string myText;
// ifstream MyReadFile("wordlist3.txt"); //read file object
// map<vector<int>,vector<string>> mp; 
// /*my logic is that i have created a map of vector of int of size 256 and that vector contains the count of leters for each word and vector of string 
// which contains those words who have same no. of characters*/
// while (getline (MyReadFile, myText)) { //Reading line by line in text file
//         vector<int> v(256,0);//vector of fix size 256 initialsed with 0
//         for(int i=0;i<myText.length();i++){
//                         if(myText[i]==13) continue; //it will continue when it strikes the character 13(CRLF)
//                         if(myText[i]>='A'&&myText[i]<='Z') v[myText[i]+32]++; //counting no. of that character
//                         else v[myText[i]]++;
//         }
//        mp[v].push_back(myText); //pushing that word in vector of simillar count letter
// }
// vector<string> ans;
// int size=0;
// for(auto i:mp){ //moving in map
//         // for(int j=0;j<i.second.size();j++){
//         //         cout<<i.second[j]<<" ";
//         // }
        // if(size<i.second.size()){ //finding largest size vector of anagrams
        //         ans=i.second;
        //         size=i.second.size();
        // }
// }
// cout<<"Longest List of Anagrams is"<<endl;
// for(auto i: ans) cout<<i<<endl;
// cout<<"Size of List is "<<ans.size()<<endl;
// MyReadFile.close();
// }
/*
TC:- O(n*n) where n=no. strings in the input
SC:- O(n)
*/

//2nd approach
int main(){
string myText;
ifstream MyReadFile("wordlist.txt"); //read file object
map<string,vector<string>> mp;
/*my logic is that i have created a map of string and vector of string which contains those words who have same no. of characters
1st i will sort the string and then check that does that key already present in map or otherwise add the that string to the existing keys vector
*/
while (getline (MyReadFile, myText)) { //Reading line by line in text file
        string s=myText;
        char c=tolower(s[0]);
        s[0]=c;
        sort(s.begin(),s.end());
        mp[s].push_back(myText);
}
vector<string> ans;
int size=0;
for(auto i:mp){ //moving in map
        if(size<i.second.size()){ //finding largest size vector of anagrams
                ans=i.second;
                size=i.second.size();
        }
}
cout<<"Longest List of Anagrams is"<<endl;
for(auto i: ans) cout<<i<<endl;
cout<<"Size of List is "<<ans.size()<<endl;
MyReadFile.close();

}

/*
TC:- O(n(logm)) where n=no. of string in test case and m is length of each string
SC:- O(n)
*/
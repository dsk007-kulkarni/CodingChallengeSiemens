#include <bits/stdc++.h>
using namespace std;

int main() {
        string s;
        getline(cin,s);
        vector<int> v(26,0);
        for(int i=0;i<s.length();i++){
                if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')){
                        if(s[i]>='A' && s[i]<='Z'){
                                v[s[i]-65]++;
                        }else{
                                v[s[i]-97]++;
                        }
                }
        }
        for(int i=0;i<26;i++){
                if(v[i]>0){
                        while(v[i]--){
                                cout<<(char)(i+97);
                        }
                }
        }
} 
// When not studying nuclear physics, Bambi likes to play beach volleyball.
#include <bits/stdc++.h>
using namespace std;

int main() {
        string s;
        getline(cin,s); //used for scaning the string with spaces
        vector<int> v(26,0);//created a vector of int of size 26 and initialized with 0.
        for(int i=0;i<s.length();i++){ //traversing the input
                if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')){
                        if(s[i]>='A' && s[i]<='Z'){
                                v[s[i]-65]++; //counting for the characters in the given string
                        }else{
                                v[s[i]-97]++;
                        }
                }
        }
        for(int i=0;i<26;i++){ //printing the given o/p format
                if(v[i]>0){
                        while(v[i]--){
                                cout<<(char)(i+97);
                        }
                }
        }
} 
// When not studying nuclear physics, Bambi likes to play beach volleyball.

/*
TC:- O(n) where n is length of string
SC:- O(1) constant
*/
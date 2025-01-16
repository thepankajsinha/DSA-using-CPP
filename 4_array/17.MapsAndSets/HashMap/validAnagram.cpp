#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t){  //O(n)
    // If lengths are not equal, they cannot be anagrams
    if (s.length()!= t.length()) return false;
    
    unordered_map<char, int> map1;
    unordered_map<char, int> map2;

    for(int i=0; i<s.length(); i++){
        map1[s[i]]++;
    }

    for(int i=0; i<t.length(); i++){
        map2[t[i]]++;
    }

    for(auto x : map1){
        char ch1 = x.first;
        int freq1 = x.second;

        if(map2.find(ch1)!=map2.end()){
            int freq2 = map2[ch1];
            if(freq1!= freq2) return false;
        }
        else return false;
    }
    return true;  // If all characters in s are also in t and vice versa, they are anagrams
}
int main(){
    string s = "anagram";
    string t = "nagaram";
    cout<<isAnagram(s, t)<<endl;
}
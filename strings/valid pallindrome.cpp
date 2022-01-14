#include<bits/stdc++.h>
#include <iostream>
#include <string>
// #include<bits:stdc++.h>
using namespace std;

int isValid(char ch) {
    if((ch>='a' && ch<='z') ||(ch>='A' && ch<='Z') ||(ch>='0' && ch<='9')){
        return true;
        
    }
    return false;
}
bool checkpallindrome(string s){
    int start = 0;
    int end = s.length()-1;
    // strin m= s;
    while(start<=end){
        if(s[start] != s[end]){
            return 0;
        }
        else{
           
           start++;
           end--;
        }
        
    }
    return 1;
}

bool isPallindrome(string s) {
    string temp="";
    //remove all backspaces and unnecessary elements 
    for(int i=0; i<s.length();i++) {
        // cout<<s[i];
        if(isValid(s[i])){
            temp.push_back(s[i]);
            // cout<<temp[i];
        }
        
    }
    cout<<temp;
    //convert in lowercase
    for(int i=0;i<temp.length();i++) {
        temp[i] = tolower(temp[i]);
    }
    // swapString(temp);
    return checkpallindrome(temp);
    
}
int main() {
    // cout<<"Hello World!";
    string s ="racgfhgecar";
   int mainResult= isPallindrome(s);
   cout<<endl;
    cout<<mainResult;
}

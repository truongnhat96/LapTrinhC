#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool cmp(string a,string b){
    string u=a+b;
    string v=b+a;
    return u>v;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string s;
    cin >> s;
    string tmp="";
    vector<string> v;
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i]) && s[i]!='0'){
            while(isdigit(s[i])){
                tmp+=string(1,s[i]);
                ++i;
            }
            --i;
            v.push_back(tmp);
            tmp="";
        }
    }
    sort(v.begin(),v.end(),cmp);
    for(string x : v){
        cout << x;
    }
    return 0;
}
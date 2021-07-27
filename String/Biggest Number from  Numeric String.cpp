#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    string s = "6673893";

//sort in decreasing order
    sort(s.begin(),s.end(),greater<int>());
    cout<<s;
    return 0;
}

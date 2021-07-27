#include<iostream>
#include<algorithm>
#include<string>
#include <bits/stdc++.h>
using namespace std;

int main(){
/* string s1="fam";
string s2 ="ily"; */

/* concatenate

s1.append(s2);
s1 = s1+s2;
cout<<s1<<endl;

cout<<s1[1]; //a */

/* string abc = "ramya sahyadri college" ;
abc.clear(); //clears the string no output
cout<<abc; */


/* string s1 =  "abc";
string s2 ="abc";

if(!s1.compare(s2) == 0)
    cout<< "Strings are not  equal" <<endl;
cout<<s2.compare(s1)<<endl; */


/* string s1 ="RamyashriHebbar";
s1.erase(5,4);
cout<<s1;//Ramyahebbar */

/* 
finding index of matched substring
string s1 = "RamyaHebbar";

cout<<s1.find("mya"); ans : 2*/

//string s1 ="RamyaHebbar";
//s1.insert(5,"shri"); RamyashriHebbar
/* cout<<s1.length();
cout<<s1.size(); */

/* for(int i=0;i<s1.length();i++){
    cout<<s1[i]<<endl;
} */

/* string s = s1.substr(5,6);
cout<<s<<endl; */

/* string  s1 ="786";
int x= stoi(s1);//converting string to int
cout<<x+2; */

/* int x = 786;
cout<< to_string(x) + "2"; */

string s1 = "dutyuichvfujbh";
sort(s1.begin(),s1.end());//lexicogrsphic  sorting of words of string
cout<<s1;

    return 0;
}

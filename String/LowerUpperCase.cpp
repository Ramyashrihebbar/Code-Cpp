#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    string s ="sdfdgfhghjk";
  

    //convert to uppercase

     for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z')
            s[i]-=32;
    }
    cout<<s;
 

/* transform(s.begin(),s.end(),s.begin(),::toupper);
cout<<s; */
    //convert  to Lowercase
        for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z')
            s[i]+=32;
    }
    cout<<endl<<s;

   /*  transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<endl<<s; */
    return 0;
}

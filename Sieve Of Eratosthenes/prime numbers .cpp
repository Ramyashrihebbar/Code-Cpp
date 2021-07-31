#include<iostream>
using namespace std;
void primeSieve(int n){
    int prime[100] = {0} ;
    for(int i= 2 ;i<=n ;i++){
        if(prime[i] ==0)//unmarked
        {
            for(int j = i*i ; j<=n;j+=i)//traverse fr its multiple and mark it as 1
            {
                prime[j]=1;
            }
        }
    }
    //printing pprime
     for(int i= 2 ;i<=n ;i++){
         if(prime[i] == 0){
             cout<<i<<" ";
         }
}
cout<<endl;
}
int main(){
    int n;
    cin>>n;
    primeSieve(n);
    return  0;
}

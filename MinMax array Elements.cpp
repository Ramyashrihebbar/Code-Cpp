#include<iostream>
using namespace std;

int main(){
    int n;
    int maxno = n;//INT_MAX
int minno = 0;//INT_MIN
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
for(int i=0;i<n;i++){
        if(arr[i]>maxno)
            maxno = arr[i];
        if(arr[i]<maxno)
            minno = arr[i];
    }
    return 0;
}
